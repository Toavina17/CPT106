#include <iostream>;
#include "time.h";
#include <string>;
#include <ctime>;
using namespace std;

/*

struct employee {
	long ID;
	char name[50];
	long dob;
	int office;
	int workhour;
};

*/

struct member {
	int ID;
	string name;
	long dob;
	int office;
	int workhour;
};

//The declaration of member functions has be to placed in the class body;

/* 
class time
{
private:
	//data members;
	int hour, minute, second;
public:
	//declaration of the method
	void setTime(int H, int M, int S);
};

*/

//definition of the method: can b eplaced outside of the class 

void time::setTime(int H, int M, int S)
{
	hour = H;
	minute = M;
	second = S;
}

void print_members_info(member member) {
	cout << "ID: " << member.ID << endl;
	cout << "Name: " << member.name << endl;
	cout << "Date of birth: " << member.dob << endl;
	cout << "Office number: " << member.office << endl;
	cout << "Number of working hours per day: " << member.workhour << endl;
}

member create_member() {

	int id, office_number, working_hours;
	long dob;
	string name;

	cout << "ID: " << endl;
	cin >> id;
	cout << "Name: " << endl;
	cin >> name;
	cout << "Date of birth: " << endl;
	cin >> dob;
	cout << "Office number: " << endl;
	cin >> office_number;
	cout << "Number of working hours per day: " << endl;
	cin >> working_hours;

	member p1 = { id, name, dob, office_number, working_hours };

	return p1;
}

int main() {
		
	member p1 = create_member();
	print_members_info(p1);


}


	






/* 

int main() {

	//Access through a pointer which points to the structure variable	

	employee group1[5];
	employee* ptrstr = &group1[0];

	//string team_array[5];
	int id[5];
	string name[5];
	string dob[5];
	int office_number[5];
	int working_hours[5];

	for (int i = 0; i < 5; i++) {
		cout << "ID: " << endl;
		cin >> id[i];
		cout << "Name: " << endl;
		cin >> name[i];
		cout << "Date of birth: " << endl;
		cin >> dob[i];
		cout << "Office number: " << endl;
		cin >> office_number[i];
		cout << "Number of working hours per day: " << endl;
		cin >> working_hours[i];
		
	}
	
}

*/
