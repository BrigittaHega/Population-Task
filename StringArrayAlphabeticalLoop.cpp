//I upload this doesn't mean I have complete it

#include <iostream>
using namespace std;

void selectionSort(char array[], char *ptr[]);
void showArray(char array[], const int size);

int main()
{
	const int WORD_NUM = 100;
	char word[WORD_NUM] = {};
	
	for (int i=0; i<WORD_NUM; i++)
	{
		cin >> word[i];
	}	
	
	selectionSort(word, WORD_NUM);
	
	cout << "The sorted values are\n";
	showArray(word, WORD_NUM);
	return 0;
}

//I copy paste everything and yet it's still not work. So what's the problem???

void selectionSort(char array[], char *ptr[])
{
	int startScan, minIndex; char *minValue;
	for (startScan = 0; startScan < strlen(array)-1; startScan++)
	{
		minIndex = startScan;
		minValue = array[startScan];
		for(int index = startScan + 1; index < size; index++)

		{
			if (*(ptr[index] )< minValue)
			{
				minValue = array[index];
				minIndex = index;
			}
		}
		array[minIndex] = array[startScan];
		array[startScan] = minValue;
	}
}

void showArray(char array[], const int size)
{
	for (int count = 0; count < size; count++)
	cout << array[count] << " ";
	cout << endl;
}


