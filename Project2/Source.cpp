#include <iostream>;
#include <ctime>;
using namespace std;

//#define PI = 3.14;

enum Gender
{
	male,
	female
};
struct Student {
	string name;
	int age;
	Gender gender;
};


int main() {

	//Exercise 1.3
	/*
	const double PI = 3.14159;
	const char TAB = '\t';
	int radius = 5;

	cout << "Radius" << TAB << "Circle" << endl;
	cout << radius << TAB << 2 * radius * PI << endl;
	radius = 10;
	cout << radius << TAB << 2 * radius * PI << endl;
	radius = 20;
	cout << radius << TAB << 2 * radius * PI << endl;

	*/

	//Exercise 2.3

	/* 
	double da = 5.5;
	double db = 5.5;
	int result1 = (int)da + (int)db;	//10
	int result2 = (int)da + db;		//10
	int result3 = (int)(da + db);	//11

	cout << result1 << endl;
	cout << result2 << endl;
	cout << result3 << endl;
	*/

	
	/*
	double da[5];
	int db[] = { 1,2,3,4,5 };
	int* p;
	double* q;
	cout << sizeof(da) << endl;
	cout << sizeof(da[1]) << endl;
	cout << sizeof(db) << endl;
	cout << sizeof(db[1]) << endl;
	cout << sizeof(p) << endl;
	cout << sizeof(q) << endl;
	cout << &da << endl;
	cout << &da[0] << endl;
	cout << &da[1] << endl;
	cout << &da[4] << endl;
	cout << &p << endl;
	
	
	int a = 5, b = 8;
	int c;

	c = a++ + a++; //5+5 = 10   a = 6
	cout << c << endl;
	c = --b + b - 10; //(8-1) + 7 -10 = 4    b = 7
	cout << c << endl;
	c = 50 - ++a + b++; // 50 - 8 + 7 = 49
	cout << c << endl;
	

	int a, b;
	cout << "please input a:";
	cin >> a;
	cout << "please input b:";
	cin >> b;
	a > b ? cout << "maximum value is " << a : cout << "maximum value is " << b;

	*/

	//Exercise 4.1 
	/*

	int a, b, c;
	cout << "Please input positive integers only" << endl;
	cout << "a: ";
	cin >> a;
	cout << "b: ";
	cin >> b;
	cout << "c: ";
	cin >> c;

	int hypothenus = 0;

	

	//Check with pythagore 

	a > b && a > c ? hypothenus = a, a = b, b = c : hypothenus = hypothenus;
	b > a && b > c ? hypothenus = b, b = c : hypothenus = hypothenus;
	c > a && c > b ? hypothenus = c : hypothenus = hypothenus;

	if (pow(hypothenus, 2) == pow(a, 2) + pow(b, 2)) {
		double s = double (a + b + c) / 2;
		double area = sqrt(s * (s - a) * (s - b) * (s - c));
		cout << "The area of the triangle is " << area << endl;
	}
	else {
		cout << "The values of the vertices do not follow Pythagore's rule. Therefore, it is not a triangle." << endl;
	}

	*/

		
	//Exercise 4.2

	/*
	int a[10];
	srand(time(0)); //generate rand seed
	for (int i = 0; i < 10; i++)
	{
		a[i] = rand() % 10;
		cout << a[i] << endl;
	}

	int sum = 0;
	for (int i = 0; i < 10; i++) {
		sum = sum + a[i];
	}

	double mean = (double) sum / 10.0;

	cout << "The mean is " << mean << endl;
	*/

	//Exercice 4.3 


	//Student s;
	int gender;
	//cin >> s.name;
	//cin >> s.age;
	//cin >> gender;
	//s.gender = (Gender)gender;
	//cout << s.name << endl;
	//cout << s.age << endl;
	//cout << s.gender << endl;

	Student stu[5];

	for (int i = 0; i < 5; i++) {
		cout << "Name: " << endl;
		cin >> stu[i].name;
		cout << "Age: " << endl;
		cin >> stu[i].age;
		cout << "Gender (1 for male and 2 for female): " << endl;
		cin >> gender;
		stu[i].gender = (Gender)gender;
	}

	cout << "Here are the members of stu" << endl;
	cout << "Name \t Age \t Gender" << endl;

	int sum_age = 0;
	int num_male = 0;

	for (int i = 0; i < 5; i++) {
		cout << stu[i].name << "\t" << stu[i].age << "\t" << stu[i].gender << endl;
		sum_age += stu[i].age;
		if (stu[i].gender == 1) {
			num_male++;
		}
	}

	double mean_age = (double)sum_age / 5;
	int num_female = 5 - num_male;

	cout << "The mean age of the class is " << mean_age << endl;
	cout << "There are " << num_male << "males and " << num_female << "females in the class." << endl;

}