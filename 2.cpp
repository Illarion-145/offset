#include <iostream>
using namespace std;

void searchPosNeg(int* a, int n) { 
	int pos = 0, neg = 0;

	for (int i = 0; i < n; i++) {
		if (a[i] > 0) {                 // С учтом того, что 0 ни положительное, ни отрицательное число
			pos++;
		}
		if (a[i] < 0) {
			neg++;
		}
	}
	cout << pos << ' ' << neg;
}

int main() {
	
	int size_array = 8;

	int* array = new int[size_array] {1, -3, 2, -5, 7, 4, -6, 8};

	searchPosNeg(array, size_array);

	return 0;
}
