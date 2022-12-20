#include <bits/stdc++.h>


using namespace std;

int main (){

	string m;
	
	cin >> m; 
	
	for(int i = 0; i<m.size(); i ++){
		if(m[i] != '.' && m[i] != '-'){
			cout << m[i] ;
		}else{
			cout << endl;
		}
	}

	cout << endl;
	
	return 0;
}

