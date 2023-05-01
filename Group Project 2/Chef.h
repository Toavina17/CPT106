#pragma once
#include "Header.h"
#include "People.h"

class Chef : public People
{
public:
    Chef(string n) { n = name; };
    int choice();
    void activity(int n, Chef person);

};

