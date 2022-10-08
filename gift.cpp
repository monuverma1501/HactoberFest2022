/*
ID: pradd1
PROG: gift1
LANG: C++
*/
#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>
#include <fstream>
#include <utility>
using namespace std;

int main(){
	ofstream fout ("gift1.out");
    ifstream fin ("gift1.in");
	int n;
	fin >> n;
	map<string, int> persons;
	vector<string> ps(n);
	vector< pair<int, int> > data(n);
	for (int i=0;i<n;++i){
		string t;
		fin >> t;
		persons[t] = i;
		ps[i] = t;
	}
	for (int i=0;i<n;++i){
		string p;
		fin >> p;
		int t, k, left_over = 0, per_person = 0;
		fin >> t;
		fin >> k; 
		if (k&&t){
			left_over = t%k;
			per_person = t/k; 
		}
		else {
			if (t){
				left_over = t;
				per_person = 0;
			}
			else {
				left_over = 0;
				per_person = 0;
			}
		}
		data[persons[p]] = make_pair(t, data[persons[p]].second + left_over); 
		for (int a=0;a<k;++a){
			string x;
			fin >> x;

			data[persons[x]] = make_pair(data[persons[x]].first,  data[persons[x]].second + per_person);
		}
	}
	for (int i=0;i<n;++i){
		fout << ps[i] << " " << data[persons[ps[i]]].second - data[persons[ps[i]]].first << endl;
	}
	return 0;
}
