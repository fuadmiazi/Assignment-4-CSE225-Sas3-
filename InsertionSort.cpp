#include "InsertionSort.h"
#include <iostream>

using namespace std;

InsertionSort::InsertionSort()
{

}

InsertionSort::~InsertionSort()
{

}

void InsertionSort::InsertionSorter(int arr[], int arr_size)
{
    if(arr_size > 1)
    {
        int size = arr_size;
        for(int index=1; index<size; ++index)
        {
            int j = index-1;
            int key = arr[index];
            while(j>=0 && arr[j] > key)
            {
                arr[j+1] = arr[j];
                --j;
            }
            arr[j+1] = key;
            cout<<"Steps of Insertion Sort"<<endl;
            for(int index =0; index<arr_size; index++)
            {
                cout<<arr[index]<<" ";
            }
            cout<<""<<endl;
        }
    }
}
