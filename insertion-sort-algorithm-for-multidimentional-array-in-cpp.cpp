#include <iostream>
#include <conio.h>

using namespace std;

//sorting array using Insertion Sort
insertionSort(int A[], int size){
    int value;//Value of an index
    int temp;//Variable that stores temporary values

    //loop over the array elements
    for(int i=1; i<size-1; i++){
        //store value in current element
        value = A[i];

        //location to place the element
        temp = i;

        // search for temp location to put current element
        while(temp > 0 && A[temp-1] > value){
            //shift element right one slot
            A[temp] = A[temp-1];
            temp = temp-1;
        }//end of while

        A[temp] = value;//place inserted value
    }//end of for loop

}//end of insertionSort function

int main(){

    int rows = 2; //numbers of rows
    int cols = 6;//numbers of cols

    int a[rows][cols] = {
        {5,8,-1,2,4,5},
	    {-3,8,-4,-5,-6,8}
    };

    cout << "Unsorted Array" << endl;
    //loop over the length of the rows
    for(int i=0; i<rows; i++){
        cout << endl;
        //loop over the length of the cols
        for(int j=0; j<cols; j++){
            cout << a[i][j] << "\t";
        }//end of for loop(cols)
    }//end of for loop(rows)

    //passing array and its length to function insertionSort
    insertionSort(*a, 12);

    cout << endl;

    cout << "\n\nSorted Array" << endl;
    //loop over the length of the rows
    for(int i=0; i<rows; i++){
        cout << endl;
        //loop over the length of the cols
        for(int j=0; j<cols; j++){
            cout << a[i][j] << "\t";
        }//end of for loop(cols)
    }//end of for loop(rows)

    cout << endl;

    getch();

    return 0;
}

// written by Yusuf Umar-Farouq
