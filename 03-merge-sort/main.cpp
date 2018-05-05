//
//  main.cpp
//  03-merge-sort
//
//  Created by lyj on 2018/5/4.
//  Copyright © 2018 heronlyj. All rights reserved.
//

#include <iostream>
#include "MergeSort.h"
#include "SortTestHelper.h"

using namespace std;

int main(int argc, const char * argv[]) {
    
    int N = 10;
    int *arr = SortTestHelper::generateRandomArray(N, 0, N);
    
    for (int i = 0; i < N; i ++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    SortTestHelper::testSort("Merge sort", mergeSort, arr, N, true);
    
    delete [] arr;
    
    return 0;
}
