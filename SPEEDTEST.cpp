#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int times; cin >> times; while (times--){
	    float a, b, x, y; 
	    cin >> a >> b >> x >> y; 
	    
	    if ((a/x) > (b/y)){
	        cout << "ALICE" << endl;
	    }
	    
	    else if ((b/y) > (a/x)){
	        cout << "BOB" << endl;
	    }
	    
	    else{
	        cout << "EQUAL" << endl;
	    }

	    
	}
	return 0;
}
