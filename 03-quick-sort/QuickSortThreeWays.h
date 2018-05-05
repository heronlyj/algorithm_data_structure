//
//  QuickSortThreeWays.h
//  algorithm_data_structure
//
//  Created by lyj on 2018/5/4.
//  Copyright © 2018 heronlyj. All rights reserved.
//

#ifndef QuickSortThreeWays_h
#define QuickSortThreeWays_h

using namespace std;

template <typename T>
void __quickSortThreeWays(T arr[], int l, int r) {
    
    // 递归函数需要退出条件
    if (l > r) {
        return;
    }
    
    int randIndex = rand()%(r - l + 1) + l;
    
    swap(arr[l], arr[randIndex]);
    
    T v = arr[l];
    
    int lt = l; // arr[l+1...lt] < v
    int gt = r + 1; // arr[gt...r] > v
    int i = l + 1; // arr[lt + 1 ... i ) == v
    
    while (i < gt) {
        if (arr[i] < v) {
            swap(arr[i], arr[lt+1]); // lt + 1 == v 这里就是用 [==v] 的区间第一个元素与 i 位置的元素交换
            i ++;
            lt ++;
        } else if (arr[i] > v) {
            swap(arr[i], arr[gt - 1]);
            gt--;
            // 此处 i 不变，因为 swap 之后 i 的位置变成了一个没有处理的元素
        } else {
            i ++; // 等于这种情况，只需要 i ++ 就可以给中间的区域扩容了
        }
    }
    
    // 最后用 l 位置的元素交换 < v 区间的最右边的元素
    swap(arr[l], arr[lt]);
    
    // 此时 lt 位置的元素 == v 了，所以 lt 需要 --;
    lt--;
    
    // 然后再递归左右两端的序列
    __quickSortThreeWays(arr, l, lt);
    __quickSortThreeWays(arr, gt, r);
}

template <typename T>
void quickSortThreeWays(T arr[], int length) {
    srand(time_t(NULL));
    __quickSortThreeWays(arr, 0, length - 1);
}

#endif /* QuickSortThreeWays_h */
