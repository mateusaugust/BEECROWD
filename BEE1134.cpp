#include <bits/stdc++.h>

using namespace std;

int main (){
	
	int x, a=0,g=0, d=0;
	
	do{
		cin >> x;
		
		switch(x){
			case 1:
				a++;
			break;
			
			case 2:
				g++;
			break;
			
			case 3:
				d++;
			break;
			
			case 4:
				cout << "MUITO OBRIGADO" << endl;
				cout << "Alcool: " << a << endl;
				cout << "Gasolina: " << g << endl;
				cout << "Diesel: " << d << endl;
			break;
			
		}
		
	}while(x!=4);


	return 0;
}

