/*
 * Nama     : Hadiza Cahya Firdaus
 * NPM      : 140810180042
 * Kelas    : B
 * Tanggal  : 31 Maret 2020
*/

#include <iostream>
using namespace std;

void selectionSort(int arr[], int size) {
    int min_idx = 0, temp;
    
    for (int i = 0; i < size; i++) {
        int min_idx = i;

        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[min_idx])
                min_idx = j;
        }

        temp = arr[i];
        arr[i] = arr[min_idx];
        arr[min_idx] = temp;
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
    selectionSort(arr, 10);
    printArray(arr, 10);
}
