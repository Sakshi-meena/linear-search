#include<iostream>
using namespace std;

int binarysearch(int arr[], int size, int key) {
    int start = 0;
    int end = size - 1;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (arr[mid] == key) {
            return mid;
        }

        if (arr[mid] < key) {
            start = mid + 1;
        } 
        else {
            end = mid - 1;
        }
    }

    return -1;
}

int main() {
    int even[6] = {3, 5, 9, 8, 7, 4};
    int odd[5] = {7, 1, 3, 4, 9};

    int indexEven = binarysearch(even, 6, 8);
    cout << "index of 8 in even array is " << indexEven << endl;

    int indexOdd = binarysearch(odd, 5, 9);
    cout << "index of 9 in odd array is " << indexOdd << endl;

    return 0;
}
