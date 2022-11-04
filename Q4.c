#include <stdio.h>
int exp;
idade(ano,mes,dias){
	exp= ano*365 + mes*30 +dias;
	printf("%d",exp);
}
main(){
	int ano,mes,dias;
	
	printf("Digite na sequencia: ano, mes, dias: ");
	scanf("%d%d%d",&ano,&mes,&dias);
	
	idade(ano,mes,dias);
}
