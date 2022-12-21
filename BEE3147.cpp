#include <bits/stdc++.h>

using namespace std;

int main (){
	
	int h,e,a,o,w,x;
	
	cin >> h >> e >> a >> o >> w >> x;
	
	h = h+e+a+x+1;
	o = o+w;
	
	if(h>o){
		cout << "Middle-earth is safe." << endl;
	}else{
		cout << "Sauron has returned." << endl;
	}


	return 0;
}

