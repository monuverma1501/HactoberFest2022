#include <bits/stdc++.h>
using namespace std;

void rotate(int arr[], int n, int key) {
    int temp[100];
    for(int i=0; i<n; i++) {
        int index = (i+key)%n;
        temp[index] = arr[i];
    }
    
    for(int i=0; i<n; i++) {
        arr[i] = temp[i];
    }
}

int main() {
    int arr[100], n, k;
    cout<<"\nEnter the size of array: ";
    cin>>n;

    cout<<"\nEnter the elements of array: ";
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }

    cout<<"\nEnter the key to rotate array: ";
    cin>>k;

    rotate(arr, n, k);

    cout<<"\n\nThe rotated array is: ";
    for(int i=0; i<n; i++) {
        cout<<arr[i]<<"  ";
    }

    return 0;
}