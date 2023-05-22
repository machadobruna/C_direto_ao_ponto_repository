#include <stdio.h>
#include <stdlib.h>
int main(void)
{  
  // -----Declarando variáveis e fazendo entrada de dados com scanf()-----
    
  int num; // uma variável int é do tipo inteiro
  float nota; //uma variável float é do tipo que possui casas decimais
  char conceito; // o tipo char armazena uma letra ou caracter   
  
  printf("Digite o numero do aluno: ");
  scanf("%d",&num); //entrada de dados com scanf
  
  printf("Digite a nota do aluno: ");
  scanf("%f",&nota);
  
  printf("Digite o conceito do aluno (A, B, C, D, ou E): ");
  setbuf(stdin,NULL);//limpando o buffer do teclado 
  scanf("%c",&conceito);
  
  //para exibir dados na tela usamos o comando printf
  printf("\n------------- Mostrando os dados das variaveis -------------\n");
  printf("Numero = %d \n",num);
  printf("Nota = %.2f \n",nota);//mostrando a nota com duas casas decimais
  printf("Conceito = %c \n", conceito);
     
  system("pause"); //pausa da tela - somente para Windows
  return 0;
}


