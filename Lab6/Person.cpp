//#include "Person.h"
//#include <iostream>
//#include <string>
//
//using namespace std;
//
//
//int main()
//{
//	Person GSF("Bruce Wayne");
//
//	// 1. GSF bought the first car: a BMW X1 
//	Car car1 = ("BWM X1");
//	GSF.set_car(&car1);
//	GSF.display();
//
//	// 2. GSF bought the second car: a Porsche 911 
//	Car* pcar2 = new Car;
//	pcar2->set_car_name("Porsche 911");
//	GSF.set_car(pcar2);
//	GSF.display();
//
//	// 3. GSF bought the third car: a Bugatti Veyron 
//	Car* pcar3 = new Car;
//	pcar3->set_car_name("Bugatti Veyron");
//	GSF.set_car(pcar3);
//	GSF.display();
//	delete pcar3, pcar2;
//
//
//	return 0;
//}

//#include<iostream> 
//#include<cstring>
//using namespace std;
//class Car
//{
//	string car_name;
//	Car* nextcar;
//public:
//	Car(string cnamein = "Not Given", Car* pcar = NULL) {
//		car_name = cnamein;
//		nextcar = pcar;
//	}
//
//	void set_car_name(string cnamein) {
//		car_name = cnamein;
//		nextcar = NULL;
//	}
//	void set_next_car(Car* pcar) {
//		nextcar = pcar;
//
//	}
//	string get_car_name() {
//		return car_name;
//	}
//	Car* get_nextcar() {
//		return nextcar;
//	}
//};
//
//class Person
//{
//	string name;
//	Car* firstcar;	// a pointer points to the first car this person owns 
//	Car* currentcar; // a pointer points to the current car on access
//public:
//	Person(string namein, Car* carin = NULL, Car* currentcar = NULL) {
//		name = namein;
//		firstcar = carin;
//		this->currentcar = currentcar;
//	}
//	void set_person_name(string namein) {
//		name = namein;
//	}
//	void set_car(Car* carin) {
//		if (firstcar == NULL) {
//			firstcar = carin;
//			currentcar = carin;
//		}
//		else {
//			currentcar->set_next_car(carin);
//			currentcar = currentcar->get_nextcar();
//		}
//
//	}
//	void display() {
//		cout << "Name:" << '\t' << name << endl;
//		Car* p = firstcar;
//		while (p != NULL) {
//			cout << "His car:" << '\t' << p->get_car_name() << endl;
//			p = p->get_nextcar();
//		}
//	}
//};
//int main()
//{
//	Person GSF("Bruce Wayne");
//
//	// 1. GSF bought the first car: a BMW X1 
//	Car car1 =Car("BWM X1");
//	GSF.set_car(&car1); 
//	GSF.display();
//
//	// 2. GSF bought the second car: a Porsche 911 
//	Car* pcar2 = new Car;
//	pcar2->set_car_name("Porsche 911"); 
//	GSF.set_car(pcar2);
//	GSF.display();
//
//	// 3. GSF bought the third car: a Bugatti Veyron 
//	Car* pcar3 = new Car;
//	pcar3->set_car_name("Bugatti Veyron"); 
//	GSF.set_car(pcar3);
//	GSF.display();
//	delete pcar3, pcar2; 
//	return 0;
//}