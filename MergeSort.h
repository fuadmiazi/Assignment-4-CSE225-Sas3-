#ifndef MERGESORT_H_INCLUDED
#define MERGESORT_H_INCLUDED
#include<vector>

class MergeSort
{
public:
    MergeSort();
    ~MergeSort();
    void MergeSorter(int arr[], int arr_size);
    void MergeSorterVector(std::vector<int> & data);
};

#endif // MERGESORT_H_INCLUDED
