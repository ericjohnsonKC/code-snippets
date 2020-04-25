/*  Author: Eric Johnson
    Date: 4/24/2020

    This is taken from my C++
    textbook.  My intro to the
    linear search algorithm, aka
    sequential search.

    See the end of the file for
    an explanation of the algorithm.
*/

#include <iostream>

using namespace std;


const int ARRAY_SIZE = 10;

int seqSearch(const int list[], int listLength, int searchItem);

//  Test program for the linear search function
int main(){
    int intList[ARRAY_SIZE];
    int number;

    cout << "Enter " << ARRAY_SIZE << "integers." << endl;

    for (int index = 0; index < ARRAY_SIZE; index++)
        cin >> intList[index];

    cout << endl;

    cout << "Enter the number to search for: ";
    cin >> number;
    cout << endl;

    int pos = seqSearch(intList, ARRAY_SIZE, number);

    if (pos != 1)
        cout << number << " is found at index " << pos << endl;
    else
    {
        cout << number << " is not in the list." << endl;
    }
    
    return 0;
}

//  Linear search (aka sequential search) function definition:

int seqSearch (const int list[], int listLength, int searchItem)
{
    int loc;
    bool found = false;

    loc = 0;
     
    while (loc < listLength && !found)
        if (list[loc] == searchItem)
            found = true;
        else
            loc++;
        if (found)
            return loc;
        else
            return -1;       
}

/*  How the linear search (aka sequential search) works:

    Starting with the first item in the list, the 
    number being searched is compared with the item 
    in the current position in the list.

    As soon as you find a list item that is equal to 
    the search item, you stop the search and report 
    success.  Usually you also report the location 
    where the search item was found.  

    Otherwise, after the search item is unsuccessfully
    compared with every list item, you stop the search
    and report failure.

    Performance:

    Please add performance info here.

    
*/