#include <iostream>
#include <ctime>

#include "GUI.h"

using namespace std;

int main()
{
  GUI gui;
  clock_t last = clock();
  clock_t now = clock();
  float timediff;
  int i = 0;
  while (1)
  {
    now = clock();
    timediff = ((float)(now - last)) / CLOCKS_PER_SEC;
    if (gui.Update(timediff >= 0.05f))
    {
      last = clock();
    }
  }
  
  return 0;
}
