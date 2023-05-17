#ifndef COWBOY_HPP
#define COWBOY_HPP
namespace ariel{};
#include <iostream>
#include "Character.hpp"
#include "Point.hpp"
using namespace std;
class Cowboy : public Character {
  public:
    string name;
    Point p;
    Cowboy(string n, Point q):Character(n,q){};
};
#endif