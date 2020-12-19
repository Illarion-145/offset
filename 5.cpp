#include <iostream>
#include <fstream>
using namespace std;

int f(int* a, int length, int n) {
	int counter = 0;
	for (int i = 0; i < length; i++) {
		if (a[i] >= n) {
			counter++;
		}
	}
	return counter;
}


int searchPosNeg(int* a, int n) {
	int pos = 0, neg = 0;

	for (int i = 0; i < n; i++) {
		if (a[i] > 0) {                 // С учтом того, что 0 ни положительное, ни отрицательное число
			pos++;
		}
		if (a[i] < 0) {
			neg++;
		}
	}
		return pos;
}

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


void pushNumber(string FilePath, int res) {

	ofstream out;
	out.open(FilePath, ios::app, ios::ate);
	

	if (!out.is_open()) {
		cout << "Error";
	}
	else {
		out << res;
	}

}

int main() {

	string FilePath1 = "C://Programming/file/data.txt";
	
	string FilePath2 = "C://Programming/file/data.txt";

	string FilePath3 = "C://Programming/file/data.txt";
	
	string FilePath4 = "C://Programming/file/data.txt";

	string FilePath5 = "C://Programming/file/data.txt";
	
	int n,
		size_array = 6;

	cin >> n;

	int* array = new int[size_array] {1, 5, 8, 10, 11, 14};

	pushNumber(FilePath1, f(array, size_array, n));
	pushNumber(FilePath2, searchPosNeg(array, size_array));
	pushNumber(FilePath3, searchMin(array, size_array));
	pushNumber(FilePath4, searchLessN(array, size_array, n));
}
