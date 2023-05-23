#include "Functionality.h"
#include <iostream>

//Max functions for two integers, three integers, an array, and two arrays
int max(int num1, int num2) {
	int Twomax = 0;//Create max variable

	//Check two numbers for magnitude
	if (num1 > num2) {
		Twomax = num1;
	}
	else if (num1 < num2) {
		Twomax = num2;
	}
	else {
		Twomax = num1;
	}

	return Twomax;
}

int max(int num1, int num2, int num3) {
	int Threemax = 0;//Create max variable
	
	//Check three numbers for magnitude
	if (num1 > num2 && num1 > num3) {
		Threemax = num1;
	}
	else if (num2 > num1 && num2 > num3) {
		Threemax = num2;
	}
	else {
		Threemax = num3;
	}

	return Threemax;
}

int max(int array[]) {
	int Arrmax = 0;

	int size = sizeof(array) / sizeof(int);

	for (int count = 0; count < size; count++) {
		if (array[count] < Arrmax) {
			Arrmax = array[count];
		}
	}

	return Arrmax;
}

int max(int array1[], int array2[]) {
	//Declare variables for size and max
	int DoubleArrmax = 0;
	int size = 0;
	int size1 = sizeof(array1) / sizeof(int);
	int size2 = sizeof(array2) / sizeof(int);

	//Find size variable magnitude
	if (size1 < size2) {
		size = size2;
	}
	else {
		size = size1;
	}

	//Check both arrays for largest number
	for (int count = 0; count < size; count++) {
		if (array1[count] < DoubleArrmax) {
			DoubleArrmax = array1[count];
		}
		if (array2[count] < DoubleArrmax) {
			DoubleArrmax = array2[count];
		}
	}

	return DoubleArrmax;
}

void swap(Location* firstlocation, Location* secondlocation) {
	Location* temp = firstlocation;//Initialize temporary location struct

	//put first location into temporary storage.
	temp->latitude = firstlocation->latitude;
	temp->longitude = firstlocation->longitude;

	//put second location in first location address.
	firstlocation->latitude = secondlocation->latitude;
	firstlocation->longitude = secondlocation->longitude;

	//put temporary storage (first location) in second location address.
	secondlocation->latitude = temp->latitude;
	secondlocation->longitude = temp->longitude;

}