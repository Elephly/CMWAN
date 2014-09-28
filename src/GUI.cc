#include "GUI.h"

GUI::GUI()
{
  system("resize -s 40 100");
}

GUI::~GUI() { }

bool GUI::Update(bool force)
{
  if (force)
  {
    system("clear");
    display = "";
    for (int i = 0; i < 40; i++)
    {
      for (int j = 0; j < 100; j++)
      {
        display.push_back('.');
      }
    }
    cout << display;
    cout.flush();
  }
  return force;
}
