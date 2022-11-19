#include <bits/stdc++.h>

using namespace std;

int loop (int x, int y){
	
	int soma=0;
	
	for(int i = x-1; i>y ; i--){
    		if(i%2 != 0){
    			soma = soma + i;
			}
		}
		
	return soma;		
}

int main(){

    int x, y;

    cin >> x >> y;

    if(x>y){
    	cout << loop(x,y) << endl;
    	
	}else if(y>x){
		cout << loop(y,x) << endl;	
	}
	
    return 0;
}
