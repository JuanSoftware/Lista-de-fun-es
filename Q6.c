#include <stdio.h>
float ideal;
pesoideal(float h, int sexo){
	
	if (sexo==1){
		ideal= (72.6*h)-58;
	}
	else if(sexo==2){
		ideal =(62.1*h)-44.7;
	}
	else{
		printf("Sexo invalido.");
	}
	printf("%0.2f",ideal);
}
main(){
	float h;
	int sexo;
	printf("Digite sua altura: ");
	scanf("%f",&h);
	printf("Digite o seu sexo 1 para masculino e 2 para feminino: ");
	scanf("%d",&sexo);
	

	pesoideal(h,sexo);
}
