#include "BubbleSort.h"
#include "QuickSort.h"
#include <iostream>

int main(){

    std::vector<int> list = {4, 5, 7, 9, 2, 5, 7, 3};

    QuickSort a;

    list = a.sort(list);

    for (int i = 0; i < 8; i++){
        std::cout << list[i] << " ";
    }
    std::cout << "\n";

    return 0;
}