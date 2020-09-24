// Team 1 - Justin Calma & Ann Luong
// CECS282 Lab 3.1

#include "BubbleSort.h"
#include <iostream>
using namespace std;

int main() {

	// Create a BubbleSort object
	BubbleSort bubble;

	// Create the pointer
	int* arr;

	// Call readData function and find the total number of elements
	int last = bubble.readData(arr);

	// Sort the array in ascending order using Bubble Sort Algorithm
	bubble.bsort(arr, last);

	// Output the result to the console
	bubble.writeToConsole(arr, last);

	// Return 0 for main
	return 0;

}