#ifndef CHARACTER_HPP
#define CHARACTER_HPP
using namespace std;
#include <iostream>
#include "Point.hpp"
class Character {
  public:
    string name;
    Point p;
    Character(string n, Point loc){name = n; p = loc;};
    void move(Character* other){};
    void slash(Character* other){};
    void shoot(Character*){};
    string print(){return " ";};

};
#endif