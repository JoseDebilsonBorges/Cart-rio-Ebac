#include <stdio.h> //biblioteca de counicação com usuário
#include <stdlib.h> //biblioteca de alocção de espaço em memória
#include <locale.h> //biblioteca de alocações de textos por região
#include <string.h> //biblioteca responsavel por cuidar das string

int registro()
{
	setlocale(LC_ALL, "Portuguese");
	
	char arquivo[40];
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	
	printf("Digitar o cpf para cadastro: ");
	scanf("%s", cpf );
	
	strcpy (arquivo, cpf);//responsavel por copiar as variaveis das string
	
	FILE *file;// cria o arquivo
	file = fopen(arquivo, "w");//cria o arquivo
	fprintf(file, cpf);//salva o valor da variavel
	fclose(file);//fecha o arquivo
	
	
	file = fopen(arquivo, "a");
	fprintf(file,",");
	fclose(file);
	
	printf("Digitar o nome para cadastro: ");
	scanf("%s", nome);
	
	file = fopen(arquivo, "a");
	fprintf(file, nome);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file, ",");
	fclose(file);
	
	printf("Digitar o sobrenome para cadastro: ");
	scanf("%s", sobrenome);
	
	file = fopen(arquivo, "a");
	fprintf(file, sobrenome);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file, ",");
	fclose(file);
	
	printf("Digitar o cargo para cadastro: ");
	scanf("%s", cargo);
	
	file = fopen(arquivo, "a");
	fprintf(file, cargo);
	fclose(file);
	
	system("pause");
	


}

int consulta()
{
	setlocale(LC_ALL, "Portuguese");
		
	char cpf[40];
	char conteudo[200];
	
	printf("Digite o cpf para consulta: ");
	scanf("%s", cpf);
	
	FILE *file;
	file = fopen(cpf, "r");
	
	if(file == NULL);
	{
		printf("Arquivo não localizado \n");
	}
	
	while(fgets(conteudo, 200, file) != NULL)
	{
	    printf("\nInformações do usuário: ");
	 	printf("%s", conteudo);
		printf("\n\n");
	}
	
	system("pause");
}
	


int deletar()
{
	char cpf[40];
	
	printf("Digitar cpf para deletar: ");
	scanf("%s", cpf);
	
	remove(cpf);
	
	FILE *file;
	file = fopen(cpf, "r");
	
	if(file == NULL)
	 {
		printf("\nUsuário não encontrado\n");
	 	system("pause");
	 }
	

}

int main()
    {
	int opcao=0;
	int laco=1;
	
	for(laco=1;laco=1;)

	{
	
		
	system("cls");
	
	setlocale(LC_ALL, "Portuguese");//Definindo lingagem
	
	printf("\t Cartório da EBAC \t\n\n");//Inicio do menu
	printf("Selecine uma das opções: \n\n");
	printf("\t1 - Registrar nomes \n");
	printf("\t2 - Consulte os nomes \n");
	printf("\t3 - Excluir os nomes\n");//Termino do menu
	printf("\t4 - Fechar o sistema\n");
	
	scanf ("%d",&opcao	);	//Armazenando escolha do usuário
	
	system("cls");
	
	switch(opcao)
	{
		case 1:
		registro();
		break;
		
		case 2:
	    consulta();
		break;
		
		case 3:	
		deletar();
		break;
		
		case 4:
		printf("Obrigado por usar o nosso sistema\n");
		return 0;
		break;
	
		
		default:
		printf("Opção não disponivel\n");
		system("pause");
		break;
	
	}
	}  
	
}

    

	


