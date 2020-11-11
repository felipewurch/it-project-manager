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
} pessoas;

typedef struct titar {
  char tarefa [15];
}tipoTarefas;

typedef struct tar {
  char tituloTarefa[40];
  char descricao[150];
  float tempoEstimado;
  tipoTarefas tpTarefa;
  char status[10];
} tarefas;

typedef struct proj {
  char nomeProjeto[50];
  tarefas tarefas[2]; //Nao entendi como relacioner esse com as tarefas, mas criei um int
  int pessoasProjeto;	//Caso formos mexer nisso, deixei aqui mesmo assim.
  int qtdTarefasProjeto; 
  pessoas pessoas[2]; //Nao entendi como relacioner esse com as tarefas, mas criei um int
   
} projetos;


const char* boas_vindas() {
  return "Bem-vindo ao IT Project Manager \n";
}

const char* menu() {
  return "Digite a opcao desejada: \n1 - cadastro de projetos \n2 - cadastro de pessoas \n3 - cadastro de tipos de tarefa \n4 - cadastro de papeis de pessoas \n5 - cadastro de tarefas \n";
}


int main()
{
  int i, n;
  int opcaoMenu, opcaoContinuar;
  int qtdPessoas, contador;
  int qtdTarefas,qtdTipoTarefas;
  int qtdProjetos, contador2, contadorTarefas = 0;
  
  pessoas *pessoa;
  tarefas *tarefa;
  tipoTarefas *tipoTarefa;
  projetos *projeto;

printf("%s", boas_vindas());
do
{
printf("%s", menu());
scanf("%d", &opcaoMenu);

switch (opcaoMenu)
{
case 1:
  /* implementar cadastro de projetos*/
  
  printf("Digite o numero de projetos que deseja criar:  \n");
  scanf("%d", &qtdProjetos);
  
  projeto = (struct projetos*) malloc(qtdProjetos * sizeof(projetos));
  
  for(contador2 = 0; i < qtdProjetos; contador2++){
  	
  	printf("Digite o nome do projeto %d: \n", contador2+1);
  	scanf("%s", (projeto+contador2)-> nomeProjeto);
  	
  	printf("Digite a quantidade de pessoas no projeto: \n");
  	scanf("%d", (projeto+contador2)-> pessoasProjeto);
  	
  	printf("Digite a quantidade de tarefas do projeto: \n");
  	scanf("%d", (projeto+contador2)-> qtdTarefasProjeto);
  	
  }
  
  break;
case 2:
  printf("Digite a quantidade de pessoas que deseja cadastrar: \n");
  scanf("%d", &qtdPessoas);
  pessoa = (struct pessoas*) malloc(qtdPessoas * sizeof(pessoas));
  for(contador = 0; contador < qtdPessoas; ++contador)
  {
    printf("Digite o nome da pessoa %d: \n", contador+1);
    scanf("%s",(pessoa+contador)->nome);
    printf("Digite a data de nascimento no formato ddMMaaaa: \n");
    scanf("%d",&(pessoa+contador)->dataDeNascimento);
    printf("Digite o e-mail: \n ");
    scanf("%s",(pessoa+contador)->email);
    printf("Digite o numero de RG: \n");
    scanf("%d",&(pessoa+contador)->rg);
    printf("Digite o papel dessa pessoa no projeto: \n");
    scanf("%s",(pessoa+contador)->papel.papel);
    printf("Dados inseridos!\n");
  }
  break;
case 3:
/*implementar cadastro de tipos de tarefa*/ 
printf("Digite a quantidade de tipos de tarefas: \n");
  scanf("%d", &qtdTipoTarefas);
  tipoTarefa = (struct tipoTarefas*) malloc(qtdTipoTarefas * sizeof(tipoTarefas));
  for(contador = 0; contador < qtdTipoTarefas; ++contador)
  {
    printf("Digite o tipo de tarefa %d: \n", contador+1);
    scanf("%s",(tipoTarefa+contador)->tarefa);
    printf("Dados inseridos!\n");
  } 
  break;
case 4:
/*implementar cadastro de papeis de pessoas*/
  break;
case 5:
/*implementar cadastro de tarefas*/
printf("Digite a quantidade de tarefas que deseja cadastrar: \n");
  scanf("%d", &qtdTarefas);
  tarefa = (struct tarefas*) malloc(qtdTarefas * sizeof(tarefas));
  for(contador = 0; contador < qtdTarefas; ++contador)
  {
    printf("Digite o titulo da tarefa %d: \n", contador+1);
    scanf("%s",(tarefa+contador)->tituloTarefa);
    printf("Digite a descrição da tarefa: \n");
    scanf("%s",(tarefa+contador)->descricao);
    printf("Digite tempo estimado: \n ");
    scanf("%f",&(tarefa+contador)->tempoEstimado);
    printf("Digite o status da tarefa %d: \n", contador+1);
    scanf("%s",(tarefa+contador)->status);
    printf("Dados inseridos!\n");
  }
  break;  
default:
  printf("Opcao invalida\n");
  break;
}

printf("Burndown do projeto: \n");
/* Criar funcao que exiba a situacao atual dos projetos cadastrados */

printf("Deseja continuar o programa ? digite 1 para continuar \n");
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
