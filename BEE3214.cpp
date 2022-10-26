#include<iostream>

using namespace std;

int main(){
	
	int a , b , c, total, compra=0;
	
	cin >> a >> b >> c ;
	
	total = a + b;
	
	while(total > 0 && total >= c){
		total = (total - c) + 1;
		compra ++;
	}
	
	cout << compra << "\n";
	
return 0 ;
}
