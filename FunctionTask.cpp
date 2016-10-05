#include <iostream>
#include <fstream>
using namespace std;

int countNewPopulationSize (int previousPopulationSize, int birthRate, int deathRate);

int main ()
{
//	ofstream outputFile;
//  outputFile.open("Population.txt");
	
	int previousPopulationSize, birthRate, deathRate, year;
	
	cout << "The previous population size in this area is :";
	cin >> previousPopulationSize;
	cout << "\nThe annual birth rate in this area is : ";
	cin >> birthRate;
	cout << "\nThe annual death rate in this area is : ";
	cin >> deathRate;
	cout << "\nThe year when it happen is : ";
	cin >> year;
	cout << endl;
	
	int newPopulationSize = countNewPopulationSize (previousPopulationSize, birthRate, deathRate);
	cout << "The number of new population size in the area is: " << newPopulationSize;
	
	if (previousPopulationSize < 100)
	{
		cout << "You must input more than two numbers for population size input.\n";
	}
	
	if (birthRate < 0 || deathRate < 0)
	{
		cout << "You cannot input negative numbers for birth rate and death rate input.\n";
	}
	
	if (year < 10)
	{
		cout << "You must input more than one number for years input.";
	}

	return 0;
}

int countNewPopulationSize (int previousPopulationSize, int birthRate, int deathRate)
{
	return previousPopulationSize + birthRate*previousPopulationSize - deathRate*previousPopulationSize;
}
