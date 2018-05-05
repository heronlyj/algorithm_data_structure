//
//  ShellSort.h
//  algorithm_data_structure
//
//  Created by lyj on 2018/5/4.
//  Copyright © 2018 heronlyj. All rights reserved.
//

#ifndef ShellSort_h
#define ShellSort_h

template<typename T>


/**
 希尔排序

 @param arr
 @param n
 */
void shellSort(T arr[], int n) {
    
    // 最初是让 h 与 0 比较，然后就是 h + 1 与 1 比较，在第一次切分为两部分的时候
    //
    // 此处的循环只有一次 也就是这种 (例如: 10 14 73 25 23 13 27 94 33 39 25 59 94 65 82 45)
    //
    // h = 13
    //
    // | 10 14 73 25 23 13 27 94 33 39 25 59 94 |  ---->  | 10 14 45 25 23 13 27 94 33 39 25 59 94 |
    // | 65 82 45                               |  ---->  | 65 82 73                               |
    //
    // 然后 h = 4
    //
    // | 10 14 45 25 | ----> | 10 13 25 25 |
    // | 23 13 27 94 | ----> | 23 14 27 59 |
    // | 33 39 25 59 | ----> | 33 39 45 73 |
    // | 94 65 82 73 | ----> | 94 65 82 94 |
    //
    // 排序的方式是 随着 i = 4 依此递增到 n，先是第二行与第一行比较，然后是第三行与第二行比较，最后第四行与第三行，逐行扫描
    //
    // 最后 h = 1 的时候 变成单列数组，此时按照常规的插入排序算法将整列数组按顺序排好
    //

    int h = 1;
    while (h <= n/3) {
        h = h * 3 + 1;
    }
    
    while (h >= 1) {
        
        for (int i = h; i < n; i++) {
            
            T e = arr[i];
            int j;
            
            for (j = i; j >= h && e < arr[j - h]; j -= h) {
                arr[j] = arr[j - h];
            }
            
            arr[j] = e;
        }
        
        h /= 3;
    }
    
//    // 计算 increment sequence: 1, 4, 13, 40, 121, 364, 1093...
//    int h = 1;
//    while( h < n/3 )
//        h = 3 * h + 1;
//
//    while( h >= 1 ){
//
//        // h-sort the array
//        for( int i = h ; i < n ; i ++ ){
//
//            // 对 arr[i], arr[i-h], arr[i-2*h], arr[i-3*h]... 使用插入排序
//            T e = arr[i];
//            int j;
//            for( j = i ; j >= h && e < arr[j-h] ; j -= h )
//                arr[j] = arr[j-h];
//            arr[j] = e;
//        }
//
//        h /= 3;
//    }
    
}


#endif /* ShellSort_h */
