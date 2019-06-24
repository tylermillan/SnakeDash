#include <ncurses.h>
#include <iostream>
#include <thread>
#include <chrono>
#include <string>

#include "mainBoard.hpp"
using namespace std;

mainBoard::mainBoard(int n): size(n) {}
mainBoard::mainBoard(){}

void mainBoard::initMainBoard() {
    timer = 1; //set timer equal to true to run initially
    count =0; //keeps score of how much food has been eaten
    errorid = 0; //used for letting user know why the error occured
    setTimeLimit(); //start timer
    food = 0; //checks if food is already being displayed
    row = 0; //current row of snake head
    column = 0; //current col of snake head
    ary = new char*[size]; //allocate memory for 2d dynamic array
    for (int i =0; i < size; i++) {
        ary[i] = new char[size];
        for(int j=0;j<size; j++) {
            ary[i][j]= '.';
        }
    }
}


void mainBoard::initSnake() {
    //initialize snake head to middle of the board
    int half = size/2;
    ary[half][half] = '@';
    row = half; //set current row of snake head
    column = half; //set current column of snake head
}

//set color
void mainBoard::setcolor(int s){
    color = s;

}
//set difficulty
void mainBoard::setDiff(int g){
    diff = g;

//set Time Limit
}
void mainBoard::setTimeLimit(){
    timelimit=0;
    switch(size){
        case 12:
            timelimit = 30000;

            break;
        case 16:
            timelimit = 60000;
            break;
        case 32:
            timelimit = 90000;
            break;

}
}
//print the mainBoard
void mainBoard::printMainBoard(){
    int i, j;
    for(i = 0; i < size; i++) {
        for(j = 0; j < size; j++) {
            printw("%c   ",ary[i][j]);
        }
        printw("\n");
    }
}

//run all four threads
void mainBoard::runThreads() {
    thread thread1(&mainBoard::getUserInput, this); //user input thread
    thread thread2(&mainBoard::dropFood, this); //drop food thread
    thread thread3(&mainBoard::dropTrap, this); //drop traps thread
    thread thread4(&mainBoard::runTimer, this); //start timer thread
    //join all threads together
    thread1.join();
    thread2.join();
    thread3.join();
    thread4.join();
}

//run timer, program will terminte after this thread ends if the user has not already exited the game
void mainBoard::runTimer() {
    this_thread::sleep_for(chrono::milliseconds(timelimit));
    timer = 0;

}

//drop food on the board to be eaten by the snake
void mainBoard::dropFood(){
    this_thread::sleep_for(chrono::milliseconds(800)); //sleep for .8 seconds
    int a,b;
    while(true) {
            //create random coordinates 
            a = rand() % size;
            b= rand() % size;
            //check to see if the current spot on board is taken by snake head or trap
            while(ary[a][b] == '@' || ary[a][b] =='^') {
                a = rand() % size;
                b= rand() % size;
            }

            //only place food if it doesnt exist on the board
            if (food == 0) {
                ary[a][b] = '*'; // food
                food =1;

            }  
    }
}

//drop traps on the board
void mainBoard::dropTrap(){
    //set speed which represents how fast the traps are set on the board based on the difficulty the user gave
    int speed = 0;
    switch(diff){
        case 1:
            speed = 2000;
            break;
        case 2:
            speed = 1000;
            break;
        case 3:
            speed = 350;
            break;
    }
    //sleep to allow board to print 
    this_thread::sleep_for(chrono::milliseconds(1000));
    int x, y;

    while(true) {  
            int flag = 0; //flag used for if location is valid
            //get random x, y coordinates
            x = rand() % size;
            y= rand() % size;

            //check for top
            if(x-1 == row && y == column) {
                flag = 1;
            }
            //check for down
            if(x + 1 == row && y == column) {
                flag = 1;
            }
            //check for left
            if(y - 1 == column && x == row) {
                flag = 1;
            }

            //check for right
            if(y + 1 == column && x == row) {
                flag = 1;
            }
            //check for current snake head and food and if flag is set to indicate invalid location(i,e, outside of board such as -1, 0)
            while(ary[x][y] == '@' || ary[x][y] =='*' || flag) {
                x = rand() % size;
                y= rand() % size;
                flag = 0;
                //check for top
                if(x-1 == row && y == column) {
                    flag = 1;
                }
                //check for down
                if(x + 1 == row && y == column) {
                    flag = 1;
                }
                //check for left
                if(y - 1 == column && x == row) {
                    flag = 1;
                }

                //check for right
                if(y + 1 == column && x == row) {
                    flag = 1;
                }
            }
            ary[x][y] = '^'; //set the traps at a random location where the head of the snake and food is not currently at
            clear(); //clear last board
            printMainBoard(); //print current board
            this_thread::sleep_for(chrono::milliseconds(speed)); //sleep based on speed which represents the difficulty
        
    }
}

//main function to get user input to change direction based on keyboard input
void mainBoard::getUserInput() {
    initscr(); //initialize screen and create ncurses data structures
    start_color(); //create color font and background
    // Pairs the colors and sets them with an id to be called upon later
    init_pair(1, COLOR_RED, COLOR_WHITE);
    init_pair(2, COLOR_GREEN, COLOR_BLACK);
    init_pair(3, COLOR_BLACK, COLOR_YELLOW);
    init_pair(4, COLOR_WHITE, COLOR_BLACK);
    //sets the screen color with the the desired color pair
    wbkgd(stdscr, COLOR_PAIR(color));
    noecho(); //dont print key input
    timeout(0);
    printMainBoard(); //print first board
    int x = 0; //checks if move was valid 
    int running = 1; //class variable that will breake the while loop below if move is invalid
    do
    {
        //gets the keyboard character from the user
        int c = getch();
        switch (c) {
            //checks both upper and lowercase w
            case 'W':
            case 'w': {
                //flushes previously entered characters in buffer
                flushinp();
                //clears the current board in preperation of moving the snake head
                clear();
                //Move the snake head up and capture possible exit cases
                x = moveSnakeUp();
                if(x == 0) {
                    //if an exit case was given, breaks the while loop to end the program 
                    running = 0;
                }
                break;
            }
            //checks both upper and lowercase s
            case 'S':
            case 's': {
                //flushes previously entered characters in buffer
                flushinp();
                //clears the current board in preperation of moving the snake head
                clear(); 
                //Move the snake head down and capture possible exit cases
                x = moveSnakeDown();
                if(x == 0) {
                    //if an exit case was given, breaks the while loop to end the program 
                    running = 0;
                }
                break;
            }
            //checks both upper and lowercase d    
            case 'D':
            case 'd': {
                //flushes previously entered characters in buffer
                flushinp();
                //clears the current board in preperation of moving the snake head
                clear();
                //Move the snake head right and capture possible exit cases
                x = moveSnakeRight();
                if(x == 0) {
                    //if an exit case was given, breaks the while loop to end the program 
                    running = 0;
                }
                break;
            }
            //checks both upper and lowercase a    
            case 'A':
            case 'a': {
                //flushes previously entered characters in buffer
                flushinp();
                //clears the current board in preperation of moving the snake head
                clear();
                //Move the snake head left and capture possible exit cases
                x = moveSnakeLeft();
                if(x == 0) {
                    //if an exit case was given, breaks the while loop to end the program 
                    running = 0;
                }
                break;
            }
                
            case 27: {
                running = 0;
                errorid = 3;
                //User Escaped Game using esc or arrow keys
                break;
            }
        }
        //while loop continues until either exit case is given or timer runs out
    } while (running && timer);
    //closes the ncurses window and returns to terminal
    endwin();
    //row of stars for formatting
    cout << "***************"<<endl;
    //game over message is printed
    cout << "GAME OVER" << endl;
    //Returns a message stating what caused the game to end
    if (errorid==1){
        cout << "User Went Out Of Bounds!" << endl;
    }
    if (errorid==2){
        cout << "User Hit a Trap!"<<endl;
    }
    if (errorid==3){
        cout << "User Escaped Game using esc or arrow keys"<<endl;
    }
    //returns the score(i.e. the number of food the snake head ate)
    cout << "Your Score:" << count << endl;
    //exits the program
    exit(1);
}

//Moves the snake head up by one row(i.e. decrement row by one)
int mainBoard::moveSnakeUp() {
    int num = 0;
    int y, z;
    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size; j++) {
            if(ary[i][j] == '@') {
                ary[i][j] = '.';
                y = i;
                z = j;
            }
        }
    }
    if(y == num) {
        errorid = 1; //out of bounds 
        return 0;
    }
    if (ary[y-1][z]=='*'){
        food = 0; //Ate Food
        count++;

    }
    if (ary[y-1][z]=='^'){
        errorid = 2; //Hit Trap
        return 0;

    }
    ary[y-1][z] = '@';
    row = y-1;
    column = z;
    //prints the gameboard with updated snake location
    printMainBoard();
    return 1;
}

//Moves the snake head down by one row(i.e. increment row by one)
int mainBoard::moveSnakeDown(){
    int num = size;
    int y, z;
    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size; j++) {
            if(ary[i][j] == '@') {
                ary[i][j] = '.';
                y = i;
                z = j;
            }
        }
    }

    if(y == num -1) {
        errorid = 1; //out of bounds 
        return 0;
    }

    if (ary[y+1][z]=='*'){
        food = 0; //Ate Food
        count++;
    }

    if (ary[y+1][z]=='^'){
        errorid = 2; //Hit Trap
        return 0;

    }
    ary[y+1][z] = '@';
    row = y+1;
    column = z;
    //prints the gameboard with updated snake location
    printMainBoard();
    return 1;
}
//Moves the snake head right by one column(i.e. increment column by one)
int mainBoard::moveSnakeRight(){
    int num = size;
    int y, z;
    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size; j++) {
            if(ary[i][j] == '@') {
                ary[i][j] = '.';
                y = i;
                z = j;
            }
        }
    }
    if(z+1 == num) {
        errorid = 1; //out of bounds 
        return 0;
    }

    if (ary[y][z+1]=='*'){
        food = 0; //Ate Food
        count++;
    }

    if (ary[y][z+1]=='^'){
        errorid = 2; //Hit Trap
        return 0;
    }
    ary[y][z+1] = '@';
    row = y;
    column = z+1;
    //prints the gameboard with updated snake location
    printMainBoard();

    return 1;   
}
//Moves the snake head left by one column(i.e. decrement column by one)
int mainBoard::moveSnakeLeft(){
    int num = 0;
    int y, z;
    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size; j++) {
            if(ary[i][j] == '@') {
                ary[i][j] = '.';
                y = i;
                z = j;
            }
        }
    }
    if(z == num) {
        errorid = 1; //out of bounds 
        return 0;
    }
    if (ary[y][z-1]=='*'){
        food = 0; //Ate Food
        count++;
    }

    if (ary[y][z-1]=='^'){
        errorid = 2; //Hit Trap
        return 0;
    }
    ary[y][z-1] = '@';
    row = y;
    column = z-1;
    //prints the gameboard with updated snake location
    printMainBoard();
    return 1;
}


//Deletes the array of the main board
void mainBoard::deleteMainBoard() {
    for (int i = 0; i < size; i++) {
        delete [] ary[i];
    }
    //Free the array of pointers
    delete [] ary;
}


