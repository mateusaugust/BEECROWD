#include <bits/stdc++.h>

using namespace std;

int main (){

     int n,p=1;
   
    cin >> n;

    for(int a=1 ; a<=n ; a++){
    	p = p*a;
	}
        

    cout << p << endl;

	return 0;
}

