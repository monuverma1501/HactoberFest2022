#include<iostream> 

 #include<climits> 

 using namespace std; 

  

 int main() { 

     int n;  // create a variable
 
     cin >> n;  // taking an input from user

  

     int arr[n];  // create an array with size n

     for (int i = 0; i < n; i++){ 

         cin >> arr[i]; 

     }  // taking an array input using for loop

     int currentSum = 0;   // declare a varaible with currentsum=0;
     int maxSum = INT_MIN;  // declare a maxSum with Min value.
     for(int i = 0; i < n; i++) { 
         currentSum += arr[i]; 
         if(currentSum < 0) { 
             currentSum = 0; 
         } 

         maxSum = max(maxSum, currentSum); 
     } 

     cout << maxSum <<endl; 

     return 0; 
  
  

 }
