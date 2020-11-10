#include <stdio.h>
#include <stdlib.h>


typedef struct papeis {
    char papel[40];
}papeisPessoas;

typedef struct pes {
    char nome[50];
    unsigned int dataDeNascimento;
    char email[50];
    unsigned int rg; 
    papeisPessoas papel;  
} pessoa;

typedef struct titar {
  char tipoTarefa [15];
}tipoTarefa;

typedef struct tar {
  char tituloTarefa[40];
  char descricao[150];
  float tempoEstimado;
  tipoTarefa tpTarefa;
  char status[10];
} tarefa;

typedef struct proj {
  char nomeProjeto[50];
  tarefa tarefas[2];
  pessoa pessoas[2];
} projeto;


const char* boas_vindas() {
  return "Bem-vindo ao IT Project Manager \n";
}

const char* menu() {
  return "Digite a opcaoMenu desejada: \n1 - cadastro de projetos \n2 - cadastro de pessoas \n3 - cadastro de tipos de tarefa \n4 - cadastro de papeis de pessoas \n5 - cadastro de tarefas \n";
}


int main()
{
  struct proj *ptr;
  int i, n;
  int opcaoMenu, opcaoContinuar;

printf("%s", boas_vindas());
do
{
printf("%s", menu());
scanf("%d", &opcaoMenu);

switch (opcaoMenu)
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

printf("Burndown do projeto: \n");
/* Criar funcao que exiba a situacao atual dos projetos cadastrados */

printf("Deseja continuar o programa ? digite 1 para continuar");
scanf("%d", &opcaoContinuar);

  }while (opcaoContinuar==1);
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
