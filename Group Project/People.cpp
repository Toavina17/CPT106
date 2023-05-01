#include "People.h"
#include "Header.h"

void People::see_menu() { //technically works

	string myText, id, dish;
	int pos, pos2;
	double price;
	ifstream infile;
	infile.open("Menu.txt", ios::in);

	cout << "MENU" << endl;
	while (getline(infile, myText)) {
		// Output the text from the file
		pos = myText.find(",");
		id = myText.substr(0, pos);
		pos2 = myText.find(",", pos + 1);
		dish = myText.substr(pos + 1, myText.length() - pos2 + 1);
		price = stod(myText.substr(pos2 + 1));

		//Print out the values
		cout << id << "\t" << dish << "\t" << price << "RMB" << endl;
	}
	// Close the file
	infile.close();

}

string People::search_dish(string id) {
	fstream file("Menu.txt", ios::in | ios::out);
	string myid, dish;

	while (file.eof() == 0) {
		getline(file, myid, ',');
		if (myid == id) {
			getline(file, dish);
			return dish;
		};
	};
	cout << "Cannot find this dish" << endl;
};