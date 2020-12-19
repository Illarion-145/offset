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

int searchNeg(int* a, int n) {
	int pos = 0, neg = 0;

	for (int i = 0; i < n; i++) {
		if (a[i] < 0) {
			neg++;
		}
	}
	return neg;
}

int searchPos(int* a, int n) {
	int pos = 0, neg = 0;

	for (int i = 0; i < n; i++) {
		if (a[i] > 0) {                 // С учтом того, что 0 ни положительное, ни отрицательное число
			pos++;
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


void pushNumber(string FilePath, int res, int * a, int len, int n = 0) {

	ofstream out;
	out.open(FilePath, ios::app, ios::ate);
	

	if (!out.is_open()) {
		cout << "Error";
	}
	else {
		for (int i = 0; i < len; i++)
			out << a[i];
		out << n << endl;
		out << res << endl;
	}

}

int main() {

	string FilePath1 = "C://Programming/file/data1.txt";
	
	string FilePath2 = "C://Programming/file/data2.txt";

	string FilePath3 = "C://Programming/file/data3.txt";
	
	string FilePath4 = "C://Programming/file/data4.txt";

	string FilePath5 = "C://Programming/file/data5.txt";
	
	int n,
		size_array = 6;

	cin >> n;

	int* array = new int[size_array] {1, 5, 8, 10, 11, 14};

	pushNumber(FilePath1, f(array, size_array, n), array, size_array, n);
	pushNumber(FilePath2, searchPos(array, size_array),array, size_array);
	pushNumber(FilePath3, searchNeg(array, size_array), array, size_array);
	pushNumber(FilePath4, searchMin(array, size_array),array, size_array);
	pushNumber(FilePath5, searchLessN(array, size_array, n), array, size_array, n);
}
