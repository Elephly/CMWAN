#include "Input.h"

Input::Input()
{

}

Input::~Input()
{

}

void Input::Update()
{
  thread unblockedInput(&Input::GetInput, this);
  unblockedInput.join();
}

void Input::GetInput()
{

}
