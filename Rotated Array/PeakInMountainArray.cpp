// Write a program to find the index of the peak element in a mountain array

#include <iostream>
using namespace std;

int FindPeak(int arr[], int n) {
    int s = 0, e = n-1;
    int m = s + (e-s)/2;

    while(s<e) {

        if(arr[m] < arr[m+1]) {
            s = m + 1;
        }
        else {
            e = m;
        }

        m = s + (e-s)/2;
    }

    return s;
}

int main() {
    int arr[100], n, key;

    cout<<"\nEnter the size of array: ";
    cin>>n;

    cout<<"\nEnter the elements of array: ";
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }

    cout<<"\n\nIndex of peak element is: "<<FindPeak(arr, n);

    return 0;
}