/*  Author: Eric Johnson
    Date: 4/24/2020

    This is taken from my C++
    textbook.  My intro to the
    binary search algorithm.  Note
    that the list MUST BE SORTED in 
    order to perform a binary search.

    See the end of the file for
    an explanation of the algorithm.
*/

#include <iostream>

using namespace std;


const int ARRAY_SIZE = 10;

int binarySearch(const int list[], int listLength, int searchItem);


//  Test program for the binary search function
int main(){
    int intList[ARRAY_SIZE];
    int number;

    cout << "Enter a sorted list of " << ARRAY_SIZE << " integers." << endl;

    for (int index = 0; index < ARRAY_SIZE; index++)
        cin >> intList[index];

    cout << endl;

    cout << "Enter the number to search for: ";
    cin >> number;
    cout << endl;

    int pos = binarySearch(intList, ARRAY_SIZE, number);

    if (pos != 1)
        cout << number << " is found at index " << pos << endl;
    else
    {
        cout << number << " is not in the list." << endl;
    }
    
    return 0;
}

//  Binary search function definition:

int binarySearch (const int list[], int listLength, int searchItem)
{
    int first = 0;
    int last = listLength - 1;
    int mid;

    bool found = false;

    while (first <= last && !found)
    {
        mid = (first + last) / 2;

        if (list[mid] == searchItem)
            found = true;
        else if (list[mid] > searchItem)
            last = mid -1;
        else
            first = mid + 1;        
    }

    if (found)
        return mid;
    else
        return -1;   
}

/*  How the binary search works:

    The list must be sorted before performing
    a binary search.

    The search starts by comparing the search item
    with the item in the middle of the list.  If the 
    search item is larger, the middle item of the upper 
    half of the list is then compared; if the search
    item is smaller, the middle item of the lower 
    half of the list is then compared, and so on.

    Performance:

    Please add performance info here.

    
*/