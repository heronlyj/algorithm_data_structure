//
//  QuickSort.h
//  algorithm_data_structure
//
//  Created by lyj on 2018/5/4.
//  Copyright © 2018 heronlyj. All rights reserved.
//

#ifndef QuickSort_h
#define QuickSort_h

using namespace std;

/**
 快速排序返回中间位置的 index

 @param arr -
 @param l -
 @param r -
 @return 中间位置的 index
 */
template <typename T>
int __partition(T arr[], int l, int r) {
    
    // 取最左侧的值作为本次中间的值
    T v = arr[l];
    
    // j 最终为中间值的位置
    int j = l;
    for (int i = l + 1; i <= r; i ++) {
       // 如果比 v 小 则与 j + 1 位置的值交换
        if (arr[i] < v) {
            j++;
            swap(arr[j], arr[i]);
        }
    }
    
    swap(arr[l], arr[j]);
    
    return j;
}


template <typename T>
void __quickSort(T arr[], int l, int r) {
    
    if (l > r) {
        return;
    }
    
    int p = __partition(arr, l, r);
    __quickSort(arr, l, p - 1);
    __quickSort(arr, p + 1, r);
}

template <typename T>
void quickSort(T arr[], int length) {
    __quickSort(arr, 0, length - 1);
}


#endif /* QuickSort_h */
