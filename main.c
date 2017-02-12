
#include <stdio.h>

int Binary_Search(int* array, int array_length, int key){
    int tmp;
    for (int i=0;i<(array_length-1);i++)
    {
        for (int j=0;j<array_length-i-1;j++)
        {
            if (array[j] > array[j+1]) // Decreasing order
            {
                tmp= array[j];  // swap
                array[j]   = array[j+1];
                array[j+1] = tmp;
            }
        }
    }
    int Search_Time = 0;
    int low = 0, high = (array_length-1), middle;
    while(low <= high) {
        middle = (int)((high + low)/2);
        Search_Time++;
        if(array[middle] < key){
            low = middle+1; // Change the left part
        }
        else if (array[middle] > key){
            high = middle-1; // Change the right part
        }
        else{
            printf("Index : %d\n",middle);
            printf("Searching times : %d\n",Search_Time);
            return middle; // Return the index of where the key is
        }
        
    }
    return (-1);
}
