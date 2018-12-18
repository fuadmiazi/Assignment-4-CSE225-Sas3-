#include "BubbleSort.h"
#include <iostream>

using namespace std;

BubbleSort::BubbleSort()
{

}
BubbleSort::~BubbleSort()
{

}

void BubbleSort::BubbleSorter(int *array, int n)
{
    bool swapped = true;
    int j = 0;
    int temp;

    while (swapped)
    {
        swapped = false;
        j++;
        for(int index=0; index<n-j; ++index)
        {
            if(array[index] > array[index+1])
            {
                temp = array[index];
                array[index] = array[index+1];
                array[index+1] = temp;
                for(int index=0;index<8;index++)
                {
                    cout<<array[index]<<" ";
                }
                cout<<""<<endl;
                swapped = true;
            }
        }
    }
}
