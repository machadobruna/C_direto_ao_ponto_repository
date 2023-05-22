#include <stdio.h>
#include <stdlib.h>
int main(void)
{
  // Declarando variáveis e atribuindo valores
  
  int num = 100; // uma variável int é do tipo inteiro
  float valor = 7.290; //uma variável float é do tipo que possui casas decimais
  char letra = 'z'; // o tipo char armazena uma letra ou caracter 
  char frase [35] = "Estamos programando em Linguagem C";
  double n2 = 1.12345987; //uma variável do tipo double possui precisão dupla (armazena mais casas decimais)
  
  //para exibir dados na tela usamos o comando printf
  printf("------------- Mostrando os dados das variaveis -------------\n");
  printf("Valor da variavel inteira num = %d \n",num);
  printf("Valor da variavel do tipo float valor = %f \n",valor);
  printf("Caracter armazenado na variavel do tipo char letra = %c \n", letra);
  printf("Conteudo armazenado na variavel char frase = %s \n",frase);
  printf("Numero armazenado na variavel double n2 = %lf \n",n2);
   
  system("pause"); //pausa da tela - somente para Windows
  return 0;
}


