#ifndef OLDNINJA_HPP
#define OLDNINJA_HPP
namespace ariel{};
#include <iostream>
#include "Point.hpp"
#include "Character.hpp"
using namespace std;
class OldNinja : public Character {
  public:
    string name;
    Point p;
    OldNinja(string n, Point loc):Character(n,loc){};
};

#endif