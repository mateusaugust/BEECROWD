#include<stdio.h>
#define MAX 100000
typedef int dado;

struct Pilha {

    dado v[MAX];
    int s;

    Pilha() {
        s = 0;
    }

    bool empty() {
        return (s == 0);
    }

    int size() {
        return s;
    }

    void push(dado e) {
        if (s >= MAX) {
            printf("Pilha cheia\n");
        } else {
            v[s++] = e;
        }
    }

    void pop() {
         if (s <= 0) {
            printf("EMPTY\n");
         } else {
            s--;
         }
    }

   void menor(){
   	
   	
   		if(empty()){
   			printf("EMPTY\n");	
		}else{
		   	int m = v[0];
   			int s = size();
   		
   			for(int i = 1; i<s; i++){
				if(m > v[i]){
					m = v[i];
				}				   	
			}
		
			printf("%d\n", m);
   	
		   }
   		
   }

};

int main() {

    Pilha p;
	char op[4];
	int r;
				
		scanf("%d",&r);
				
		for(int i=0;i<r;i++){
			scanf("%s", op);
					
			if(op[0] == 'P' && op[1] == 'U'){
				int n;
				
				scanf("%d", &n);
				p.push(n);
				
			}else if(op[0] == 'P' && op[1] == 'O'){
				p.pop();
			}else{
				p.menor();
			}
						
		}
				

    return 0;
}
