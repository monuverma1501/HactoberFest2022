#include <iostream>
using namespace std;

int FindPivot(int arr[], int size) {
    int start=0, end=size-1;
    int mid = (start + ((end-start)/2));
    
    while(start < end) {
        if(arr[mid] >= arr[0]) {
            start = mid + 1;
        } else {
            end = mid;
        }

        mid = (start + ((end-start)/2));
    }

    return start;
}

int BinarySearch(int arr[], int start, int end, int k) {
    int mid = (start + (end - start)/2);

    while(start <= end) {
        if(arr[mid] == k) {
            return mid;
        }
        
        if(arr[mid] < k) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
        
        mid = (start + (end - start)/2);c--;
    }

    return -1;
}

int main() {
    int arr[100], n, i, k, p;

    cout<<"Enter the size of the array: ";
    cin>>n;

    cout<<"Enter the elements of the array: ";
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }

    cout<<"Enter the element to search: ";
    cin>>k;

    p = FindPivot(arr, n);

    if((k <= arr[n-1]) && (k >= arr[p])) {
        i = BinarySearch(arr, p, n-1, k);
    } else {
        i = BinarySearch(arr, 0, p-1, k);
    }

    if(i == -1)
        cout<<"\nThe element "<<k<<" is not present in the array";
    else
        cout<<"\nThe element "<<k<<" is present in the array at index no "<<i;

    return 0;
}