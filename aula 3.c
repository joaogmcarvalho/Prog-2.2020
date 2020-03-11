#include<stdio.h>
#include<string.h>

int soma(int x, int y);

int main(){
	
	int n1, n2, result;
	
	printf("Insira o numero 1: ");
	scanf("%d", &n1);
	
	printf("Insira o numero 1: ");
	scanf("%d", &n2);
	
	result=soma(n1,n2);
	
	printf("A soma eh: %d",result);
	
	return 0;
}

int  soma(int x, int y){
	
	int i, inteiro=0;
	
	if(x<y){
		for(i=x+1;i<y;i++){
		inteiro=i+inteiro;
		}
	}
	if(x>y){
		for(i=x-1;i>y;i--){
		inteiro=i+inteiro;
		}
	}
	
	return inteiro;
}
