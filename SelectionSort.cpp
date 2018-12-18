#include "SelectionSort.h"
#include <iostream>

using namespace std;

SelectionSort::SelectionSort()
{

}

SelectionSort::~SelectionSort()
{

}

inline void Swap(int &a, int &b)
{
    int temp = a;
    a=b;
    b=temp;
}

void SelectionSort::SelectionSorter(int arr[], int arr_size)
{
    for(int index=0; index< arr_size - 1; ++index)
    {
        int min = index;
        for(int j=index+1;j<arr_size;++j)
            if(arr[j] < arr[min])
                min = j;
        Swap(arr[min], arr[index]);
    }
    cout<<"Steps of Selection Sort:"<<endl;
    for(int index=0; index<arr_size; index++)
    {
        cout<<arr[index]<<" ";
    }
    cout<<""<<endl;
}
