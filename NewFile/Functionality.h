#pragma once

struct Location {
	double longitude, latitude;
};

int max(int num1, int num2);
int max(int num1, int num2, int num3);
int max(int array[]);
int max(int array1[], int array2[]);

void swap(Location* firstlocation, Location* secondlocation);