//
//  main.cpp
//  2-selection-sort-adance-template
//
//  Created by lyj on 2018/5/3.
//  Copyright © 2018 heronlyj. All rights reserved.
//

#include <iostream>
#include "Student.hpp"

using namespace std;

template <typename T>
void selectionSort(T arr[], int n) {
    
    for (int i = 0; i < n ; i++) {
        
        // 查找出 [i, n) 最元素最小的下标
        int minIndex = i;
        for (int j = i+1; j<n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        
        swap(arr[i], arr[minIndex]);
    }
    
}


int main(int argc, const char * argv[]) {
    // insert code here...
    
    Student d[4] = {{"d", 90}, {"c", 80}, {"e", 40}, {"b", 100}};
    
    selectionSort(d, 4);
    
    for (int i = 0; i < 4; i++) {
        std::cout << d[i];
    }
    std::cout << std::endl;
    return 0;
}
