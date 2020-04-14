/* 
Nama		: Hadiza Cahya Firdaus 
Kelas		: B
NPM			: 140810180042
Tanggal		: 10 Maret 2020
Deskripsi 	: Selection  Search
*/

#include <iostream>

using namespace std;

#define N 5

void SelectionSort(int *x){
    int imaks,temp;
    for(int i = N-1; i >= 1; i--){
        imaks = 0;
        for(int j = 1; j <= i; j++)
            if(x[j] > x[imaks])
                imaks = j;
        temp = x[i];
        x[i] = x[imaks];
        x[imaks] = temp;
    }
}

void printArray(int *x){
    for(int i = 0; i < N; i++)
    {
        cout << " " << x[i];
    }
    cout << endl;
}

int main(){
    int x[N] = {1,999,99,20,3};
    cout << "Sebelum sort : "; printArray(x);
    SelectionSort(x);
    cout << "Setelah sort : "; printArray(x);
}

