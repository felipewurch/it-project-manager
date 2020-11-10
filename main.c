#include <stdio.h>
#include <stdlib.h>

typedef struct pes {
    char nome[50];
    unsigned int dataDeNascimento;
    char email[50];
    unsigned int rg;   
    char cargo[50];
} pessoa;

typedef struct tar {
  char tituloTarefa[40];
  char descricao[150];
  float tempoEstimado;
  unsigned int tipoTarefa;
  char status[10];
} tarefa;

typedef struct proj {
  char nomeProjeto[50];
  tarefa tarefas[10];
  pessoa pessoas[5];
} projeto;


const char* boas_vindas() {
  return "Bem-vindo ao IT Project Manager \nDigite a opcao desejada: \n";
}

const char* menu() {
  return "1 - cadastro de projetos \n2 - cadastro de pessoas \n3 - cadastro de tipos de tarefa \n4 - cadastro de papeis de pessoas \n5 - cadastro de tarefas \n";
}


int main()
{
  struct proj *ptr;
  int i, n;
  int opcao;

printf("%s", boas_vindas());
printf("%s", menu());
scanf("%d", &opcao);

switch (opcao)
{
case 1:
  /* implementar cadastro de projetos*/
  break;
case 2:
/*implementar cadastro de pessoas*/
  break;
case 3:
/*implementar cadastro de tipos de tarefa*/  
  break;
case 4:
/*implementar cadastro de papeis de pessoas*/
  break;
case 5:
/*implementar cadastro de tarefas*/
  break;  
default:
  printf("Opção inválida\n");
  break;
}

  
   /*printf("Enter the number of projects: ");
   scanf("%d", &n);

  
   ptr = (struct proj*) malloc(n * sizeof(struct proj));

   for(i = 0; i < n; ++i)
   {
       printf("Enter project name: ");
       scanf("%d ", &(ptr+i)->nomeProjeto);
       
       
   }
*/

return 0;
}
