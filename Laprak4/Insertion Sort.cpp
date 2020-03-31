/*
 * Nama     : Hadiza Cahya Firdaus
 * NPM      : 140810180042
 * Kelas    : B
 * Tanggal  : 31 Maret 2020
 */

#include <iostream>
using namespace std;

void swap(int& x, int& y) {
    int temp = x;
    x = y;
    y = temp;
}

void insertionSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int j = i + 1;

        if (arr[i] > arr[j]) {
            swap(arr[i], arr[j]);

            for (i; i > 0; i--) {
                if (arr[i-1] > arr[i])
                    swap(arr[i-1], arr[i]);
                else
                    break;
            }
        }
    }
}

void printArray(int arr[], int size) { 
    for (int i=0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    int arr[10];

    for (int i = 0; i < 10; i++) {
        cout << "arr[" << i << "] = ";
        cin >> arr[i];
    }

    cout << endl << "array sebelum disort : ";
    printArray(arr, 10);

    cout << endl << "array setelah disort : ";
    insertionSort(arr, 10);
    printArray(arr, 10);
}
