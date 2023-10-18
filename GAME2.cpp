#include <iostream>
#include <windows.h>
using namespace std;

void printMaze();
void printScore();
void printPlayer();
void erasePlayer();
void movePlayer();
void movePlayerLeft();
void movePlayerRight();
void movePlayerUp();
void movePlayerDown();
void printEnemy1();
void eraseEnemy1();
void moveEnemy1(string &direction);
void printEnemy2();
void eraseEnemy2();
void moveEnemy2(string &direction);
void printEnemy3();
void eraseEnemy3();
void moveEnemy3(string &directionX, string &directionY);
void gotoxy(int x, int y);
char getCharAtxy(short int x, short int y);

int pX = 20, pY = 17;
int eX1 = 1, eY1 = 1;
int eX2 = 40, eY2 = 1;
int eX3 = 1, eY3 = 5;
int score = 0;

main()
{
    string direction1 = "right";
    string direction2 = "down";
    string direction3X = "right";
    string direction3Y = "down";
    system("cls");
    printMaze();
    printPlayer();
    printEnemy1();
    printEnemy2();
    printEnemy3();

    while (true)
    {
        if (GetAsyncKeyState(VK_LEFT))
        {
            movePlayerLeft();
        }

        if (GetAsyncKeyState(VK_RIGHT))
        {
            movePlayerRight();
        }

        if (GetAsyncKeyState(VK_UP))
        {
            movePlayerUp();
        }

        if (GetAsyncKeyState(VK_DOWN))
        {
            movePlayerDown();
        }
        moveEnemy1(direction1);
        moveEnemy2(direction2);
        moveEnemy3(direction3X, direction3Y);
        printScore();

        Sleep(100);
    }
}

void printPlayer()
{
    gotoxy(pX, pY);
    cout << "     ^     ";
    gotoxy(pX, pY + 1);
    cout << "|#########|";
    gotoxy(pX, pY + 2);
    cout << "|#########|";
    gotoxy(pX, pY + 3);
    cout << "|#########|";
}

void erasePlayer()
{
    gotoxy(pX, pY);
    cout << "           ";
    gotoxy(pX, pY + 1);
    cout << "           ";
    gotoxy(pX, pY + 2);
    cout << "           ";
    gotoxy(pX, pY + 3);
    cout << "           ";
}

void movePlayerLeft()
{
    if (getCharAtxy(pX - 1, pY) != '#')
    {
        erasePlayer();
        pX = pX - 1;
       if (getCharAtxy(pX, pY) == '$' || getCharAtxy(pX, pY + 1) == '$' || getCharAtxy(pX, pY + 2) == '$' || getCharAtxy(pX, pY + 3) == '$')
        {
            score++;
        }
        printPlayer();
    }
}

void movePlayerRight()
{
    if (getCharAtxy(pX + 11, pY) != '#')
    {
        erasePlayer();
        pX = pX + 1;
        if (getCharAtxy(pX + 10, pY) == '$' || getCharAtxy(pX + 10, pY + 1) == '$' || getCharAtxy(pX + 10, pY + 2) == '$' || getCharAtxy(pX + 10, pY + 3) == '$')
        {
            score++;
        }
        printPlayer();
    }
}

void movePlayerUp()
{
    if (getCharAtxy(pX, pY - 1) != '#')
    {
        erasePlayer();
        pY = pY - 1;
        if (getCharAtxy(pX, pY) == '$' || getCharAtxy(pX + 1, pY) == '$' || getCharAtxy(pX + 2, pY) == '$' || getCharAtxy(pX + 3, pY) == '$')
        {
            score++;
        }
        printPlayer();
    }
}

void movePlayerDown()
{
    if (getCharAtxy(pX, pY + 4) != '#')
    {
        erasePlayer();
        pY = pY + 1;
        if (getCharAtxy(pX, pY + 3) == '$' || getCharAtxy(pX + 1, pY + 3) == '$' || getCharAtxy(pX + 2, pY + 3) == '$' || getCharAtxy(pX + 3, pY + 3) == '$')
        {
            score++;
        }
        printPlayer();
    }
}
void printScore()
{

    gotoxy(60, 5);
    cout << "SCORE: " << score;
}

void printEnemy1()
{
    gotoxy(eX1, eY1);
    cout << "|********|";
    gotoxy(eX1, eY1 + 1);
    cout << "|********|";
    gotoxy(eX1, eY1 + 2);
    cout << "|********|";
    gotoxy(eX1, eY1 + 3);
    cout << "|********|";
}

void eraseEnemy1()
{
    gotoxy(eX1, eY1);
    cout << "          ";
    gotoxy(eX1, eY1 + 1);
    cout << "          ";
    gotoxy(eX1, eY1 + 2);
    cout << "          ";
    gotoxy(eX1, eY1 + 3);
    cout << "          ";
}

void moveEnemy1(string &direction)
{
    eraseEnemy1();

    if (direction == "right" && eX1 < 40)
    {
        eX1 = eX1 + 1;
    }
    else if (direction == "right")
    {
        direction = "left";
    }

    if (direction == "left" && eX1 > 1)
    {
        eX1 = eX1 - 1;
    }
    else if (direction == "left")
    {
        direction = "right";
    }

    printEnemy1();
}

void printEnemy2()
{
    gotoxy(eX2, eY2);
    cout << "|********|";
    gotoxy(eX2, eY2 + 1);
    cout << "|********|";
    gotoxy(eX2, eY2 + 2);
    cout << "|********|";
    gotoxy(eX2, eY2 + 3);
    cout << "|********|";
}

void eraseEnemy2()
{
    gotoxy(eX2, eY2);
    cout << "          ";
    gotoxy(eX2, eY2 + 1);
    cout << "          ";
    gotoxy(eX2, eY2 + 2);
    cout << "          ";
    gotoxy(eX2, eY2 + 3);
    cout << "          ";
}

void moveEnemy2(string &direction)
{
    eraseEnemy2();

    if (direction == "down" && eY2 < 12)
    {
        eY2 = eY2 + 1;
    }
    else if (direction == "down")
    {
        direction = "up";
    }

    if (direction == "up" && eY2 > 1)
    {
        eY2 = eY2 - 1;
    }
    else if (direction == "up")
    {
        direction = "down";
    }

    printEnemy2();
}
void printEnemy3()
{
    gotoxy(eX3, eY3);
    cout << "|********|";
    gotoxy(eX3, eY3 + 1);
    cout << "|********|";
    gotoxy(eX3, eY3 + 2);
    cout << "|********|";
    gotoxy(eX3, eY3 + 3);
    cout << "|********|";
}

void eraseEnemy3()
{
    gotoxy(eX3, eY3);
    cout << "          ";
    gotoxy(eX3, eY3 + 1);
    cout << "          ";
    gotoxy(eX3, eY3 + 2);
    cout << "          ";
    gotoxy(eX3, eY3 + 3);
    cout << "          ";
}

void moveEnemy3(string &directionX, string &directionY)
{
    eraseEnemy3();

    if (directionX == "right" && eX3 < 15)
    {
        eX3 = eX3 + 1;
    }
    else if (directionX == "right")
    {
        directionX = "left";
    }

    if (directionX == "left" && eX3 > 1)
    {
        eX3 = eX3 - 1;
    }
    else if (directionX == "left")
    {
        directionX = "right";
    }

    if (directionY == "down" && eY3 < 12)
    {
        eY3 = eY3 + 1;
    }
    else if (directionY == "down")
    {
        directionY = "up";
    }

    if (directionY == "up" && eY3 > 1)
    {
        eY3 = eY3 - 1;
    }
    else if (directionY == "up")
    {
        directionY = "down";
    }

    printEnemy3();
}
void printMaze()
{
    cout << "####################################################" << endl;
    cout << "#                                                  #" << endl;
    cout << "#                                                  #" << endl;
    cout << "#                                                  #" << endl;
    cout << "#                                                  #" << endl;
    cout << "#                                                  #" << endl;
    cout << "#                                                  #" << endl;
    cout << "#                                                  #" << endl;
    cout << "#                                                  #" << endl;
    cout << "#                $                                 #" << endl;
    cout << "#                                                  #" << endl;
    cout << "#          $                                       #" << endl;
    cout << "#                   $                              #" << endl;
    cout << "#      $     $             $                       #" << endl;
    cout << "#                 $             $  $               #" << endl;
    cout << "#        $                                         #" << endl;
    cout << "#                  $        $          $           #" << endl;
    cout << "#          $                                       #" << endl;
    cout << "#                                                  #" << endl;
    cout << "#                                                  #" << endl;
    cout << "#                                                  #" << endl;
    cout << "#                                                  #" << endl;
    cout << "####################################################" << endl;
}

void gotoxy(int x, int y)
{
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

char getCharAtxy(short int x, short int y)
{
    CHAR_INFO ci;
    COORD xy = {0, 0};
    SMALL_RECT rect = {x, y, x, y};
    COORD coordBufSize;
    coordBufSize.X = 1;
    coordBufSize.Y = 1;
    return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufSize, xy, &rect) ? ci.Char.AsciiChar : ' ';
}
