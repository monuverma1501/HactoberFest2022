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

int main() {
    int arr[100], n, p;

    cout<<"Enter the size of the array: ";
    cin>>n;

    cout<<"Enter the elements of the array: ";
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }

    p = FindPivot(arr, n);

    cout<<"\nThe pivot element in the entered array is: "<<arr[p];
    cout<<"\nThe pivot element is present on index no: "<<p;

    return 0;
}