#include <stdio.h>

par(n){
	if (n%2==0){
		printf("E par");
	} 
	else{
		printf("Impar");
	}
}
main(){
	int n;
	
	printf("Digite um numero: ");
	scanf("%d",&n);
	
	par(n);
}
