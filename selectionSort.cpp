/*  Author: Eric Johnson
    Date: 4/23/2020

    This is taken from my C++
    textbook.  My intro to the
    selection sort algorithm
*/

#include <iostream>

using namespace std;


void selectionSort(int list[], int length);

int main(){
    int list[] = {20, 36, 24, 65, 78,
                  45, 58, 90, 2, 15};
    
    selectionSort(list, 10);

    cout << "After sorting, the list "
         << "elements are: " << endl;

    for (int i = 0; i < 10; i++)
        cout << list[i] << " " << endl;

    return 0;
}

//  Selection sort function definition:

void selectionSort(int list[], int length){
    int index;
    int smallestIndex;
    int location;
    int temp;

    for (index = 0; index < length -1; index++)
    {
        smallestIndex = index;

        for (location = index + 1; location < length; location++)
            if (list[location] < list[smallestIndex])
                smallestIndex = location;

        temp = list[smallestIndex];
        list[smallestIndex] = list[index];
        list[index] = temp;
    }
}