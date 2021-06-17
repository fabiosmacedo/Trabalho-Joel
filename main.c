#include <stdio.h>


int opcaoEscolha;

/* Jogador */
typedef struct 
  {
    int numeroCamisa;
    char nomeJogador[60];
  }Jogador;

/*Escalacação */
  struct Escalacao
  {
    int numeroEscalacao;
   
  } escalacao;
  

void cabecalho()
{
  printf("*********************************\n");
  printf("* Sistema de escalação de Times *\n");
  printf("*********************************\n\n"); 

  printf("*********************************\n");
  printf("* Desenvolvido por:             *\n");
  printf("*                               *\n");
  printf("*********************************\n\n");

  
  printf("*********************************\n");
  printf("* Escolha uma opção do sistema  *\n");
  printf("* 1 - Cadastrar escalação       *\n");
  printf("* 2 - Visualizar escalações     *\n");
  printf("* 3 - Sair do sistema           *\n");
  printf("*********************************\n\n"); 

  printf("Insira uma opção:  ");
  scanf("%d", &opcaoEscolha);
}

void opcaoUm(){

  

 for(int camisa=1; camisa<=3; camisa++)
    {
    // pega o nome do jogador
    Jogador jogador;
      printf("Camisa - %d \n Nome do Jogador: ", camisa );
      scanf("%s", jogador.nomeJogador);
    // pega o número da camisa
    //  jogador.numero_camisa = i;

    //  // strcpy(jogador.nome, "jogador - " );
    //  jogador.numeroCamisa = camisa;
    //  empilharEscalacao ( &escalacao, jogador );
    }
    // printf("%s", jogador.nomeJogador);
 


}


int main(void) {

  cabecalho();

 VALIDAR:
  if (opcaoEscolha == 1){
    opcaoUm();

  } else if (opcaoEscolha == 2){
    printf("%d", opcaoEscolha);

  } else if (opcaoEscolha == 3){
    printf("\n\n*********************************\n");
    printf("*        Saindo do sistema      *\n");
    printf("*********************************\n\n"); 

  return (0) ;

    printf("%d", opcaoEscolha);

  } else{
    printf("Insira uma opção valida:  ");
    scanf("%d", &opcaoEscolha);
    goto VALIDAR;
  }
 
  return 0;
}