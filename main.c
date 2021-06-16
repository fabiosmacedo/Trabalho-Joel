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
  /* Jogado */
  struct Jogador
  {
    int numero_camisa;
    char nome[60];
  } jogador;

  /*Escalacação */
  struct Escalacao
  {
    struct Jogador jogador;
  } escalacao;
  
  /*Seleção*/
  struct Selecao
  {
    struct Escalacao escalacao;
  } selecao;





  // mostra cabelho do sistema
  cabecalho();  
    

  // indica a escalação que estamos atuando no momento  
  printf("***********************\n");
  printf(" Escalacao de número X\n");
  printf("************************\n\n");  


  // aqui construimos a escalação
  printf("Insira o nome do jogador corresponde a camisa \n");

  int continuar = 1;
  
  while( continuar )
  {    
 
    /* instacio o Jogado */ 
    for(int i=0; i<=5; i++)
    {
      // pega o nome do jogador
      printf("Camisa %d nome do Jogador: ", i );
      scanf("%s", jogador.nome);
      // número da camisa
      jogador.numero_camisa = i;
      
    }    


    printf("Digite 1 para cadastrar nova escalação\n" );
    printf("Digite 0 para sair\n" );
    scanf("%d", &continuar); 
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
