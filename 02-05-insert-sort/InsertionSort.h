//
//  InsertSort.h
//  02-sort
//
//  Created by lyj on 2018/5/4.
//  Copyright © 2018 heronlyj. All rights reserved.
//

#ifndef InsertSort_h
#define InsertSort_h

template<typename T>
void insertionSort(T arr[], int n) {
    
    for (int i = 1; i < n; i++) {
        
// 3: 优化 swap 带来的损耗，将多次 swap 操作优化成赋值操作
// 插入排序对基本有序的数组，排序的性能非常可观，因为有序所以可以提前进入下一个循环
// 寻找元素 arr[i] 最合适的的位置
        
        T e = arr[i];
        
        // e 需要存放的位置
        int j;
        
        // 插入排序总是比较 j 与 j - 1 如果 j 已经 比 j - 1 大，则 进入 i++ 循环
        for (j = i; j > 0 && arr[j - 1] > e; j --) {
            arr[j] = arr[j - 1];
        }
        
        arr[j] = e;

        // 2:
        // 插入排序总是比较 j 与 j - 1 如果 j 已经 比 j - 1 大，则 进入 i++ 循环
//        for (int j = i; j > 0 && arr[j] < arr[j - 1]; j --)
//            std::swap(arr[j], arr[j - 1]);
        
        // 1 :
//        for (int j = i; j > 0; j --) {
//            if (arr[j] < arr[j - 1]) {
//                std::swap(arr[j], arr[j - 1]);
//            } else {
//                break;
//            }
//        }
    }
    
}



#endif /* InsertSort_h */

