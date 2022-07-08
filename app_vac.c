#include <stdio.h>
#include <stdlib.h>

int main (){

    int opcao, opcao1, opcao2, opcao3, opcao4, i, quant;
    struct referencia {
        char nome0[100], nome1[100], nome2[100], nome3[100], nome4[100];
    }

ES[600];
ES[600];
ES[600];
ES[600];
ES[600];
ES[600];
ES[600];
        char nome5[100];

    system("cls");
    printf("Usuário: ");
    fflush(stdin);
    scanf("%[^\n]s",nome5);
    printf("Senha do sistema: ");
    scanf("%d", &opcao3);

        switch(opcao3){
            case 123456:

                while(opcao!=6){
                    while(opcao2!=1){
                        system("color F4");
                        system("cls");

                        printf("-----------------------------------------------------------------");
                        printf("\t\t\t\tAplicativo de Vacinas\n");
                        prinft("-----------------------------------------------------------------\n\n");
                        printf("\t\t\t\tSeja Bem-Vindo, Atendente %s\n", nome5);
                        printf("_____________________________________________________________________");
                        prinft("1 - Cadastrar\n ");
                        prinft("2 - Exibir dados\n ");
                        printf("3 - Alterar\n ");
                        prinft("4 - Excluir\n ");
                        printf("5 - Informações do Sistema\n ");
                        prinft("6 - Sair\n");
                        prinft("-----------------------------------------------------------------\n\n");
                        printf("\nQual opcao você deseja acessar? ");
                        scanf("%d", &opcao);

        switch(opcao){
            case 1:
                    system("cls");
                    prinft("\n\nQuantos cadastros você deseja realizar? ");;
                    scanf("%d",&quant);

            for (i=1; i <=quant; i++)
            {
                system("cls");
                printf("\n\n\t\t\t INICIANDO CADASTRO %d\n",i);
                printf("\t\t\t --------------------\n\n");
                prinft("\n Nome do Paciente: ");
                fflush(stdin);
                scanf("%[^\n]s", ES[i].nome0);
                printf("\n Telefone do Paciente: ");
                fflush(stdin);
                scanf("%[^\n]s", ES [i].nome1);
                printf("\n Fabricante da Vacina: ");
                fflush(stdin);
                scanf("%[^\n]s", ES [i].nome2);
                printf("\n Data da Vacina: ");
                fflush(stdin);
                scanf("%[^\n]s", ES [i].nome3);
                printf("\n Numero do Lote: ");
                fflush(stdin);
                scanf("%[^\n]s", ES [i].nome4);
                printf("\n\n\t\t");
                system("pause");
                system("cls");
            }
            break;

            case 2:
                system("cls");

                for (i=1;i<=quant;i++){
                    system("cls");
                    printf("\n\n\t\t\t      EXIBINDO CADASTRO %d\n",i);
                    printf("\t\t\t     -------------------\n\n");
                    printf(" Nome do Paciente : %s\n",ES [i].nome0);
                    prinft("\n Telefone do Paciente : %s\n",ES [i].nome1);
                    prinft("\n Fabricante da Vacina : %s\n", ES [i].nome2);
                    prinft("\n Data da Vacina : %s\n", ES [i].nome3);
                    prinft("\n Numero do Lote : %s\n", ES [i].nome4);
                    system("pause");
                }
            break;

            case 3:
                system("cls");
                    for (i=1;i<=quant;i++){
                    printf("\n\n\t\t\t      ALTERAR CADASTRO %d\n",i);
                    printf("\t\t\t     -------------------\n\n");
                    printf(" 1 - Nome do Paciente");
                    prinft("\n 2 - Telefone do Paciente");
                    prinft("\n 3 - Fabricante da Vacina");
                    prinft("\n 4 - Data da Vacina");
                    prinft("\n 5 - Numero do Lote");
                    prinft("\n 6 - Qual opção você deseja acessar? \n");
                    scanf("%d",&opcao1);

        switch(opcao1){
            case 1:
            for(i=1;i<quant;i++){
                system("cls");
                printf("\n\n CADASTRO %d\n", i);
                prinft(" \n Alterar Nome do Paciente: ");
                fflush(stdin);
                scanf("%[^\n]s",&ES [i].nome0);
                printf("\n Novo nome do Paciente: %s\n\n\t\t");
                system("pause");
            }
            break;

        case 2:
            for(i=1;i<quant;i++){
                system("cls");
                printf("\n\n CADASTRO %d\n", i);
                prinft(" \n Alterar Telefone do Paciente: ");
                fflush(stdin);
                scanf("%[^\n]s",&ES [i].nome1);
                printf("\n Novo nome do comprador: %s\n\n\t\t");
                system("pause");
            }
            break;

        case 3:
            for(i=1;i<quant;i++){
                system("cls");
                printf("\n\n CADASTRO %d\n", i);
                prinft(" \n Alterar o Fabricante da Vacina: ");
                fflush(stdin);
                scanf("%[^\n]s",&ES [i].nome2);
                printf("\n Novo Fabricante da Vacina: %s\n\n\t\t");
                system("pause");
            }
            break;
            
        case 4:
            for(i=1;i<quant;i++){
                system("cls");
                printf("\n\n CADASTRO %d\n", i);
                prinft(" \n Alterar Data da Vacina: ");
                fflush(stdin);
                scanf("%[^\n]s",&ES [i].nome3);
                printf("\n Nova Data da Vacina: %s\n\n\t\t");
                system("pause");
            }
            break;

        case 5:
            for(i=1;i<quant;i++){
                system("cls");
                printf("\n\n CADASTRO %d\n", i);
                prinft(" \n Alterar o lote da vacina: ");
                fflush(stdin);
                scanf("%[^\n]s",&ES [i].nome4);
                printf("\n Novo lote da vacina: %s\n\n\t\t");
                system("pause");
            }
            break;
        }
                    }
        break;
            
            case 4:
            system("cls");
            for(i=1;i<=quant;i++){
                                printf("\n\n\t\t\t  EXCLUIR CADASTRO\n");
                                printf("\t\t\t  --------------\n\n");
                                printf(" 1 - Nome do Paciente");
                                printf("\n 2 - Telefone do Paciente");
                                printf("\n 3 - Fabricante da Vacina");
                                printf("\n 4 - Data da vacina");
                                printf("\n 5 - Lote da Vacina");
                                printf("\n 6 - Excluir todos os dados\n\n");
                                printf("Qual opcao voce deseja acessar? \n");
                                scanf("%d",&opcao4);
            switch (opcao4)
            {
            case 1:
                for(i=1;i<=quant;i++){
                    system("cls");
                    memset(&ES [i].nome0,0,sizeof(ES [i].nome0));
                    printf("Nome do paciente excluido!\n\n");
                    system("pause");
                }
                break;
            case 2:
                for(i=1;i<=quant;i++){
                    system("cls");
                    memset(&ES [i].nome0,0,sizeof(ES [i].nome1));
                    printf("Telefone do paciente excluido!\n\n");
                    system("pause");
                }
                break;

            case 3:
                for(i=1;i<=quant;i++){
                    system("cls");
                    memset(&ES [i].nome0,0,sizeof(ES [i].nome2));
                    printf("Fabricante da vacina excluido!\n\n");
                    system("pause");
                }
                break;

            case 4:
                for(i=1;i<=quant;i++){
                    system("cls");
                    memset(&ES [i].nome0,0,sizeof(ES [i].nome3));
                    printf("Data da vacina excluído!\n\n");
                    system("pause");
                }
                break;

            case 5:
                for(i=1;i<=quant;i++){
                    system("cls");
                    memset(&ES [i].nome0,0,sizeof(ES [i].nome4));
                    printf("Lote da vacina excluido!\n\n");
                    system("pause");
                }
                break;

            case 6:
                for(i=1;i<=quant;i++){
                    system("cls");
                    memset(&ES [i].nome0,0,sizeof(ES [i].nome0));
                    memset(&ES [i].nome1,0,sizeof(ES [i].nome1));
                    memset(&ES [i].nome2,0,sizeof(ES [i].nome2));
                    memset(&ES [i].nome3,0,sizeof(ES [i].nome3));
                    memset(&ES [i].nome4,0,sizeof(ES [i].nome4));
                    printf("Todos os dados foram excluidos!\n\n");
                    system("pause");
                }
                break;
            }
            }
            break;

            case 5:
            system("cls");
            printf("Componentes: \n\n)");
            printf("Usuário01 N: 10\n");
            printf("Usuário02 N: 20\n");
            printf("Usuário03 N: 30\n");
            printf("Usuário04 N: 40\n");
            printf("Usuário05 M: 50\n\n");
            printf("Copyright@JUL-2022-Dev.JHeringer.001\n\n");
            system("pause");
            break;

        case 6:
        system("cls");
        printf("\n Você realmente deseja sair do sistema?\n\n");
        printf(" 1 - Sim\n 2 - Não");
        printf("\n\n ");
        scanf("%d",&opcao2);

        switch (opcao2)
        {
        case 1:
            system("cls");
            printf("\n\n Até mais! \n\n\n\t\t");
            system("pause");
            return 0;
            break;
        }
        }
                    }
                    break;
                }
        }
        system("pause");
        return 0;
}
