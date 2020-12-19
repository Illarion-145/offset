#include <iostream>
using namespace std;

int searchMin(int* a, int n) { 
	int min = a[0], minI = 0;

	for (int i = 1; i < n; i++) {
		if (a[i] < min) {
			min = a[i];
			minI = i;
		}
	}
	return minI;
}

int main() {
	
	int size_array = 8;

	int* array = new int[size_array] {1, -3, 2, -5, 7, 4, 8};

	cout << searchMin(array, size_array);

	return 0;
}
