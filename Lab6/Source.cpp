//#include <iostream>
//#include <vector>
//using namespace std;
//
//vector<int> append(vector<int> a, vector<int> b) {
//	//Working
//	int n = a.size() + b.size();
//	vector<int> tmp(n);
//
//	for (int i = 0; i < n; i++) {
//		if (i < a.size()) {
//			tmp[i] = a[i];
//		}
//		else {
//			tmp[i] = b[i - a.size()];
//		}
//	}
//
//	return tmp;
//}
//
//int main() {
//	int n;
//	cout << "Please enter an odd integer: " << endl;
//	cin >> n;
//
//	//MagicSquare(n);
//
//	vector<int> a = { 1, 2, 3, 4 };
//	vector <int> b = { 5, 6, 7, 8 };
//
//	vector<int> c = append(a, b);
//	for (int i = 0; i < c.size(); i ++) {
//		cout << c[i] << endl;
//	}
//
//	return 0;
//}
//
//void MagicSquare(int n) {
//
//	vector<vector<int>> vect(n);
//	int magicConstant = n * ((pow(n, 2) + 1) / 2); //all rows, columns and diagonals must add up to this number
//	int row = 0, col = 0;
//	//Set everything to 0 first
//	for (row = 0; row < n; row++) {
//		for (col = 0; col < n; col++) {
//			vect[row][col] = 0;			
//		}
//	}
//
//	//Set the first number to 1
//	vect[0][(n + 1) / 2] = 1;
//
//	//Assign the new values
//	row = 0;
//	col = (n + 1) / 2;
//	for (int num = 2; num < pow(n, 2) + 1; num++) {		
//		if (row - 1 > 0 && col + 1 < n && vect[row -1][col+1] != 0) {
//			row--;
//			col++;
//			vect[row][col] = num;
//		}
//		else if (row - 1 < 0) {
//			row = n - 1;
//			if (num >= n) {
//				col = 0;
//			}
//			else { col++;}
//			vect[row][col] = num;
//		}
//
//	}
//}
//

