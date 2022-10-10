// Author: Sayantani Saha
/*
Input:
A[] = {11,12,13,14,15}, k=1
Output:
6 
Explanation: Here digit 1 appears in the whole array 6 times.
*/



int num(int a[], int n, int k)
{
     //add code here.
     /*here we are using a for loop and a while loop even then the
     time complexity remains O(n) because while loop executes negligible
     no. of times in comparision to for loop*/
     int count =0;
     for(int i=0;i<n;i++){
         int x=a[i];
         while(x>0){
             int digit=x%10;
             if(digit==k){
                 count++;
             }
             x=x/10;
         }
     }
     return count;
}
