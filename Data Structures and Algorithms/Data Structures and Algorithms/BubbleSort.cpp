#include "BubbleSort.h"
#include <iostream>
using namespace std;

BubbleSort::BubbleSort() {

}

void BubbleSort::bubblesort(int a[], int size) {
	cout << "Debug Size Bubble Sort O(n^2): " << size << endl;

	//Bubble sort O(n^2)
	for (int i = 0; i < size; i++) {

		for (int j = 0; j < size - 1; j++) {
			int container = a[j]; 
			if (a[j] > a[j + 1]) {
				a[j] = a[j + 1];
				a[j + 1] = container; 
			}
		}
	}
	
	//print array
	for (int i = 0; i < size; i++) {
		if (i + 1 != size) {
			cout << "[" << a[i] << "]" << ", ";
		}
		else {
			cout << "[" << a[i] << "]" << endl;
		}
	}

	printf("\n");

}
