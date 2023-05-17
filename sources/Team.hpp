#ifndef TEAM_HPP
#define TEAM_HPP
#include "string"
#include "Point.hpp"
#include "Character.hpp"
#include "Cowboy.hpp"
#include "Ninja.hpp"
#include "OldNinja.hpp"
#include "YoungNinja.hpp"
#include "TrainedNinja.hpp"
#include <iostream>
#include <vector>
using namespace std;
class Team {
    std::vector <Character * > _team;
    Character *leader;

    public:
    Team(Character * l){leader = l;};
    void add(Character *c){
        _team.push_back(c);
    }
    int stillAlive(){return 0;};
    void attack(Team *other){};
    void print(){};


};
#endif