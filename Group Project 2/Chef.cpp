#include "Chef.h"
#include "Header.h"


int Chef::choice() {

    int choice;
    cout << "What do you want to do chef ?" << endl;
    cout << "1. See menu" << endl;
    cout << "2. Edit menu" << endl;
    cout << "3. Exit" << endl;
    cin >> choice;
    return choice;
};

void Chef::activity(int n, Chef person) {
    if (n == 1) {
        person.see_menu();
        int n = person.choice();
        person.activity(n, person);
    }
    else if (n == 2) {
        int n = person.activity_edit_menu();
        if (n == 1) {
            person.add_menu();
            int n = person.choice();
            person.activity(n, person);
        }
        else if (n == 2) {
            person.update_a_dish();
            int n = person.choice();
            person.activity(n, person);
        }
        else if (n == 3) {
            person.erase_menu();
            int n = person.choice();
            person.activity(n, person);
        }
        else {
            cout << "Please insert a valid answer" << endl;
        }
    }
    else if (n == 3) {
        cout << "Thanks for your visit" << endl;
        exit;
    }
    else { 
        cout << "Please insert a valid answer" << endl;
        int n = choice();
        activity(n, person);
    }
};

