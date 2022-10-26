#include<stdio.h>
#include<string.h>
#define MAX 1000
typedef char dado;

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
         if (s > 0) {
            s--;
         } 
            
         
    }


};

int main() {

    Pilha  p;
    char exp[1000];
    //int nE;
    
    //scanf("%d", &nE);
    
    while (scanf("%s", exp)!= EOF){
    	
    	
    
    	int t = strlen(exp);
    	
    	for(int i=0; i<t; i++){
    		if(exp[i] == '(' ){
    			p.push(exp[i]);
			}else if(exp[i] ==')'){
				if(p.size() == 0){
					p.s++;	
				}else{
					p.pop();
		    	}
			}
		}
		
		if(p.empty()){
			printf("correct\n");
		}else{
			while(!p.empty()){
				p.pop();
			}
			printf("incorrect\n");
		}	
	}

    

    return 0;
}
