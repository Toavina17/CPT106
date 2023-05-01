#include "People.h"
#include "Header.h"

void People::see_menu() {
    string myText, id, dish, price;
    int pos, pos2;
    ifstream infile;
    infile.open("Menu.txt", ios::in);

    cout << "MENU" << endl;
    while (getline(infile, myText)) {
        // Output the text from the file
        pos = myText.find(",");
        id = myText.substr(0, pos);
        pos2 = myText.find(",", pos + 1);
        dish = myText.substr(pos + 1, pos2 - pos - 1);
        price = myText.substr(pos2 + 1);

        //Print out the values
        cout << id << "\t" << dish << "\t" << price << "RMB" << endl;
    }
    // Close the file
    infile.close();

    cout << "\t --------------------------" << endl;
};;

void People::add_menu() {
    string cname, cid, id, text;
    double cprice;
    fstream myFile;
    myFile.open("menu.txt", ios::app);
    cout << "Enter dish ID " << endl;
    cin >> cid;
    while (myFile.eof() == 0) {
        getline(myFile, text);
        int pos = text.find(",");
        id = text.substr(0, pos);
        if (id != cid) {
            cout << "Enter dish name " << endl;
            cin.ignore();
            getline(cin, cname);
            cout << "Enter price " << endl;
            cin >> cprice;
            string newmenu = cname + "," + cid + "," + to_string(cprice);
            fstream myFile;
            myFile.open("menu.txt", ios::app);
            myFile << cid << "," << cname << "," << cprice << endl;
            cout << "The dish has been added" << endl;
        }
        else {
            cout << "ID or name already exists, menu will not be added ";
        }
    };
    cout << "\t -------------------------------" << endl;

};

void People::update_a_dish() {
    string myText, cid, cdish, myname, dish_info, ID;
    int pos, pos2;
    double cprice;
    vector<string> id, name;
    vector<double> price;
    ifstream infile;
    infile.open("Menu.txt", ios::in);
    cout << "MENU" << endl;
    while (getline(infile, myText)) {
        // Output the text from the file
        pos = myText.find(",");
        cid = myText.substr(0, pos);
        id.push_back(cid);
        pos2 = myText.find(",", pos + 1);
        cdish = myText.substr(pos + 1, pos2 - pos - 1);
        name.push_back(cdish);
        cprice = stod(myText.substr(pos2 + 1));
        price.push_back(cprice);
        cout << cid << "\t" << cdish << "\t" << cprice << "RMB" << endl;
    }
    // Close the file
    infile.close();
    
    //Find the dish to be uploaded and print it so we have the informations
    cout << "Insert the id of the dish you are looking for: ";
    cin >> ID;
    dish_info = search_dish(ID);  	    	
    if (dish_info != "") {
        cout << dish_info << endl;
       // Get the new values
        cout << "New id: ";
        cin >> cid;
        cout << "New name: ";
        cin.ignore();
        getline(cin, myname);
        cout << "New price in RMB: ";
        cin >> cprice;

        //assign the new values
        int counter = name.size();
        for (int i = 0; i < counter; i++) {
            if (id[i] == ID) {
                id[i] = cid;
                name[i] = myname;
                price[i] = cprice;
            }
        }
        fstream tempo;
        tempo.open("temp.txt", ios::out);
        for (int i = 0; i < counter; i++) {
            tempo << id[i] << "," << name[i] << "," << price[i] << "\n";
        }
        tempo.close();

        int status = remove("menu.txt");
        if (status == 0)
            cout << "Dish updated successfully" << endl;
        else
            cout << "\nError Occurred!" << endl;
        status = rename("temp.txt", "menu.txt");
        if (status == 0)
            cout << "Thank you for your visit!" << endl;
        else
           cout << "\nError Occurred!" << endl;
    }
    else { 
        cout << "Dish does not exist" << endl;
    }
    
}; 

void People::erase_menu()
{
    string ID;
    string myText, cid, cdish;
    int pos, pos2;
    double cprice;
    vector<string> id, name;
    vector<double> price;
    ifstream infile;
    infile.open("Menu.txt", ios::in);
    cout << "MENU" << endl;
    while (getline(infile, myText)) {
        // Output the text from the file
        pos = myText.find(",");
        cid = myText.substr(0, pos);
        id.push_back(cid);
        pos2 = myText.find(",", pos + 1);
        cdish = myText.substr(pos + 1, pos2 - pos - 1);
        name.push_back(cdish);
        cprice = stod(myText.substr(pos2 + 1));
        price.push_back(cprice);
        cout << cid << "\t" << cdish << "\t" << cprice << "RMB" << endl;
    }
    // Close the file
    infile.close();
    cout << "Enter dish ID " << endl;
    cin >> ID;
    int counter = name.size();
    for (int i = 0; i < counter; i++) {
        if (id[i] == ID) {
            id.erase(id.begin() + i);
            name.erase(name.begin() + i);
            price.erase(price.begin() + i);
            counter--;
        }
    }
    fstream tempo;
    tempo.open("temp.txt", ios::out);
    for (int i = 0; i < counter; i++) {
        tempo << id[i] << "," << name[i] << "," << price[i] << "\n";
    }
    tempo.close();
    remove("menu.txt");
    rename("temp.txt", "menu.txt");
};

int People::activity_edit_menu() {
    int choice;
    cout << "--------------------------" << endl;
    cout << "1. Add a dish" << endl;
    cout << "2. Update a dish" << endl;
    cout << "3. Delete a dish" << endl;
    cin >> choice;
    return choice;
};

string People::search_dish(string id) {
    fstream file("menu.txt", ios::in | ios::out);
    string myid, dish;

    while (file.eof() == 0) {
        getline(file, dish);
        int pos = dish.find(",");
        myid = dish.substr(0, pos);
        if (myid == id) {
            return dish;
        }
    };
    cout << "Cannot find this dish" << endl;
    return "";
    
};

vector<string> People::order() {
    int num;
    vector<string> dishes;
    cout << "Input the number of dishes you wanna order:" << endl;
    cin >> num;

    cout << "ID of the dish you wanna order: " << endl;
    for (int i = 0; i < num; i++) {
        string id;       
        cin >> id;
        string dish = search_dish(id);       
        cout << "\n" << i + 1 << ". " << dish << endl;
        dishes.push_back(dish);
    }

    return dishes;
};

void People::bill(vector<string> dishes) {

    vector<double> temp;

    //Add all the prices in a vector
    for (int i = 0; i < dishes.size(); i++) {
        int pos = dishes[i].find(",");
        int pos2 = dishes[i].find(",", pos + 1);
        string price = dishes[i].substr(pos2 + 1);
        temp.push_back(stod(price));
    }

    //Calculate the sum of the order
    double sum = 0;

    for (int i = 0; i < temp.size(); i++) {
        sum += temp[i];
    }
    cout << "\t ----------------------------" << endl;
    cout << "Name of the customer: " << name << endl;
    cout << "ORDER LIST" << endl;
    for (int i = 0; i < dishes.size(); i++) {
        int pos = dishes[i].find(",");
        string id = dishes[i].substr(0, pos);
        int pos2 = dishes[i].find(",", pos + 1);
        string dish = dishes[i].substr(pos + 1, pos2 - pos - 1);
        string price = dishes[i].substr(pos2 + 1);

        //Print out the values
        cout << id << "\t" << dish << "\t" << price << "RMB" << endl;
    }
    cout << "\n TOTAL: \t" << sum << "RMB" << endl;

    cout << "\t ----------------------------" << endl;
}