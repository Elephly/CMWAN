#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H

class GameObject
{
  public:
    GameObject();
    GameObject(int, int, char);
    ~GameObject();

  private:
    int posX;
    int posY;
    char icon;
};

#endif
