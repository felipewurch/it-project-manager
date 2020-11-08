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


int main()
{


  struct proj *ptr;
   int i, n;

   printf("Enter the number of projects: ");
   scanf("%d", &n);

  
   ptr = (struct proj*) malloc(n * sizeof(struct proj));

   for(i = 0; i < n; ++i)
   {
       printf("Enter project name: ");
       scanf("%d ", &(ptr+i)->nomeProjeto);
       
       
   }


return 0;
}
