#include<stdio.h>
#include<string.h>

int vet[10];

int busca(int n1);

int main(){
	
	int i,num,pos1;
	
	
	for(i=0;i<10;i++){
		printf("\nInsira um numero no vetor:");
		scanf("%d",&vet[i]);
	}
	
	printf("\n");
	
	printf("Qual o numero voce deseja procurar no vetor? R= ");
	scanf("%d",&num);
	
	pos1=busca(num);

	printf("\nO numero esta na posicao %d", pos1);
	
	return 0;
}

int busca(int n1){
	int i,pos;
	
	for(i=0;i<10;i++){
		if(vet[i]==n1){
			pos=i;
		}
	}
	
	return(pos);	
}
