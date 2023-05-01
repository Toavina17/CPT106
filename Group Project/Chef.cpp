#include "Header.h"
#include "Chef.h"

void create_menu() {
	ofstream outfile("Menu.txt");
};

//
//void Chef::add_dish() {
//	fstream outfile("Menu.txt", ios::app);
//	string name, id;
//	double price;
//
//	//get the values of the dish
//	cout << "Name of the dish: ";
//	cin >> name;
//	cout << "Price in RMB: ";
//	cin >> price;
//	cout << "ID: ";
//	cin >> id;
//
//	//check that those values do not exist yet in the file with check_uniqueness()
//
//	//insert the values inside the text file
//
//	outfile << id << ", " << name << ", " << price << "RMB" << endl;
//}
//
//
//int Chef::update_dish() {
//	string id, name, myid, dish_info;
//	double price;
//	fstream file("Menu.txt", ios::in | ios::out);
//
//	//Find the dish to be uploaded and print it so we have the informations
//	cout << "Insert the id of the dish you are looking for: ";
//	cin >> id;
//	dish_info = search_dish(id);
//	
//	
//	if (dish_info != "") {
//		cout << dish_info << endl;
//		//Get the new values
//		cout << "New id: ";
//		cin >> id;
//		cout << "New name: ";
//		cin >> name;
//		cout << "New price in RMB: ";
//		cin >> price;
//
//		//assign the new values
//		
//	}
//	else { 
//		cout << "Dish does not exist";
//		return 0;
//	}
//	
//}
