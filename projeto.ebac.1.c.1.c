#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

                          
//---------------------------------------------------------------//---------------------------------------------------						  
						  //inicio da escolha usando usando "FUN��O"
                         //fun��es ficam acima do "INT MAIN" nesse tipo de caso 


int registro()   //inicio da op��o de registro
{
     char arquivo1[40];
	 char cpf[40];
	 char nome[40];
     char sobrenome[40];
     char cargo[40];
//------------------------------------------------------     
       printf("DIGITE O CPF A SER CADASTRADO:");
       scanf("%s",cpf);
     
       strcpy(arquivo1, cpf);

    FILE *file;
    file = fopen(arquivo1, "w");
    fprintf(file,cpf);
    fclose(file);
    
    file = fopen(arquivo1, "a");
    fprintf(file,",");
    fclose(file);
//------------------------------------------------------
    printf("DIGITE O NOME A SER SALVO:");
    scanf("%s",nome);
    
    file = fopen(arquivo1, "a");
    fprintf(file,nome);
    fclose(file);
  
    file = fopen(arquivo1, "a");
    fprintf(file,",");
    fclose(file);
//------------------------------------------------------

    printf("DIGITE O SOBRENOME A SER SALVO:");    
    scanf("%s",sobrenome);
    
    file = fopen(arquivo1, "a");
	fprintf(file,sobrenome);
	fclose(file); 
	
	file = fopen(arquivo1, "a");
    fprintf(file,",");
    fclose(file);
//------------------------------------------------------	 
 
    printf("DIGITE O CARGO A SER SALVO:");
    scanf("%s", cargo);
    
    file = fopen(arquivo1, "a");
    fprintf(file, cargo);
    fclose(file),
    
    file = fopen(arquivo1, "a");
    fprintf(file,",");
    fclose(file);

//------------------------------------------------------

}

int consulta()       //inicio da op��o de consultar
{
setlocale(LC_ALL, "Portuguese");
      
    char cpf[40];
	char conteudo[200];
   
	printf("informe o cpf a ser consultado:\n");
    scanf("%s",cpf);
     
    FILE *file;
    file = fopen(cpf, "r");
    
	if(file == NULL)
	{
		printf("esse arquivo n�o consta no banco de dados.\n");
	}
	
	while(fgets(conteudo, 200, file) != NULL)
	{
		printf("\nessas s�o as informa��es do usu�rio:\n");
		printf("%s", conteudo);
		printf("\n\n");
    }
	system("pause");

}


int deletar()     //inicio da op��o de deletar
{
    char cpf[40];
    printf("informe o CPF a ser deletado:\n");
    scanf("%s", cpf);
    
    remove(cpf);
    
    FILE *file;
    file = fopen(cpf,"r");
    
    if(file == NULL)
    {
	printf("essa informa��es n�o encontrasse em nosso sistema!\n");
    system("pause");
	}

}

//---------------------------------------------------------------//--------------------------------------------------- 
                         //inicio do programa e suas varia��es acima e abaixo
int main() {
	
setlocale(LC_ALL, "Portuguese");
	
int opcao=0;
int laco=1;
 for(laco=1;laco=1;){
 	system("cls");
	
	  printf("### cart�rio de consulta ebac ###\n");//inicio do menu       
      printf("ESCOLHA UMA DAS OP��ES A SEGUIR\n");
      printf("\t1-registrar nomes\n");
      printf("\t2-consultar nomes\n");
	  printf("\t3-deletar nomes\n");
	  printf("op��o:");
	  scanf("%d", &opcao);
	  system("cls"); 
//---------------------------------------------------------------//---------------------------------------------------		
		                           

                // associa��o de "FUN��O" com "SWITCH/CASE/BREAK
        switch(opcao)        
        { 
        case 1:registro();
		break;	
	
	
      	case 2:consulta(); 
	    break;
	
     	case 3:deletar();
	    break;
	
    
     	default: 
	    printf("Esta op��o n�o existe.\n");
        system("pause");
        }   


}


}

