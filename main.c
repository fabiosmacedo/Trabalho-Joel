#include <stdio.h>



/******* Área dos protótipos ******/
void mostrarSelecao(void);




int main()
{

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
for(int i = 0; i < 1; i++){
/*  scanf(" %d", &jogador.numero_camisa);
  scanf(" %c", &jogador.nome);
  */
  /* validação */

  /* add escalacao na selecao */


  /* pergunta se vai continuar  */
}


 


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


/* Funções */
void mostrarSelecao()
{
  printf("******************************\n");
  printf("* LINGUAGEM C *\n");
  printf("******************************\n\n"); 
}

