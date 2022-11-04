#include <stdio.h>
#include <math.h>
int da,db;
float dm;
distancia(x1,x2,y1,y2){
	da= (x2-x1)*(x2-x1);
	db= (y2-y1)*(y2-y1);
	dm= sqrt(da+db);
	printf("%0.2f",dm);
	
	
}
main(){
	int x1,y1,x2,y2;
	
	printf("Digite as coordenadas de a ");
	scanf("%d%d",&x1,&y1);
	printf("Digite as coordenadas de b ");
	scanf("%d%d",&x2,&y2);
	
	distancia(x1,x2,y1,y2);
}
