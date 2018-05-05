//
//  SortTestHelper.h
//  02-sort
//
//  Created by lyj on 2018/5/3.
//  Copyright © 2018 heronlyj. All rights reserved.
//

#ifndef SortTestHelper_h
#define SortTestHelper_h

#include <stdio.h>
#include <cassert>
#include <ctime>
#include <iostream>
#include <string>

using namespace std;

namespace SortTestHelper {
    
    /**
     生成一个随机数组，每个元素的范围是 [rangeL, rangeR]
     
     @param n 数组元素的个数
     @param rangeL 范围的最小值
     @param rangeR 范围的最大值
     @return 返回的随机数组
     */
    int * generateRandomArray(int n, int rangeL, int rangeR) {
        
        assert(rangeL <= rangeR);
        
        int *arr = new int[n];
        srand(time_t(NULL));
        
        for (int i = 0; i<n; i++) {
            arr[i] = rand() % (rangeR - rangeL + 1) + rangeL;
        }
        
        return arr;
    }
    

    /**
     生成近乎有序的数组

     @param n 数组大小
     @param swapTimes 随机交换的次数(次数越大越无序)
     @return -
     */
    int * generateNearlyOrderedArray(int n, int swapTimes) {
        int *arr = new int[n];
        for (int i = 0; i < n; i ++) {
            arr[i] = i;
        }
        
        srand(time_t(NULL));
        for (int i = 0; i < swapTimes; i ++) {
            int a = rand()%n;
            int b = rand()%n;
            swap(arr[a], arr[b]);
        }
        
        return arr;
    }
    
    template<typename T>
    void printArray(T arr[], int n) {
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
        
        return;
    }
    
    
    /**
     检测一个数组是否被排序

     @param arr 检测的数组
     @param n 数组的个数
     @return 是否被排序
     */
    template<typename T>
    bool isSorted(T arr[], int n) {
        for (int i = 0; i < n - 1; i++)
            if (arr[i] > arr[i + 1]) {
                cout << "sort error -> " << i << " : " << arr[i] << " <= " << i + 1 << " : " << arr[i + 1] << endl;
                return false;
            }
        return true;
    }
    
    template<typename T>
    void testSort(const string &sortName, void(*sort)(T[], int), T arr[], int n, bool showResult) {
        
        clock_t startTime = clock();
        sort(arr, n);
        clock_t endTime = clock();
        
        if (showResult) {
            for (int i = 0; i < n; i ++) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
        
        assert(isSorted(arr, n));
        
        cout << sortName << " : " << double(endTime - startTime)/CLOCKS_PER_SEC << " s " << endl;
        return;
    }
    
    int* copyIntArray(int a[], int n) {
        int* arr = new int[n];
        for (int i = 0; i < n ; i++) {
            arr[i] = a[i];
        }
        return arr;
    }
    
}


#endif /* SortTestHelper_h */
