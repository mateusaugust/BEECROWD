#include<iostream>
#include<math.h>

using namespace std;

bool trianguloRetangulo (int a, int b, int c) {
    return (pow(a, 2) + pow(b, 2) == pow(c,2)) ? true : false;
}

int main(){
	
	int a=0, b=0 ,c=0;
	
	cin >> a  >> b >> c;
	
	if(a+b>c && a+c>b && b+c>a){
		
		if(a == b && a==c){
			cout << "Valido-Equilatero"<<"\n";
		}else if(a!=b && a!=c && b!=c){
			cout << "Valido-Escaleno"<<"\n";
		}else{
			cout << "Valido-Isoceles"<<"\n";
		}
		
		if(trianguloRetangulo(a, b, c) || trianguloRetangulo (a, c, b) || trianguloRetangulo (b, c, a)){
			cout << "Retangulo: S"<<"\n"; 
		}else{
			cout << "Retangulo: N"<<"\n";
		}
		
	}else{
		cout << "Invalido"<<"\n";
	}
	
return 0;
}
