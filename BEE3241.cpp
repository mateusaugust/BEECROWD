#include<stdio.h>
#include<stdlib.h>


int main(){
	int test, a2,b2, p=0;
	
	char operacao[9],a[9] , b[9] ;
	
	scanf("%d", &test);
	
	for(int i = 0; i<test; i++){
	
		scanf("%9s", &operacao);
		
		for(int y = 0; y<9; y++){
			
			if(operacao[y] == '='){
				printf("skipped\n");
				
			}else if(operacao[y] == '+'){
				
				for(int n = y-1; n>=0;n--){
					a[n] = operacao[n];
				}
				
				for(int m  = y+1; m<=8;m++){
					if(operacao[m]!='\0'){
						b[p] = operacao[m];	
						p++;	
					}else{
						b[p] = NULL;
						p++;
					}	
				}
				
				a2 = atoi(a);
				b2 = atoi(b);
					
				printf("%d\n",a2+b2);
				
				a2 = NULL;
				b2 = NULL;
				p=0;
				
				for(int n = 0; n<9;n++){
					a[n] = NULL;
					b[n] = NULL;
				}	
			}	
		}
		
	}
	
	return 0;
}
