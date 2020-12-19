#include <iostream>
using namespace std;

int main() {
	
	int n, 
		counter = 0, size_array = 7;

	cin >> n;

	int* array = new int[size_array] {1, 1, 2, 5, 1, 10, 7};

	for (int i = 0; i < size_array; i++) {
		if (array[i] >= n) {
			counter++;
		}
	}

	cout << counter;

	return 0;
}
