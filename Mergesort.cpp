#include <iostream>
using namespace std;
void printarray(int arr[], int N) {
    for (int i = 0; i < N; i++)
        cout << arr[i] << " ";
    cout << endl;
}

void MergeArrays(int arr[], int m, int n, int p, int N) {
    int i = m, j = n + 1;
    while (i < j && j <= p) {
        if (arr[i] <= arr[j]) {
            i++;
        } 
        else {
            int x = arr[j];
            for (int k = j - 1; k >= i; k--) {
                arr[k + 1] = arr[k];
            }
            arr[i] = x;
            i++;
            j++;
        }
    }
    printarray(arr, N);
}

void Split_Merg(int arr[], int first, int last, int N) {
    if (first >= last) return;
    int m = (first + last) / 2;
    Split_Merg(arr, first, m, N);     
    Split_Merg(arr, m + 1, last, N);
    MergeArrays(arr, first, m, last, N);
}


void MergeSort(int arr[], int N) {
    if (N < 2) return;
    Split_Merg(arr, 0, N - 1, N);
}


int main() {
    int arr[] = {3, 10, 1, 23, 103, 34, 17, 53, 64, 71};
    int N = sizeof(arr) / sizeof(arr[0]);
    printarray(arr, N);
    MergeSort(arr, N);
    return 0;
}
