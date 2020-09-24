#include "BubbleSort.h";
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

// Reads data from a text file into an array
int BubbleSort::readData(int*& arr) {

	// Creates a variable to save the size of the array
	int size;

	// Create inputFile object to open the file
	ifstream inputFile;

	// Open the file to get the data
	inputFile.open("data.txt");

	// The first line of the file is the size of the array
	inputFile >> size;

	// Allocate the memory for pointer arr
	arr = new int[size];

	// Read the rest of the data into the array
	for (int i = 0; i < size; i++) {

		// Read the current num in the txt file and add it into the array
		inputFile >> *(arr + i);

	} 

	// Close the opened file 
	inputFile.close();

	// Return the size of the array
	return size;

} 

// Bubble Sort Algorithm
void BubbleSort::bsort(int* arr, int last) {

	// Boolean value checking if the adjacent elements swapped
	bool swapped = true;

	// Create counter j
	int j = 0;

	// Create a temp variable
	int temp;

	// While true
	while (swapped) {

		swapped = false;

		j++;

		// Iterate until all elements have been swapped
		for (int i = 0; i < last - j; i++) {

			// Check if the current element is greater than the adjacent elment
			if ( *(arr + i) > *(arr + (i + 1)) ) {

				// Swap the elements 
				temp = *(arr + i);
				*(arr + i) = *(arr + (i + 1));
				*(arr + (i + 1)) = temp;
				swapped = true;

			}

		}

	}

}

// Prints the output to the console
void BubbleSort::writeToConsole(int* arr, int last) {

	// For each element in the array, ouput it 
	for (int i = 0; i < last; i++) {
		cout << *(arr + i) << " ";
	}

}
