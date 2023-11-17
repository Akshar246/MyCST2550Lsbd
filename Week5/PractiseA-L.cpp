#include <iostream>
using namespace std;

    int main() {
      // Array creation - length 4
        int a[4];

	// a[i] = i indicating from 0 to 3
        for(int i = 0; i < 4; i++ ) {
	  a[i] = i;
	}

	
	for(int i = 0; i < 4; i++ ){
	  cout << a[i] << "\n";
	}

	
        return 0;

    }
