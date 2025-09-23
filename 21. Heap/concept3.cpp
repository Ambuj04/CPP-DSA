//head sort

#include<iostream>

using namespace std;
void heapify(int arr[], int n, int i) {
    int largest = i;
    int leftIndex = 2*i;
    int rightIndex = 2*i + 1;

    if(leftIndex <= n && arr[largest] < arr[leftIndex]) {
        largest = leftIndex;
    }
    if(rightIndex <= n && arr[largest] < arr[rightIndex]) {
        largest = rightIndex;
    }

    if(largest != i) {
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest);
    }
}

void heapSort(int arr[], int n) {
    // Step 1: Build max heap
    for(int i = n/2; i > 0; i--) {
        heapify(arr, n, i);
    }

    // Step 2: Sort
    for(int i = n; i > 1; i--) {
        swap(arr[1], arr[i]);   // Move max to end
        heapify(arr, i-1, 1);   // Heapify reduced heap
    }
}



int main() {
    int arr[] = {-1, 12, 15, 13, 11, 14}; 
    int n = 5;  // actual size (ignoring -1)
  //head sort  make first heap of a array then sort the heap
    heapSort(arr, n);

    for(int i = 1; i <= n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
