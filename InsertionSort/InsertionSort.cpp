/*
 * InsertionSort.cpp
 *
 *  Created on: Jan 17, 2016
 *      Author: Jose Bohorques
 */

#include <iostream>
using namespace std;

int main() {

	//prompt user for length of list
	int length = 0;
	//cout << "Enter length of list: ";
	cin >> length;

	int array[length] = { };

	int item = 0;
	int tmp = 0;

	for (int i = 0; i < length; i++)
	{
		cin >> item; //new entry to the array
		tmp = i - 1;
		while (tmp >= 0 && item < array[tmp]){
			//shifts any value greater than the new entry to the right
			array[tmp + 1] = array[tmp];
			tmp--;
		}
		array[tmp + 1] = item;
	}

	//prints array
	for (int i = 0; i < length; i++)
		cout << array[i] << endl;
	return 0;

}



