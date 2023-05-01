//#include<iostream> 
//using namespace std;
//
//// Programme 2.1: Dynamic memory allocation for single values
//// A programme reads in two float point values and displays their
//// average on the screen.
//
//int main(void)
//{
//	float* pfv1, * pfv2, * paverage; // declaration of 3 pointers
//	//The following statements dynamically allocate memory for 3 float point values
//	pfv1 = new float;
//	pfv2 = new float;
//	paverage = new float;
//
//	cout << "Type 2 real numbers separated by a space" << endl;
//	cin >> *pfv1 >> *pfv2; // input two values and keep them at the memory
//	// addresses that pfv1 and pfv2 point to.
//	*paverage = (*pfv1 + *pfv2) / 2;
//	cout << endl << "The input values are : " << *pfv1 << " and "<<*pfv2<<endl;
//		cout << "Their average is " << *paverage << endl;
//}