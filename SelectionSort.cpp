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
void SelectionSort::SelectionSorterVector(vector <int> &data)
{
    cout<<"Steps of Selection Sort using Vector"<<endl;
     int index,num, first_element, size = data.size();

     for ( index =0; index<size+1; index++ ){
         first_element = index;
         for ( num = index+1; num<size; num++ ){

             if ( data[num] < data[first_element] )
             first_element = num;
         }
     swap(data[first_element], data[index]);
     for (std::vector<int>::iterator val = data.begin();val != data.end(); ++val)
    std::cout << *val <<" " ;
    cout<<""<<endl;
     }


}
