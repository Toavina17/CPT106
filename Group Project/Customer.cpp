#include "Customer.h"
using namespace std;
//
//int Customer::Customer_choice() {
//    int choice;
//    cout << "Please choose what you wanna do:" << endl;
//    cout << "1. See menu " << endl;
//    cout << "2. Order food" << endl;
//    cout << "3. Print bill" << endl;
//    cin >> choice;
//    return choice;
//};
//
//
//void Customer::order() {
//    int num;
//    cout << "Input the number of dishes you wanna order:" << endl;
//    cin >> num;
//
//
//    for (int i = 0; i < num; i++) {
//        string id;
//        cout << "ID of the dish you wanna order: " << endl;
//        cin >> id;
//        string dish = search_dish(id);
//        cout << i + 1 << ". " << dish;
//        dishes.push_back(dish);
//    }
//};
//
////not done, this is where I left out
//void Customer::bill() {
//    double sum = 0;
//    string dish;
//    int index;
//    cout << "Customer name: " << name << endl;
//    cout << "\t ORDER LIST" << endl;
//
//    for (int i = 0; i < dishes.size(); i++) {
//        dish = dishes[i];
//        cout << dish << endl;
//
//        sum = stoi(dish); //dish still contains the name + id so still need to take price only
//        cout << dishes[i] << endl;
//    }
//}