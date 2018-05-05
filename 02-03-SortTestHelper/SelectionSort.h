//
//  SelectionSort.h
//  02-sort
//
//  Created by lyj on 2018/5/3.
//  Copyright © 2018 heronlyj. All rights reserved.
//

#ifndef SelectionSort_h
#define SelectionSort_h

template <typename T>
void selectionSort(T arr[], int n) {
    
    for (int i = 0; i < n ; i++) {
        
        // 查找出 [i, n) 最元素最小的下标
        int minIndex = i;
        for (int j = i+1; j<n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        
        std::swap(arr[i], arr[minIndex]);
    }
    
}

#endif /* TemplateSelectionSort_h */
