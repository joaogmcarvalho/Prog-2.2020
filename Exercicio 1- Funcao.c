#include<stdio.h>
#include<string.h>

int soma( int a, int b);

int main(){
	
	int n1,n2,resultado;
	
	printf("Insira o valor de n1:");
	scanf("%d", &n1);
	printf("Insira o valor de n2:");
	scanf("%d", &n2);
	
	resultado=soma(n1,n2);
	
	printf("O resultado da soma eh: %d", resultado);
	
	return 0;
}

int soma( int a, int b){
	
	return(a+b);
}
