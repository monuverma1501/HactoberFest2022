/*
ID: pradd1
PROG: beads
LANG: C++
*/
#include <iostream>
#include <fstream>
#include <string>
 
using namespace std;
 
int main() {
 ofstream fout ("beads.out");
 ifstream fin ("beads.in");
 int N;
 fin >> N;
 string beads;
 fin >> beads;
  
 if(beads.length() != N)
  // either this or we could throw a fatal error
  N = beads.length();
  
 // brute-force all possibilities
 int cur = 0, max = 0;
 char color;
 bool switched;
  
 for(int i = 0; i < N; ++i){
  // complexity O(n)
  cur = 0;
  switched = false;
  color = 'w';
  for(int j = 0; j < N; ++j){
   // complexity O(n^2)
   const char cur_c = beads[(i + j) % N];
   // always take white beads
   if(cur_c != 'w'){
    // first non-white
    if(color == 'w'){
     color = cur_c;
    }
    else if(color != cur_c){
     if(switched)
      break;
     else{
      color = cur_c;
      switched = true;
     }
    }
   }
   ++cur;
  }
  if(cur > max)
   max = cur;
 }
  
 fout << max << endl;
 return 0;
}
