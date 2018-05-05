//
//  QuickSort2.h
//  algorithm_data_structure
//
//  Created by lyj on 2018/5/4.
//  Copyright © 2018 heronlyj. All rights reserved.
//

#ifndef QuickSort2_h
#define QuickSort2_h

using namespace std;

template <typename T>
int __partition2(T arr[], int l, int r) {
    
    // 此处使用一个随机的位置与 l 位置的元素交换，依此避免几乎有序序列在快排中左右不平衡的问题
    swap(arr[l], arr[rand()%(r - l + 1) + l]);
    
    T v = arr[l];
    
    int j = l;
    for (int i = l + 1; i <= r ; i++) {
        if (arr[i] < v) {
            j++;
            swap(arr[i], arr[j]);
        }
    }
    
    swap(arr[j], arr[l]);
    
    return j;
    
}


template <typename T>
void __quickSort2(T arr[], int l, int r) {
    
    if (l > r) {
        return;
    }
    
    int p = __partition2(arr, l, r);
    
    __quickSort2(arr, l, p - 1);
    __quickSort2(arr, p + 1, r);
}

template <typename T>
void quickSort2(T arr[], int length) {
    srand(time_t(NULL));
    __quickSort2(arr, 0, length - 1);
}

#endif /* QuickSort2_h */
