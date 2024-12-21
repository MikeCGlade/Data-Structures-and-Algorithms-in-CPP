#include <iostream>
#include "BubbleSort.h"
using namespace std;

//Printer Class For Debugging Purposes Only
class PrintFunction {

public: 
	
	void printArray(int size, int a[]) {
		cout << "Array Printed Below:\n";
		for (int i = 0; i < size; i++) {
			cout << "Index [" << i << "] = " << a[i] << endl;
		}
	}
};

int main() {

	PrintFunction printer;

	int num[] = { 0, 23, 3, 63, 20, 18, 45 }; 
	int size = sizeof(num) / sizeof(*num); 

	//Print the unsorted Array
	printer.printArray(size, num);
	cout << endl;

	BubbleSort bubbleSort;

	//Sorting Algorithm of Choice
	bubbleSort.bubblesort(num, size);

	return 0;
}