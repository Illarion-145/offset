#include <iostream>
using namespace std;

int searchLessN(int* a, int length, int n) { 
	int counter = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] < n) {
			counter++;
		}
		else break;        // Т.к. последовательность отсортирована, то если i-ое число будет не меньше n, то и следующие числа будут не меньше, следовательно прерываем цикл
	}
	return counter;
}

int main() {
	
	int n,
		size_array = 6;

	cin >> n;

	int* array = new int[size_array] {1, 5, 8, 10, 11, 14};

	cout << searchLessN(array, size_array, n);

	return 0;
}
