#include <stdio.h>

idade(n){
	if (n>=5 && n<=7){
		printf("Infatil A");
	} 
	else if(n>=8 && n<=10){
		printf("Infantil B");
	}
	else if(n>=11 && n<=13){
		printf("Juvenil A");
	}
	else if(n>=14 && n<=17){
		printf("Juvenil B");
	}
	else if(n>18){
		printf("Adulto");
	}
	else{
		printf("Fora da idade");
	}
}
main(){
	int n;
	
	printf("Digite a sua idade: ");
	scanf("%d",&n);
	
	idade(n);
}
