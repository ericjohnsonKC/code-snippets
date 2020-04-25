/*  Author: Eric Johnson
    Date: 4/23/2020

    This is taken from my C++
    textbook.  My intro to the
    selection sort algorithm.

    See the end of the file for
    an explanation of the algorithm.
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

/*  How the selection sort works:

    The selectin sort finds the smallest 
    element in the list and moves it to 
    the top of the unsorted portion of 
    the list.  The first time through
    we locate the smallest item in the
    list and move it to the top.  The 
    second time we locate the smallest 
    item in the list starting from the 
    second element in the list, and so 
    on

    Performance:

    For a list of length n, selection sort
    makes exactly (n(n-1))/2 key comparisons
    and 3(n-1) item assignments.  Therefore,
    if n=1000, then to sort the list, selection
    sort makes about 500,000 key comparisons
    and about 3,000 item assignments.
*/