#include <iostream>
#include <ctime>

#include "GUI.h"

using namespace std;

int main()
{
  GUI gui;
  time_t lastUpdate;
  time_t now;
  lastUpdate = time(&now);
  int i = 0;
  while (1)
  {
    time(&now);
    if (gui.Update(now - lastUpdate >= 1))
    {
      time(&lastUpdate);
    }
  }
  
  return 0;
}
