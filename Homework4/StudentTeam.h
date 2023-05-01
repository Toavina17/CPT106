#pragma once
#include "Header.h"

class StudentTeam
{
	private:
		string teamName;//the team name
		static const int TEAM_NUMBER = 2;
		Student stuArray[TEAM_NUMBER];//students in the team
	public:
		StudentTeam(string name) {
			teamName = name;
			for (int i = 0; i < TEAM_NUMBER; i++) {
				stuArray[i].Input();
			};
		}; //stuArray initialization here.
		void Print();//print all the students in the team
		double meanAge();//get the average age of all students
};

void StudentTeam::Print() {
	for (int i = 0; i < TEAM_NUMBER; i++) {
		stuArray[i].Print();
	};
};

double StudentTeam::meanAge() {
	double sum = 0;
	double mean;
	for (int i = 0; i < TEAM_NUMBER; i++) {
		sum += stuArray[i].getAge();
	};
	mean = sum / TEAM_NUMBER;

};