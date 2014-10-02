#include "Input.h"

Input::Input()
{

}

Input::~Input()
{

}

void Input::Update()
{

}

void Input::GetInput()
{

}

void Input::initTermios(int echo)
{
  tcgetattr(0, &oldS); /* grab old terminal i/o settings */
  newS = oldS; /* make new settings same as old settings */
  newS.c_lflag &= ~ICANON; /* disable buffered i/o */
  newS.c_lflag &= echo ? ECHO : ~ECHO; /* set echo mode */
  tcsetattr(0, TCSANOW, &newS); /* use these new terminal i/o settings now */
}

void Input::resetTermios()
{
  tcsetattr(0, TCSANOW, &oldS);
}

char Input::getch_(int echo)
{
  char ch;
  initTermios(echo);
  ch = getchar();
  resetTermios();
  return ch;
}

char Input::getch()
{
  return getch_(0);
}

char Input::getche()
{
  return getch_(1);
}
