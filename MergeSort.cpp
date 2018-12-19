#include "MergeSort.h"
#include <iostream>

using namespace std;

MergeSort::MergeSort()
{

}

MergeSort::~MergeSort()
{

}

void Merger(int arr[], int lo, int mi, int hi)
{
    int *temp = new int[hi-lo+1];
    int index = lo, j = mi+1;
    int k = 0;
    while(index <= mi && j <=hi)
    {
        if(arr[index] <= arr[j])
            temp[k++] = arr[index++];
        else
            temp[k++] = arr[j++];
    }

    while(index <= mi)
        temp[k++] = arr[index++];
    while(j <= hi)
        temp[k++] = arr[j++];
    for(k = 0, index= lo; index <= hi; ++index, ++k)
        arr[index] = temp[k];
    delete []temp;
}

void MergeSortHelper(int arr[], int lo, int hi)
{
        int mid;
        if(lo < hi)
        {
            mid = (lo + hi) / 2;
            MergeSortHelper(arr, lo, mid);
            MergeSortHelper(arr, mid+1, hi);
            Merger(arr, lo, mid, hi);
        }
}

    void MergeSort::MergeSorter(int arr[], int arr_size)
    {
        MergeSortHelper(arr, 0, arr_size-1);
    }

