//
//  main.cpp
//  1-selection-sort
//
//  Created by lyj on 2018/5/3.
//  Copyright © 2018 heronlyj. All rights reserved.
//

#include <iostream>

using namespace std;


//选择排序，依次选择最小的元素来
void selectionSort(int arr[], int n) {
    
    for (int i = 0; i < n ; i++) {
        // 找出 [i, n) 中元素最小的下标
        
        int minIndex = i;
        for (int j = i+1; j <n ; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        
        swap(arr[i], arr[minIndex]);
    }
    
}


int main(int argc, const char * argv[]) {
    
    int a[10] = {3,9,2,7,6,5,4,10,8,1};
    
    selectionSort(a, 10);
    
    for (int i = 0; i < 10; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}
