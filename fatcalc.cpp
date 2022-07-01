#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;

// Headers
string toString(double);
int toInt(string);
double toDouble(string);

int main()
{
	int fatGrams;
	int totalCalories;
	int caloriesFromFat;
	double percentOfFat;

	cout << "How many calories are there?" << endl;
	cin >> totalCalories;
	while (totalCalories < 0)
	{
		cout << "Calories cannot be less then zero." << endl;
	}
	cout << "How many fat grams are there?" << endl;
	cin >> fatGrams;
	while (fatGrams < 0)
	{
		cout << "Fat grams cannot be less then zero." << endl;
	}
	caloriesFromFat = fatGrams * 9;
	while (caloriesFromFat > totalCalories)
	{
		cout << "ERROR Either the calories or fat grams were incorrectly entered." << endl;
	}
	percentOfFat = (double)caloriesFromFat / totalCalories;
	if (percentOfFat < 0.3)
	{
		cout << "This food is low in fat." << endl;
	}
	else
	{
		cout << "Pick another item, this a fatty food." << endl;
	}
	system("pause");
	return 0;
}

// The following implements type conversion functions.
string toString(double value) { //int also
	stringstream temp;
	temp << value;
	return temp.str();
}

int toInt(string text) {
	return atoi(text.c_str());
}

double toDouble(string text) {
	return atof(text.c_str());
}
