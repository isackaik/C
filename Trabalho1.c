#include <stdio.h>
int main(){
int n, janelas, portas, x;
float areapint, areapiso, areateto, areatpiso, areatteto, areatpint, lado, ladofront;
    printf("Qual o total de comodos? \n");
    scanf("%d", &n);
    x=1;
    areapint = 0;
    areapiso = 0;
    areateto = 0;
    areatpint = 0;
    areatpiso = 0;
    areatteto = 0;
    while (x<=n){
    	printf("Qual o total de janelas no comodo? \n");
    	scanf("%d", &janelas);
    	printf("Qual a quantidade de portas? \n");
        scanf("%d", &portas);
        printf("Qual o comprimento das paredes laterais? \n");
        scanf("%f", &lado);
        printf("Qual o comprimento das paredes frontais? \n\n");
        scanf("%f", &ladofront);
        areapint = (lado*2.7)*2 + (ladofront*2.7)*2 - (janelas*0.96) - (portas*1.47);
        areapiso = lado*ladofront;
        areateto = areapiso;
		printf("A area de pintura deste comodo e de = %f\n", areapint);
		printf("A area de piso deste comodo e de = %f\n", areapiso);
		printf("A area de teto desde comodo e de = %f\n\n\n", areateto);
		areatpint += areapint;
		areatpiso += areapiso;
		areatteto += areateto;
		x += 1;
	}
	printf("A area de pintura total e de = %f\n", areatpint);
	printf("A area de piso total e de = %f\n", areatpiso);
	printf("A area de teto total e de = %f\n\n", areatteto);
	printf("Aluno:Isac Kaik Oliveira Santos\n");
	printf("Curso: Ciencia da Computacao\n");
	printf("Turma: T04\n");
	return 0;
		
  }
  /* Matrícula: 20190017078
  	 Isac Kaik Oliveira Santos
  	 Data do meu dia de nascimento: 26/05/2000
  	 Data do dia de envio: 15/12/2019
  	 Turma: T04 */   
