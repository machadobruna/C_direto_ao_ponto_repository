#include<stdio.h>
int main(void)
{
	int matricula; //variável do tipo inteiro
	float nota;	//variável para armazenar valores reais
		
	// char é um tipo de dado que recebe um único caracter do teclado
	char turma;	
	
	//char variavel[quantidade] é uma cadeia de caracteres (string)
	//uma string armazena vários caracteres
	char disciplina[10] = "Geografia"; //atrbuindo valor a uma string
	
	printf("Disciplina: %s\n",disciplina);
	
	printf("Informe o turma do aluno: ");
	scanf("%c",&turma);	//recebendo a variável turma	
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
