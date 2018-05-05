//
//  main.cpp
//  02-extra-BubbleSort
//
//  Created by lyj on 2018/5/4.
//  Copyright © 2018 heronlyj. All rights reserved.
//

#include <iostream>
#include "BubbleSort.h"
#include "SortTestHelper.h"

int main(int argc, const char * argv[]) {
    // insert code here...
    
    int N = 100000;
    int *arr = SortTestHelper::genterateRandeomArray(N, 0, N);
    SortTestHelper::testSort("Bubble sort", bubbleSort, arr, N, true);
    
    return 0;
}
