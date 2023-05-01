#include <iostream>

using namespace std;

void sort(int a[], int n) {
	int tmp = 0;
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (a[i] > a[j]) {
				tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}
};

//void main()
//{
//	int a[] = { 3,2,7,5,4,9,8 };
//	int n = sizeof(a) / sizeof(int);
//	sort(a,n);
//	for (int i = 0;i < n;i++) {
//		cout << a[i] << '\t';
//	}
//}