#ifndef BUBBLESORT_H
#define BUBBLESORT_H

class BubbleSort {

	// Public Functions
	public: 

		int readData(int*& arr);
		void bsort(int* arr, int last);
		void writeToConsole(int* arr, int last);

};
#endif