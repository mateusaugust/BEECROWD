#include<iostream>

using namespace std;

void imprimeApertos(int apertos){
	if(apertos >= 0){
		cout << apertos << endl;
	}
}

int main(){
	
	int apertos = 0  , andares, inicio, meta, cima, baixo;
	
	cin >> andares >> inicio >> meta >> cima >> baixo;
	
	while (inicio != meta){
		
		if(cima%2 == 0 && baixo%2 == 0 ){
			cout << "use the stairs" << endl;
			apertos = -1;
			break;
		}else if((inicio>meta && baixo == 0) || (inicio<meta && cima==0)){
			cout << "use the stairs" << endl;
			apertos = -1;
			break;
		}else if(inicio < meta){
			inicio = inicio + cima;
			apertos++;
		}else if(inicio> meta){
			inicio = inicio - baixo;
			apertos++;
		}
		 
	}
	
	imprimeApertos(apertos);
	
	
return 0;
}
