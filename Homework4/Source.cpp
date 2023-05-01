#include "Header.h";

int main() {

	StudentTeam st = StudentTeam("My Team");
	st.Print();
	cout << "The mean age is: " << st.meanAge() << endl;
	return 0;
};