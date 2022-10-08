#include <bits/stdc++.h>
using namespace std;

void check(int arr[], int n) {
    int count=0;
    for(int i=0; i<n; i++) {
        if(arr[i] > arr[i+1])
            count++;
    }

    if(arr[n-1] > arr[0]) {
        count++;
    }

    if(count <= 1) {
        cout<<"True";
    } else {
        cout<<"False";
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

    check(arr, n);

    return 0;
}