#include "QuickSort.h"
#include <iostream>

// QuickSort::QuickSort(){

// }

std::vector<int> QuickSort::sort(std::vector<int> list){

    std::vector<int> newList = sorterFunction(list, 0, list.size() - 1);

    return newList;

}

std::vector<int> QuickSort::sorterFunction(std::vector<int> list, int start, int end){
    //variables
    int dummy;

    //base cases

    //case where length of subarray = 1
    if (end - start <= 0){
        std::cout << "Hmm " << list[start] << "\n";

        std::vector<int> newList = {list[start]};
        return newList;
    }

    //case where length of subarray = 2
    if (end - start == 1){
        if(list[start] > list[end]){
            dummy = list[start];
            list[start] = list[end];
            list[end] = dummy;
        }

        std::cout << "List[start] = " << list[start] << " and list[end] = " << list[end] << "\n";
        
        std::vector<int> newListA = {list[start], list[end]};
        return newListA;
    }

    std::swap(list[2], list[end]);

    //main logic

    //select pivot as the third element
    int pivot_index = start;
    for (int i = start; i < end; i++){
        if(list[i] < list[end]){
            dummy = list[pivot_index];
            list[pivot_index] = list[i];
            list[i] = dummy;
        
            pivot_index++;
        }
    }

    //swapping pivot_index element and pivot
    dummy = list[end];
    list[end] = list[pivot_index];
    list[pivot_index] = dummy;

    //call sort for sub-arrays
    std::vector<int> listA;
    std::vector<int> listB;

    listA = sorterFunction(list, start, pivot_index - 1);
    listB = sorterFunction(list, pivot_index + 1, end);

    listA.insert(listA.end(), list[pivot_index]);
    listA.insert(listA.end(), listB.begin(), listB.end());

    return listA;
}