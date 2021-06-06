#include <stdio.h>


int main()
{

/* estrutura para a seleção */
 
  /*Seleção*/
  struct Selecao
  {
    char escalacao;
  };

  /*Escalacação */
  struct Escalacao
  {
    int numero_camisa;
    char nome[60];
  };
  
/* instancia para criar a escalação  */
struct Escalacao escalacao;

/* inserindo nova escalação */
for(int i = 0; i < 1; i++){
scanf("%int", &escalacao.numero_camisa);

fflush(stdin);
fgets(escalacao.nome, 40, stdin);

}
  
/* mostrar a escalacao */



  
    printf("Hello World");

    return 0;
}