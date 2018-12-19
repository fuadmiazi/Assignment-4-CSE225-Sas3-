#ifndef SELECTIONSORT_H_INCLUDED
#define SELECTIONSORT_H_INCLUDED
#include<vector>

class SelectionSort
{
public:
    SelectionSort();
    ~SelectionSort();
    void SelectionSorter(int arr[], int arr_size);
    void SelectionSorterVector(std::vector<int> & data);
};

#endif // SELECTIONSORT_H_INCLUDED
