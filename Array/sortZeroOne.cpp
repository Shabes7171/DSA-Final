#include <bits/stdc++.h>
using namespace std;

void sortZeroOne(int arr[], int size) {
    int left = 0, right = size - 1;

    while (left < right) {
        
        while (arr[left] == 0 && left < right) {
            left++;
        }

       
        while (arr[right] == 1 && left < right) {
            right--;
        }


        if (left < right) {
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int size;
    cout << "Enter size of the array: ";
    cin >> size;

    int arr[100];
    cout << "Enter array elements (0s and 1s only): " << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    sortZeroOne(arr, size);

    cout << "Sorted array: " << endl;
    printArray(arr, size);

    return 0;
}
