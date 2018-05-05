//
//  main.cpp
//  03-quick-sort
//
//  Created by lyj on 2018/5/4.
//  Copyright © 2018 heronlyj. All rights reserved.
//

#include <iostream>
#include "QuickSort.h"
#include "QuickSort2.h"
#include "QuickSortThreeWays.h"

#include "SortTestHelper.h"

int main(int argc, const char * argv[]) {
    
    int N = 1000000;
    
    int *arr = SortTestHelper::generateRandomArray(N, 0, N);
    SortTestHelper::testSort("QuickSort 1", quickSort, arr, N, false);
    
    // 版本 1 的快排 对近似有序的数组效果非常不理想
    int *arr2 = SortTestHelper::generateNearlyOrderedArray(N, 100);
    SortTestHelper::testSort("QuickSort 2", quickSort2, arr2, N, false);
    
    
    // 生成 0-100 区间的数字 N 个，所以会出现大量的重复数据
    int *arr3 = SortTestHelper::generateRandomArray(N, 0, 100);
    SortTestHelper::testSort("QuickSortThreeWays", quickSortThreeWays, arr3, N, false);
    
    delete [] arr;
    delete [] arr2;
    delete [] arr3;
    
    return 0;
}
