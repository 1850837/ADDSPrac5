#include "BubbleSort.h"
#include "QuickSort.h"
#include "RecursiveBinarySearch.h"
#include <iostream>
#include <string>

int main(){

    //assign vector
    std::vector<int> list;

    std::string a;
    getline(std::cin, a);

    //change from string to int
    for (int i = 0; i < a.length(); i++){
        if (a[i] != ' '){
            list.push_back(int(a[i]) - 48);
        }
    }

    //sort list
    QuickSort q;
    list = q.sort(list);

    //find bool
    RecursiveBinarySearch r;
    bool b = r.search(list, 1);

    //output
    if (b == 0){
        std::cout << "false ";
    }
    else {
        std::cout << "true ";
    }

    for (int i = 0; i < list.size(); i++){
        std::cout << list[i] << " ";
    }
    std::cout << "\n";

    return 0;
}