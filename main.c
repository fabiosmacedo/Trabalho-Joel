#include <stdio.h>




/* Funções */

void cabecalho()
{
  printf("*********************************\n");
  printf("* Sistema de escalação de Times *\n");
  printf("*********************************\n\n"); 

  printf("*********************************\n");
  printf("* Desenvolvido por:             *\n");
  printf("* Fulano                        *\n");
  printf("* Beltrano                      *\n");
  printf("*********************************\n\n"); 

}


void mostrarSelecao()
{
  printf("******************************\n");
  printf("* Escalação 1234 \n");
  printf("******************************\n\n"); 
}




int main()
{
  // mostra cabelho do sistema
  cabecalho();  
    

  // indica a escalação que estamos atuando no momento  
  printf("***********************\n");
  printf(" Escalacao de número X\n");
  printf("************************\n\n");  


  // aqui construimos a escalação
  // int i;
 

  for(int i=0; i <= 5; i++)
  {
    
    printf("* Insira o nome do jogador corresponde a camisa \n*");

    printf("Nome do camisa %d\n", i);
   
    

  }




/* estrutura para a seleção */
 

 /* Pilha

 Seleção -> escalação 1  -> jogadores 1 2 3
            escalação 2  -> jogadores 11 22 33

 escalação 1  -> jogadores 1
              -> jogadores 2
              -> jogadores ...
              -> jogadores 11
*/



  /* Jogado */
  struct Jogador
  {
    int numero_camisa;
    char nome[60];
  };


  /*Escalacação */
  struct Escalacao
  {
    struct Jogador jogador;
  };
  
  /*Seleção*/
  struct Selecao
  {
    struct Escalacao escalacao;
  };


/* insatacio a Selecao */
struct Selecao selecao;
/* instancia para criar a escalação  */
struct Escalacao escalacao;
/* instacio o Jogado */
struct Jogador jogador;

/* inserindo nova escalação */
for(int i = 0; i < 11; i++){

 /*
  scanf(" %d", &jogador.numero_camisa);
  scanf(" %c", &jogador.nome);
  */
  
  /* validação */

  /* add jogador na escalacao */

  /* pergunta se vai continuar  */
}

/* add escalacao na selecao */

 


/* mostrar a escalacao */  
/* 
   1 entrar na seleção 
   2 percorrer as escalações 
   3 mostrar as escalaçoes 
*/ 
 
  //Chamada da função imprime_cabec
  mostrarSelecao();



/* mostra os integrantes do grupo */ 
  
    return 0;
}
