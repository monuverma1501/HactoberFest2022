#include <iostream>
#include <map>
#include <vector>
using namespace std;

bool is_leap_year(int year){
	if (!year%400)
		return true;
	else if(year%100)
		return false;

	if (year%4)
		return true;
}
int main(int argc, char const *argv[])
{
	int n;
	cin >> n;
	vector<int> holder(7);
	int prefix = 0;
	for (int i=1900;i<1900+n;i++){
		int odd_days[] = {3, 3, 2, 3, 2, 3, 3, 2, 3, 2, 3};
		int feb = is_leap_year(i) ? 1:0;
		int count = prefix + feb;
		for (int j=0;j<9;j++){
			count = (count + odd_days[j])%7;
		}
		count = (count + 5)%7;
		holder[count]++;
	}
	for (int a = 0; a<7; ++a){
		cout << holder[a] << " ";
	}
	cout <<endl;
	return 0;
}
