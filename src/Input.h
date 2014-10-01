#ifndef INPUT_H
#define INPUT_H

#include <iostream>
#include <thread>

using namespace std;

class Input
{
  public:
    Input();
    ~Input();
    void Update();
  private:
    void GetInput();
};

#endif
