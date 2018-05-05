//
//  main.cpp
//  3-SortTestHelper
//
//  Created by lyj on 2018/5/3.
//  Copyright © 2018 heronlyj. All rights reserved.
//

#include <iostream>
#include "SortTestHelper.h"
#include "SelectionSort.h"

int main(int argc, const char * argv[]) {
    // insert code here...
    
    int N = 1000;
    int *arr = SortTestHelper::genterateRandeomArray(N, 0, N);
    SortTestHelper::testSort("SelectionSort", selectionSort, arr, N);
    
    delete [] arr;
    
    return 0;
}
