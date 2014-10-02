#ifndef INPUT_H
#define INPUT_H

#include <iostream>
#include <termios.h>

class Input
{
  public:
    Input();
    ~Input();
    void Update();
    char getch();
    char getche();
  private:
    void GetInput();
    
    struct termios oldS, newS;
    void initTermios(int);
    void resetTermios();
    char getch_(int);
};

#endif
