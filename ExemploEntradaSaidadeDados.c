#include<stdio.h>
int main(void)
{
	int matricula; //vari�vel do tipo inteiro
	float nota;	//vari�vel para armazenar valores reais
		
	// char � um tipo de dado que recebe um �nico caracter do teclado
	char turma;	
	
	//char variavel[quantidade] � uma cadeia de caracteres (string)
	//uma string armazena v�rios caracteres
	char disciplina[10] = "Geografia"; //atrbuindo valor a uma string
	
	printf("Disciplina: %s\n",disciplina);
	
	printf("Informe o turma do aluno: ");
	scanf("%c",&turma);	//recebendo a vari�vel turma	
	printf("Turma: %c\n",turma);	
	
	printf("Informe a matricula do aluno: ");
	scanf("%d",&matricula);	
	printf("Numero de matricula %d\n",matricula);
	
	printf("Digite a nota do aluno: ");
	scanf("%f",&nota);		
	//formatando a nota com duas casas decimais
	printf("Nota: %.2f\n",nota);
	
	return 0;	
}
