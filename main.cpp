#include "mainBoard.hpp"
#include <iostream>
#include <thread>
#include <string>
#include <algorithm>
using namespace std;


int main(int argc, char const *argv[])
{
    int num; //size of board
    int diff; //difficulty
    int list[] = {12,16,32}; //board size options
    int diffList[] = {1,2,3}; //difficulty options
    int choice; //color 
    int choicelist[] = {1,2,3,4}; //color options

    //input logic taken from https://www.youtube.com/watch?v=m2P5A4nR51g for all three inputs
    //prompt size of board
    cout << "Please enter the size of the board: 12, 16, or 32: ";
    cin >> num;

    //Checks if screen input was valid, if not keeps prompting
    while(!cin || find(begin(list), end(list), num) == end(list)) {
        cin.clear();
        cin.ignore(123, '\n');
        cout << "Please enter the size of the board: 12, 16, or 32: ";
        cin >> num;
    }
    //prompt difficulty
    cout << "Please enter the difficulty of the game. 1-3(1 is the easiest, 3 is the hardest): ";
    cin >> diff;
    
    //Checks if screen input was valid, if not keeps prompting
    while(!cin || find(begin(diffList), end(diffList), diff) == end(diffList)) {
        cin.clear();
        cin.ignore(123, '\n');
        cout << "Please enter the difficulty of the game. 1-3(1 is the easiest, 3 is the hardest): ";
        cin >> diff;
    }

     //Prompts Users for Desired Screen Color
    cout << "Please enter desired Color Scheme: "<<endl<<"1:Red Foreground w/ White Background"
    <<endl<<"2:Green Foreground w/ Black Background"<<endl<<"3:Black Foreground w/ Yellow Background"
    <<endl<<"4:White Foreground w/ Black Background"<<endl;


    cin >> choice;

    //Checks if screen input was valid, if not keeps prompting
    while(!cin || find(begin(choicelist), end(choicelist), choice) == end(choicelist)) {
        cin.clear();
        cin.ignore(123, '\n');

        cout << "Please enter desired Color Scheme: "<<endl<<"1:Red Foreground w/ White Background"
        <<endl<<"2:Green Foreground w/ Black Background"<<endl<<"3:Black Foreground w/ Yellow Background"
        <<endl<<"4:White Foreground w/ Black Background"<<endl;

        cin >> choice;
    }

    //Creates the mainBoard instance by passing it the size paramter that the user was prompted for
    mainBoard board(num);
    //inializes the board itself
    board.initMainBoard();
    //sets the color of the game board based of the users input
    board.setcolor(choice);
    //sets the difficulty of the game board based of the users input
    board.setDiff(diff);
    //initializaes the snake head in the center of the board
    board.initSnake();
    //runs the threads that start the game
    board.runThreads();
    //clears the main Board of the game after the game is done being run 
    board.deleteMainBoard();
    return 0;
}
