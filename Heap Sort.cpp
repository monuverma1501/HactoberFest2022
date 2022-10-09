#include<bits/stdc++.h> 
using namespace std; 
//Heap sort 
int Left(int i) 
{ 
 	return i*2+1; 
} 
int Right(int i) 
{ 
 	return 2*i+2; 
} 
int Parent(int i) 
{ 
 	return i/2; 
} 
void Max_Heapify(int A[],int i,int n) 
{ 
 	int l=Left(i); 
 	int r=Right(i); 
 	int largest=0; 
 	if(l<n && A[l]>A[i]) 
 		largest=l; 
 	else 
 		largest=i; 
 	if(r<n && A[r]>A[largest]) 
 		largest=r; 
 	if(largest!=i) 
 	{ 
 		int t=A[i]; 
 		A[i]=A[largest]; 
 		A[largest]=t; 
 		Max_Heapify(A,largest,n); 
 	} 
} 
void Build_Heap(int A[],int n) 
{ 
 	for(int i=(n/2)-1;i>=0;i--) 
 	{ 
 		Max_Heapify(A,i,n); 
 	} 
} 
void Heap_Sort(int A[],int n) 
{ 
 	Build_Heap(A,n); 
 	for(int i=n-1;i>=0;i--) 
 	{ 
 		int t=A[i]; 
 		A[i]=A[0]; 
 		A[0]=t; 
 		n-=1; 
 		Max_Heapify(A,0,n); 
 	} 
} 
int main()
{
	int n;
	cout<<"\nEnter the number of elements in the array: ";
	cin>>n;
	int A[n];
	cout<<"\nEnter the elements of array: ";
	for(int i=0;i<n;i++)
		cin>>A[i];
	Heap_Sort(A,n);
	cout<<"\nArray after heap sort: ";
	for(int i=0;i<n;i++)
		cout<<A[i]<<" ";
	return 0;
}
