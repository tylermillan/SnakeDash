//header file
#ifndef MAINBOARD_H_
#define MAINBOARD_H_

class mainBoard {
private:
    int size;
    char** ary;
    int running;
    int color;
    int food;
    int count;
    int column;
    int direction;
    int row;
    int errorid;
    int diff;
    int timelimit;
    int timer;


public:
    mainBoard();
    mainBoard(int s);
    void initMainBoard();
    void initSnake();
    void printMainBoard();
    void runThreads();
    void dropFood();
    void setcolor(int s);
    void runGame();
    void setDiff(int g);
    void setTimeLimit();
    void dropTrap();
    void runTimer();
    void getUserInput();
    int moveSnakeUp();
    int moveSnakeDown();
    int moveSnakeLeft();
    int moveSnakeRight();
    void deleteMainBoard();
    
};


#endif /*MAINBOARD_H_*/
