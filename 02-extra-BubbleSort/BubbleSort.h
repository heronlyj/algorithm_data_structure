//
//  BubbleSort.h
//  algorithm_data_structure
//
//  Created by lyj on 2018/5/4.
//  Copyright © 2018 heronlyj. All rights reserved.
//

#ifndef BubbleSort_h
#define BubbleSort_h

using namespace std;

template <typename T>
void bubbleSort(T arr[], int n) {
    
    // 标记在一次循环比较中是否交换过位置，如果没有交换过位置则说明已经完全排好序了，可以提前结束
    bool swapped;
    
    for (int i = 0; i < n; i ++) {
        
        swapped = false;
        
        // 因为每上一次都把最大的一个元素移动到后面去了，所以每次内层循环的次数可以减一 这里就体现在 j < n - i
        for (int j = 0; j < n - i; j ++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        
        if (!swapped) {
            break;
        }
    }
}

#endif /* BubbleSort_h */
