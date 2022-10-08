#include <bits/stdc++.h>
using namespace std;

void printArray(vector<int> &arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

void insertionSort(vector<int> &arr, int n)
{
    int key, j;

    for (int i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }
}

int main()
{
    vector<int> arr = {12, 54, 65, 7, 23, 9};
    int n = arr.size();
    printArray(arr, n);
    insertionSort(arr, n);
    printArray(arr, n);

    return 0;
}