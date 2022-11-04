#include <stdio.h>

maior(n,n2){
	if (n>n2){
		printf("%d",n);
	} 
	else{
		printf("%d",n2);
	}
}
main(){
	int n,n2;
	
	printf("Digite dois numeros: ");
	scanf("%d%d",&n,&n2);
	
	maior(n,n2);
}
