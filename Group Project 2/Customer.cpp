#include "Header.h"
#include "Customer.h"


Customer::Customer(string n) { name = n; };

int Customer::Customer_choice() {
    int choice;
    cout << "Please choose what you wanna do:" << endl;
    cout << "1. See menu " << endl;
    cout << "2. Order food" << endl;
    cout << "3. Print bill" << endl;
    cout << "4. Exit" << endl;
    cin >> choice;
    return choice;
};

void Customer::activity(int n, Customer person) {
    
    if (n == 1) {
        person.see_menu();
        int n = person.Customer_choice();
        person.activity(n, person);
    }
    else if (n == 2) {
        person.dishes = person.order();
        int n = person.Customer_choice();
        person.activity(n, person);
    }
    else if (n == 3) {    
        person.bill(person.dishes);
        int n = person.Customer_choice();
        person.activity(n, person);
    }
    else if (n == 4) {
        cout << "Thank you for your visit!" << endl;
        exit;
    }
    else {
        int n = person.Customer_choice();
        person.activity(n, person);
    }
}
