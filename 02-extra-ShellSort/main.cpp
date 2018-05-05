//
//  main.cpp
//  02-extra-ShellSort
//
//  Created by lyj on 2018/5/4.
//  Copyright © 2018 heronlyj. All rights reserved.
//

#include <iostream>
#include "SortTestHelper.h"
#include "SelectionSort.h"
#include "InsertionSort.h"
#include "BubbleSort.h"
#include "ShellSort.h"

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    int n = 20000;
    
    // 测试1 一般测试
    cout<<"Test for random array, size = "<<n<<", random range [0, "<<n<<"]"<<endl;
    
    int *arr1 = SortTestHelper::generateRandomArray(n,0,n);
    int *arr2 = SortTestHelper::copyIntArray(arr1, n);
    int *arr3 = SortTestHelper::copyIntArray(arr1, n);
    int *arr4 = SortTestHelper::copyIntArray(arr1, n);
    
    SortTestHelper::testSort("Selection Sort", selectionSort, arr1, n, false);
    SortTestHelper::testSort("Insertion Sort", insertionSort, arr2, n, false);
    SortTestHelper::testSort("Bubble Sort", bubbleSort, arr3, n, false);
    SortTestHelper::testSort("Shell Sort", shellSort, arr4, n, false);
    
    delete[] arr1;
    delete[] arr2;
    delete[] arr3;
    delete[] arr4;
    
    cout<<endl;
    
    
    // 测试2 测试近乎有序的数组
    int swapTimes = 100;
    
    cout<<"Test for nearly ordered array, size = "<<n<<", swap time = "<<swapTimes<<endl;
    
    arr1 = SortTestHelper::generateNearlyOrderedArray(n, swapTimes);
    arr2 = SortTestHelper::copyIntArray(arr1, n);
    arr3 = SortTestHelper::copyIntArray(arr1, n);
    arr4 = SortTestHelper::copyIntArray(arr1, n);
    
    SortTestHelper::testSort("Selection Sort", selectionSort, arr1, n, false);
    SortTestHelper::testSort("Insertion Sort", insertionSort, arr2, n, false);
    SortTestHelper::testSort("Bubble Sort", bubbleSort, arr3, n, false);
    SortTestHelper::testSort("Shell Sort", shellSort, arr4, n, false);
    
    delete[] arr1;
    delete[] arr2;
    delete[] arr3;
    delete[] arr4;

    return 0;
}
