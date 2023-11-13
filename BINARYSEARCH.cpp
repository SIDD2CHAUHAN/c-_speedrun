#include <iostream>
using namespace std;

int binarySearch(int arr[], int N, int x) {
    int left = 0;
    int right = N - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == x) {
            return mid; 
        } else if (arr[mid] < x) {
            left = mid + 1; 
        } else {
            right = mid - 1; 
        }
    }

    return -1; 
}

int main() {
    int N;
    cout << "Enter the number of elements in the sorted array: ";
    cin >> N;

    int arr[N];

    cout << "Enter the elements of the sorted array in ascending order:" << endl;
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    int target;
    cout << "Enter the element to search for: ";
    cin >> target;

    int result = binarySearch(arr, N, target);

    if (result != -1) {
        cout << "Element " << target << " found at index " << result << endl;
    } else {
        cout << "Element " << target << " not found in the array." << endl;
    }

    return 0;
}