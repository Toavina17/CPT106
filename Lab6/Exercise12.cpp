#include <iostream>
#include <vector>

using namespace std;

void sort(vector<int>& a) {
	int tmp = 0;
	for (int i = 0; i < a.size(); i++) {
		for (int j = i + 1; j < a.size(); j++) {
			if (a[i] > a[j]) {
				tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}
};

void sort2(int** a, int n, int m) {
	int tmp = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			for (int k = i; k < n; k++) {
				int w = 0;
				if (k == i)
					w = j + 1;
				else
					w = 0;
				for (int l = w; l < m; l++) {
					if (a[i][j] > a[k][l]) {
						tmp = a[i][j];
						a[i][j] = a[k][l];
						a[k][l] = tmp;
					}
				}
			}

		}
	}

}