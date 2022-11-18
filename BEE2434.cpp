#include <iostream>

using namespace std;

int main() {

    int operacao, saldoIni, menorSaldo, movi;
    
    cin >> operacao >> saldoIni;
    menorSaldo = saldoIni;

	for(int i = 0; i<operacao;i++){
		cin >> movi;
		
		saldoIni = saldoIni + movi;
		
		if(saldoIni < menorSaldo){
			menorSaldo = saldoIni;
		}	
		
	}
	
	cout << menorSaldo << endl;

    return 0;
}
