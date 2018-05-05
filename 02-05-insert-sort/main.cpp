//
//  main.cpp
//  05-insert-sort
//
//  Created by lyj on 2018/5/4.
//  Copyright © 2018 heronlyj. All rights reserved.
//

#include <iostream>
#include "InsertSort.h"
#include "SelectionSort.h"
#include "SortTestHelper.h"


int main(int argc, const char * argv[]) {
    
    int N = 10000;
//    int *arr = SortTestHelper::genterateRandeomArray(N, 0, N);
    int *arr = SortTestHelper::genterateNearlyOrderArray(N, 0);
    int *arr1 = SortTestHelper::copyIntArray(arr, N);
    
    SortTestHelper::testSort("selectionSort", selectionSort, arr, N);
    SortTestHelper::testSort("insertSort", insertSort, arr1, N);
    
    delete [] arr;
    delete [] arr1;
 
    return 0;
}
