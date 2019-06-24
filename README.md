# SnakeDash
Group Members: Tyler Millan, Bryce Di Geronimo

Description of Project:
This is a modified version of the classic snake game written in C++. It uses a snake head which the user is able
to move towards randomly placed food to increase their score. Users have to avoid randomly placed traps as
well. The goal of the game is to capture the most food items in the specified time limit based on the board size.
Instructions:
1. Clone this repo into local linux enviroment
2. Change directory into this repo and run the command "make run"
3. run the command "./run" to execute the program
4. Users are prompted to enter a board size(Options are 12, 16, 32)
Size adjusts the time limit for the game (size 12 = 30 seconds, 16 = 1 muinute, 32 = 1 minute 30 seconds)
5. Users are prompted a difficulty 1,2,3 where (1 is the easiest and 3 is the hardest)
Diffuculty adjusts the speed at which traps are place on the board.
6. Users are then prompted for the desired color scheme. (4 predefined options are described in the prompt)
7. A board will be displayed.
8. To move the snake head, the user can press or hold down: W=UP, A = LEFT, S = DOWN, D=RIGHT, the input is case
insensitive meaning the user can use capital or lowercase keys. 
9. The game ends when a user, navigates outside the board, hits a trap, or the timer expires.
10. A user can also exit the game by using the escape key or any of the arrow keys.
11. The users score(i.e. how many food items eaten) will be displayed.
