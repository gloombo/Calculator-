// Calculator, by Royyale Clay

// Include the iostream library
#include <iostream>
#include <ctime>
//Use the standard namespace

using namespace std;

void main()

{
	int Do_Another = 1;

	while (Do_Another == 1)
	{


		// Declare the variables
		float Number_1 = 5;
		float Number_2 = 3;
		float Result;
		int Which_Calculation;



		// Give instructions
		cout << "Choose a task. Press 1 to add, 2 to subtract, 3 to multiply, and 4 to divide." << endl;
		cin >> Which_Calculation;

		// Get numbers
		cout << "Please enter the first number" << endl;
		cin >> Number_1;
		cout << "Please enter the second number" << endl;
		cin >> Number_2;

		if (Which_Calculation == 1)
		{
			// Calculate the result
			Result = Number_1 + Number_2;
		}

		if (Which_Calculation == 2)
		{
			// Calculate the result
			Result = Number_1 - Number_2;
		}

		if (Which_Calculation == 3)
		{
			// Calculate the result
			Result = Number_1 * Number_2;
		}

		if (Which_Calculation == 4)
		{
			// Calculate the result
			Result = Number_1 / Number_2;
		}

		// Print the answer is...
		cout << "The answer is..." << endl;

		//Print the result
		cout << Result << endl;

		//Ask the person if they would like to do another task
		cout << "Would you like to do another task? (Type 1 for yes, 2 for no)" << endl;
		cin >> Do_Another;
	}
	system("PAUSE");
}
