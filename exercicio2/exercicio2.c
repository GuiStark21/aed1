#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    int tam, op, tam1, i;
    char *nomes, *nome;
    
    nome=(char*)malloc(100*sizeof(char));   
    nomes=(char*)malloc( (tam+1)*sizeof(char));
    

   do{
        printf("-----MENU-----\n");
        printf("1-Adicionar Nome\n");
        printf("2-Remover Nome\n");
        printf("3-Listar\n");
        printf("4-Sair\n");
        printf("Digite uma opcao:\n");
        scanf("%d", &op);
    

switch (op)
{
case 1:
  printf("Digite o nome:\n");
  scanf("%s ", nome);
  tam=strlen(nome);
  nomes=nome;
    break;
case 2:
puts(nomes);
       break;
case 3:
break;

case 4:
printf("Saindo... \n");
break;
default:
printf("Digite uma opcao valida!\n");
    break;
}

}while(op!=4);






    return 0;

    
}