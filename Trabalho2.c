/* Matrícula: 201900017078
   Nome: Isac Kaik Oliveira Santos
   Data: 17/02/2020
*/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int m, n, i, k=0;				//n para turma 1, m para turma 2
	float x[50], s[50], tap[50];		//x[i] para t1, s[i] para t2
	float media1, media2;
	printf("Quantos alunos na t1? \n");
	scanf("%d", &n);
	printf("Quantos alunos na t2? \n");
	scanf("%d", &m);
	printf("\n\n");
	srand(time(NULL));
	
	printf("Notas da t1: |");
	for (i=0;i<n;i++){
		x[i]=(rand()%101) / 10.0;
		printf("%.1f| ", x[i]);
		media1+=x[i]/n;
		if (x[i]>=5){
			tap[k] = x[i];
			k++;
		}
	}
	printf("\nMedia da t1: %.1f\n\n", media1);
	
	
	printf("Notas da t2: |");
	for (i=0;i<m;i++){
		s[i]=(rand()%101) / 10.0;
		printf("%.1f| ", s[i]);
		media2+=s[i]/m;
		if (s[i]>=5){
			tap[k] = s[i];
			k++;
		}
	}
	printf("\nMedia da t2: %.1f", media2);
	
	printf("\n\nAprovados: |");
	for (i=0;i<k;i++)
	printf("%.1f|", tap[i]);
	
	printf("\n\nAluno: Isac Kaik Oliveira Santos\n");
	printf("Curso: Ciencia da Computacao\n");
	printf("Turma: 4\n");
}
	
