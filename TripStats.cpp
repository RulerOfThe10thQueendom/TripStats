/*
Program: Assignment1-Problem1-kez27
Author: Kassandra Zimmerman
Purpose: This program computes the fuel efficiency, total gallons consumed,
and the total cost of a trip given: the average speed driven, the
distance traveled, and the cost of gas.
Last Modified: 4/23/2015
*/

#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	int speed, distance, cost;
	double fe, gallonsConsumed, totalCost;
	const double E = 2.71828182845904523536028747135266249775724709369995;

	//The following three loops ensure that a reasonable answer is given for each input
	do
	{
		cout << "Enter the average speed driven during the trip (in miles per hour(MPH)): ";
		cin >> speed;
	} while (!(speed > 0)); //For the car to complete the trip, speed must be above 0

	do{
		cout << "Enter the distance traveled during the trip (in miles): ";
		cin >> distance;
	} while (!(distance > 0)); //For there to be a trip, distance must be greater than zero

	do{
		cout << "Enter the cost of gasoline (dollars per gallon): ";
		cin >> cost;
	} while (cost <= 0); //Assumes that we'll never be paid to accept gas and that gas will never be free

	fe = 71.7 * speed * pow(2 + 0.0192*speed, -4.5) + pow(E, -5.1*speed) - 1; //the given equation for fuel efficiency
	gallonsConsumed = distance / fe;
	totalCost = gallonsConsumed * cost;

	cout << "\nThe fuel efficiency (FE) is " << setprecision(2) << fixed << fe << endl
		<< "The number of gallons consumed during the trip is " << gallonsConsumed << endl
		<< "The total cost is " << totalCost << endl << endl;

}

