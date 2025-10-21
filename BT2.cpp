#include <iostream>
using namespace std;

void selectionSort(int arr[], int n) {
    cout<<"Selection_sort"<<endl;
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i; 
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
}
void insertionSort(int arr[], int n) {
    cout<<"Insertion_sort"<<endl;
    for (int i = 1; i < n; i++) {
        int key = arr[i];  
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;   
    }
}
void bubblesort(int arr[], int n) {
    cout << "Bubble_sort" << endl;
    for (int i = 0; i < n - 1; i++) {
        for (int j = n - 1; j > i; j--) {
            if (arr[j] < arr[j - 1]) {
                swap(arr[j], arr[j - 1]);
            }
        }
        for (int k = 0; k < n; k++)
            cout << arr[k] << " ";
        cout << endl;
    }
}
int main() {
    int arr[] = {3,10,1,23,103,34,17,53,64,71};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
    // chỉ dùng 1 trong 3 hàm sắp xếp dưới đây để kiểm tra kết quả
    //selectionSort(arr, n); 
    //insertionSort(arr, n); 
    //bubblesort(arr, n);
}
