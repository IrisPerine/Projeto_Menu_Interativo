#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int opcao;

int main()
{
    // menu de opções
    
    printf("Escolha entre as opções abaixo: \n\n");
    printf("1 - Cadastrar novo usuário. \n");
    printf("2 - Alterar senha do usuário. \n");
    printf("3 - Login. \n");
    printf("4 - Excluir usuário. \n");
    printf("5 - Sair. \n");
    printf("\n");
    
    scanf("%d", &opcao);
    
    switch(opcao)
    {
        case 1:
            system("clear");
            printf("Cadastro de novo usuário. \n");
        break; 
        
         case 2:
            system("clear");
            printf("Alterar senha do usuário. \n");
        break; 
        
         case 3:
            system("clear");
            printf("Realizar login. \n");
        break; 
        
         case 4:
            system("clear");
            printf("Excluir um usuário. \n");
        break; 
        
         case 5:
            system("clear");
            printf("Até a próxima! \n");
        break; 
    }
    
return 0;
}
