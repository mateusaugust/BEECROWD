#include<iostream>

using namespace std;

int main(){
	
	int nCase,nFilter, sizeFilter, total;
	
	cin >> nCase;
	
	for(int i = 0; i<nCase; i++){
		cin >> nFilter;
		
		for(int y = 1; y<=nFilter; y++){
			cin >> sizeFilter;
			
			if(y==nFilter){
				total = total+sizeFilter;
			}else{
				total = total+(sizeFilter-1);
			}
		}	
		
		cout << total << '\n';
		
		total =0;
	}
	
	return 0;
}
