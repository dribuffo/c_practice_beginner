// This program is meant to practice my DSAs in C.
// These are going to be in this one file initially, but will be placed in a library file
// and associated header file eventually.

#include <stdio.h>

//bubble sort
void bubbleSort(int a[], int length)
{
    //outer loop => number of passes of the array
    for (int i = 0; i < length; i++)
    {                            //adding -i lets us avoid making checks on already sorted parts of the array
        for(int j = 0; j < (length - 1 - i); j++) //inner loop => doing the comparison and swapping elements, stopping at one short of the index for final comparison
        {
            if(a[j] > a[j + 1]) //comparing index with next index
            {
                int temp = a[j]; //creating temp and storing current index there
                a[j] = a[j + 1]; //assigning current index to value of next index aka swapping
                a[j + 1] = temp; //replacing swapped index with the stored value
            }
        }
    }
}


//selection sort
//insertion sort
void insertionSort(int a[], int length)
{
    //outer loop => looking at each element
    for(int i = 1; i < length; i++)
    {
        int temp = a[i];
        int j = i - 1;
        //inner loop => for shifting each element
              //while j is greater or equal to 0, and the number we are comparing is greater than the temp value
        while(j >= 0 && a[j] > temp)
        {
            //we are moving the larger number to the next index
            a[j + 1] = a[j];
            //moving j to the next lower index so we can keep comparing
            j = j - 1;
        }
        //after while loop is terminated, we place temp value in correct position
        //a[j+1] is used since we would have decremented indecies 1 below the correct
        //index for the while loop to have terminated.
        a[j+1] = temp;
    }
}
//merge sort
//quick sort
//radix sort

//print array function, to avoid clogging main() with print loops.
void printArray(int a[], int size)
{
    for(int i = 0; i < 8; i++){
        printf("%d ", a[i]);
    }
    printf("\n");
}

int main()
{
    int a[] = {8, 4, 9, 5, 7, 6, 3, 2};
    printf("Here is your starting array: ");
    printArray(a, 8);
    printf("\n"); //for making the two lines easier to read


    printf("Here us your array after being sorted: ");
    bubbleSort(a, 8);
    printArray(a, 8);

    return 0;
}