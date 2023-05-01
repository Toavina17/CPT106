#pragma once
// The class of players
// including the general properties and methods related to a character

#ifndef _PLAYER
#define _PLAYER
#include <iostream>
#include <string>
#include <time.h> // use for generating random factor
#include "container.h"
using namespace std;


class player
{
private:
	int HP, HPmax, MP, MPmax, AP, DP, speed, EXP, LV;
	// General properties of all characters
	string name; // character name
	container bag; // character's inventory
	bool playerdeath;
public:
	player(int lv_in = 1, string name_in = "Not Given");
	void isLevelUp(); // level up judgement
	void reFill(); // character's HP and MP resume
	bool death(); // report whether character is dead
	void isDead(); // check whether character is dead
	bool useHeal(); // consume heal
	bool useMW(); // consume magic water


};


player::player(int lv_in = 1, string name_in = "Not Given") {
	LV = lv_in;
	name = name_in;
};

#endif
