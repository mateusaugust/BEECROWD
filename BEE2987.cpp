#include <bits/stdc++.h>

using namespace std;

int main (){

	char a[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R'
	, 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
	
	char b;
	
	cin >> b;
	
	for(int i = 0; i<26; i++){
		if(b == a[i]){
			cout << i+1 << endl;
			break;
		}
	}
	

	return 0;
}

