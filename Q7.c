#include <stdio.h>
int contador, div,n,res;
int primo(n){
	for (contador=1;contador<=n;contador++){
		if (n%contador==0){
			div=+1;
		}
		
	}
	if (div<2){
		printf("0");
		printf("E primo");
		return 0;
	}
	else{
		printf("1");
		printf("Nao e primo");
		return 1;
	}
	
}
main(){
	printf("Digite o numero: ");
	scanf("%d",&n);
	
	primo(n);
}
