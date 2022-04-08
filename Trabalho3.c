/* Matrícula: 201900017078
   Nome: Isac Kaik Oliveira Santos
   Data: 10/03/2020
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Imprimir matriz
printMatriz (int a[][10], int m, int n){
	int i, j;
	printf("Matriz gerada:\n\n");
	for (i=0;i<m;i++){
		for(j=0;j<n;j++)
			printf("%d \t", a[i][j]);
		printf("\n");
	}
} //Fim da função

//Divisores de 4 e 6
q4e6 (int a[][10], int m, int n, int *q4, int *q6){
	int i,j;
	*q4=0;
	*q6=0;
	for (i=0;i<m;i++)
		for(j=0;j<n;j++){
			if (a[i][j]%4==0)
			*q4+=1;
			if (a[i][j]%6==0)
			*q6+=1;
		}
} //Fim da função

//Maior e menor valor da matriz
maior_menor (int a[][10], int m, int n, int *menor, int *maior){
	int i, j;
	for (i=0;i<m;i++)
		for(j=0;j<n;j++){
			if(i==0 && j==0)
			*menor=a[0][0];
			if(a[i][j]<*menor)
			*menor=a[i][j];
		}
	
	for (i=0;i<m;i++)
		for(j=0;j<n;j++){
			if(i==0 && j==0)
			*maior=a[0][0];
			if(a[i][j]>*maior)
			*maior=a[i][j];
		}
} //Fim da função

//Qt de valores maiores que a media
mai_med (int a[][10], int m, int n, int *sm, float *med, int *qmai){
	int i, j;
	*sm=0;
	*med=0;
	*qmai=0;
	for (i=0;i<m;i++)
		for(j=0;j<n;j++)
			*sm+=a[i][j];
	
	*med= (float) *sm/(n*m);
	
		
	for (i=0;i<m;i++)
		for(j=0;j<n;j++)
			if (a[i][j]>*med)
			*qmai+=1;
} //Fim da função

//Potencializar valores das colunas impares e por num vetor
vetor_col_impar (int a[][10], int m, int n){
	int i, j, k=0;
	int vetor[50];
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			if(j%2!=0){
				vetor[k]=a[i][j]*a[i][j];
				k++;
			}
		}
	}
	printf("Valores das colunas impares ao quadrado: ");
	for(i=0;i<k;i++)
		printf("%d  ", vetor[i]);
} //Fim da função
int main (){
	int ma[10][10];
	int i, j, m, k=0, n, qt4, qt6, menor, maior, qmai, sm;
	float med;
	printf("Digite o numero de linhas e colunas: \n");
	scanf("%d %d", &m, &n);
	srand(time(NULL));
	printf("\n");
	for(i=0;i<m;i++)
		for (j=0;j<n;j++)
			ma[i][j]=rand()%20+1;	
			
	printMatriz (ma,m,n); //item a)
	printf("\n");
	q4e6 (ma, m, n, &qt4, &qt6); //item b)
	printf("Quantidade de divisiveis por 4: %d\n", qt4);
	printf("Quantidade de divisiveis por 6: %d\n\n", qt6);
	
	maior_menor (ma, m, n, &menor, &maior); //item c)
	printf("Maior valor da matriz: %d\n", maior);
	printf("Menor valor da matriz: %d\n\n", menor);
	
	mai_med (ma, m, n, &sm, &med, &qmai); //item d)
	printf("Media da matriz: %.1f\n", med);
	printf("Valores maiores que a media da matriz: %d\n\n", qmai);
	
	vetor_col_impar (ma, m, n); //item e)
	
	printf("\n\n");
	printf("Aluno: Isac Kaik Oliveira Santos.\n");
	printf("Curso: Ciencia da Computacao.\n");
	printf("Turma: 04");
	
	return 0;
}
