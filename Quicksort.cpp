#include <iostream>
using namespace std;

void printarray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

void partition(int arr[], int low, int high, int n) {
    if (low >= high) return;
    int pivot = arr[low];
    int i = low + 1, j = high;
    while (i <= j) {
        while (i <= high && arr[i] <= pivot) i++;
        while (j >= low && arr[j] > pivot) j--;
        if (i < j) {
            swap(arr[i], arr[j]);
            printarray(arr, n);
        }
    }
    swap(arr[low], arr[j]);
    printarray(arr, n);
    partition(arr, low, j - 1, n);
    partition(arr, j + 1, high, n);
}

void quickSort(int arr[], int N) {
    partition(arr, 0, N - 1, N);
}

int main() {
    int arr[] = {3, 10, 1, 23, 103, 34, 17, 53, 64, 71};
    int n = sizeof(arr) / sizeof(arr[0]);
    printarray(arr, n);
    quickSort(arr, n);
    return 0;
}
