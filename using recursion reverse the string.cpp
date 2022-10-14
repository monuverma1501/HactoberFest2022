#include<iostream>
using namespace std;

void reverseString(string &a,int start,int end){
if(start>end){
    return;
}
if(start<=end){
swap(a[start],a[end]);
start++;end--;
}
reverseString(a,start,end);

}



int main(){

string a;
cin>>a;

reverseString(a,0,a.size()-1);
cout<<a<<endl;

return 0;

}
