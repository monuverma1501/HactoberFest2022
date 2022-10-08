/*
ID: pradd1
PROG: dualpal
LANG: C++
*/
#include <iostream>
#include <fstream>
#include <algorithm>
#include <sstream>
#include <string>

using namespace std;

bool is_palindrome(string x, int b, int e){
	if (b==e)
		return true;
	if (b-e==1)
		return x[b]==x[e];
	if (x[b]==x[e])
		return is_palindrome(x, b+1, e-1);
	return false;
}
string to_base(int num, int base){
	ostringstream s;
	int a= num;
	char letters[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
	while (a>=1){
		if (a%base>=10)
			s << letters[(a%base)%10];
		else
			s << a%base;
		a = a/base;

	}
	return s.str();
}

int main(){
	ifstream fin ("dualpal.in");
	ofstream fout ("dualpal.out");
	int n;
	fin >> n;
	int s;
	fin >> s;

	int x = s+1;
	while (n>0){
		int turns = 0;
		for (int i=2;i<11;++i){
			string v = to_base(x, i);
			reverse(v.begin(), v.end());

			if (is_palindrome(v, 0, v.size()-1))
				turns++;
			if (turns>=2)
				break;
		}
		if (turns>=2){
			fout << x << endl; 
			--n;
		}
		x++;
	}
	return 0;
}
