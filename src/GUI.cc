#include "GUI.h"

GUI::GUI()
{
  system("resize -s 40 100");
}

GUI::~GUI() { }

void GUI::Update()
{
  system("clear");
  display = "";
  for (int i = 0; i < 100; i++)
  {
    for (int j = 0; j < 40; j++)
    {
      display.push_back('.');
    }
  }
  cout << display;
}
