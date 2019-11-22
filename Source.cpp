#include <iostream>

using namespace std;

void lowest(int* arr, int size, int& i);
void greatest(int* arr, int size, int& i);

int main()
{

	int size; // declaring the size of array
	cout << "Size of array: ";
	cin >> size;
	int* arr = new int[size]; // Declaring the array

	for (int i = 0; i < size; i++) { // input values to the array
		cout << "value for index " << i << ": ";
		cin >> arr[i];
	}
	int i = 0;


	cout << "Do you want to order from lowest, greatest, or both? ";
	string answer;
	cin >> answer;
	if (answer == "lowest")
	{
		lowest(arr, size, i);
	}
	else if(answer == "greatest")
	{
		greatest(arr, size, i);
	}
	else if (answer == "both") {
		lowest(arr, size, i);
		cout << endl;
		greatest(arr, size, i);
	}
	else {
		cout << "Please select lowest or greatest...";
	}
	return 0;
}

#if 0
void lowest(int* arr, int size, int& i) {
	int temp = INT_MAX; // maximum value to compare

	for (int i = 0; i < size; i++) { // scanning for the lowest value
		if (arr[i] < temp) {
			temp = arr[i];
		}
	}
	for (i = 0; i < size; i++) { // looking for the index with the lowest value
		if (arr[i] == temp) {
			break;
		}
	}
	swap(arr[0], arr[i]); // Swap the lowest value with the first index

	for (int i = 0; i < size; i++) {
		cout << arr[i] << " "; // displaying the values
	}
}
#endif

void lowest(int* arr, int size, int& i) {
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size-1; j++) {
			if (arr[j] > arr[j+1]) {
				swap(arr[j], arr[j+1]);
			}
		}
	}

	for (int i = 0; i < size; i++) {
		cout << arr[i] << " "; // displaying the values
	}
	cout << "(lowest)";
}

void greatest(int* arr, int size, int& i) {
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size - 1; j++) {
			if (arr[j] < arr[j + 1]) {
				swap(arr[j], arr[j + 1]);
			}
		}
	}

	for (int i = 0; i < size; i++) {
		cout << arr[i] << " "; // displaying the values
	}
	cout << "(highest)";
}


