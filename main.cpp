#include "BubbleSort.h"
#include "QuickSort.h"
#include "RecursiveBinarySearch.h"
#include <iostream>
#include <sstream>

int main(){

    std::vector<int> list = {4, 5, 7, 9, 2, 5, 7, 3};

    RecursiveBinarySearch a;

    bool b = a.search(list, 0);

    // for (int i = 0; i < 8; i++){
    //     std::cout << list[i] << " ";
    // }
    // std::cout << "\n";

    std::cout << b << "\n";

    return 0;
}