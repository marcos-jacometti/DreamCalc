#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <math.h>
#include <conio.h>
#include <windows.h>
#include <stdlib.h>
#define MAX 250

int fatorial(int n);
int somatorio1(int n), somatorio2(int n), somatorio3(int n), somatorio4(int n); //SOMATÓRIO
int proposicional1(int n), proposicional2(int n), proposicional3(int p, int q), proposicional4(int p, int q), proposicional5(int p, int q), proposicional6(int p, int q), proposicional7(int p, int q);
int permutacaoSimples (int n), arranjoSimples(int n, int k), arranjoRepeticao (int n, int k), combinacaoSimples(int n, int k), combinacaoRepeticao (int n,int k), permutacaoCRepeticao (int n, int k);


int main () {

system("color 4F");
setlocale(LC_ALL, "Portuguese");

    printf("\n");
    printf("\t\t\t\t 						  CALCCALCCALCCALCCALCCALCCALCCALCCALCCALC\n");
    printf("\t\t\t\t						 CALCCALCCALCCALCCALCCALCCALCCALCCALCCALCCA\n");
    printf("\t\t\t\tDDDDDD						CALCCALCCALCCALCCALCCALCCALCCALCCALCCALCCALC\n");
    printf("\t\t\t\tDDDDDDD					       CALC        CA        LC  CALCCALC        CALC\n");
    printf("\t\t\t\tDD   DDD  RR  RR  EEEEE  AAAAAAA  MM       MM  CALC  CALCCALC  CALC  CA  LCCALCCA  LCCALCCALC\n");
    printf("\t\t\t\tDD   DDD  RR RR   EE	 AA   AA  MMM     MMM  CALC  CALCCALC  CALC  CA  LCCALCCA  LCCALCCALC\n");
    printf("\t\t\t\tDD   DDD  RRRR    EEEEE  AAAAAAA  MM M   M MM  CALC  CALCCALC        CA  LCCALCCA  LCCALCCALC\n");
    printf("\t\t\t\tDDDDDDD   RR      EE	 AA   AA  MM   M   MM  CALC  CALCCALC  CALC  CA  LCCALCCA  LCCALCCALC\n");
    printf("\t\t\t\tDDDDDD    RR	  EEEEE  AA   AA  MM       MM  CALC        CA  LCCA  LC        CA        LCCA\n");
    printf("\t\t\t\t				  		CALCCALCCALCCALCCALCCALCCALCCALCCALCCALCCALC\n");
    printf("\t\t\t\t						 CALCCALCCALCCALCCALCCALCCALCCALCCALCCALCCA\n");
    printf("\t\t\t\t						  CALCCALCCALCCALCCALCCALCCALCCALCCALCCALC\n");



printf("\n\n\n");
int menuPrincipal, submenu, nValue, nPro, nPro1, nAnali, nAnalis1;
int coresDeFundo;

do {

    printf("\n");
    printf("\t\t\t -----MENU PRINCIPAL-----\n");
    printf("\n");

    printf("\t\t1. Somatório\n");
    printf("\t\t2. Lógica Proposicional\n");
    printf("\t\t3. Análise Combinatória\n");
    printf("\t\t4. Opções do Usuário\n");
    printf("\t\t5. Sair\n");

    printf("\n");

    printf("\t Escolha a opção desejada:");
    scanf("%d", &menuPrincipal);

    switch (menuPrincipal) { //VIP Switch

        case 1: //Start submenu Somatório
            system("cls");
            printf("\n");

            printf("\t\t\t\t 						  CALCCALCCALCCALCCALCCALCCALCCALCCALCCALC\n");
            printf("\t\t\t\t						 CALCCALCCALCCALCCALCCALCCALCCALCCALCCALCCA\n");
            printf("\t\t\t\tDDDDDD						CALCCALCCALCCALCCALCCALCCALCCALCCALCCALCCALC\n");
            printf("\t\t\t\tDDDDDDD					       CALC        CA        LC  CALCCALC        CALC\n");
            printf("\t\t\t\tDD   DDD  RR  RR  EEEEE  AAAAAAA  MM       MM  CALC  CALCCALC  CALC  CA  LCCALCCA  LCCALCCALC\n");
            printf("\t\t\t\tDD   DDD  RR RR   EE	 AA   AA  MMM     MMM  CALC  CALCCALC  CALC  CA  LCCALCCA  LCCALCCALC\n");
            printf("\t\t\t\tDD   DDD  RRRR    EEEEE  AAAAAAA  MM M   M MM  CALC  CALCCALC        CA  LCCALCCA  LCCALCCALC\n");
            printf("\t\t\t\tDDDDDDD   RR      EE	 AA   AA  MM   M   MM  CALC  CALCCALC  CALC  CA  LCCALCCA  LCCALCCALC\n");
            printf("\t\t\t\tDDDDDD    RR	  EEEEE  AA   AA  MM       MM  CALC        CA  LCCA  LC        CA        LCCA\n");
            printf("\t\t\t\t				  		CALCCALCCALCCALCCALCCALCCALCCALCCALCCALCCALC\n");
            printf("\t\t\t\t						 CALCCALCCALCCALCCALCCALCCALCCALCCALCCALCCA\n");
            printf("\t\t\t\t						  CALCCALCCALCCALCCALCCALCCALCCALCCALCCALC\n");

            printf("\n\n\n");

            printf("\t\t\t -----SUBMENU SOMATÓRIO-----\n");

            printf("\t\t1. Somatório de J = 0 até N para a regra J \n");
            printf("\t\t2. Somatório de J = 0 até N para a regra (-J) ^ (J+1) \n");
            printf("\t\t3. Aproximação do número PI com somatório até N \n");
            printf("\t\t4. Aproximação do neperiano por somatório até N \n");
            printf("\t\t5. Voltar ao Menu anterior \n");

            printf("\n");

            printf("\t Escolha a opção desejada:");
            scanf("%d", &submenu);
            printf("\n");

            switch (submenu) {

                case 1:

                    printf("\t Digite o valor de N:");
                    scanf("%d", &nValue);
                    somatorio1(nValue);

                break;

                case 2:

                    printf("\t Digite o valor de N:");
                    scanf("%d", &nValue);
                    somatorio2(nValue);

                break;

                case 3:

                    printf("\t Digite o valor de N:");
                    scanf("%d", &nValue);
                    somatorio3(nValue);

                break;

                case 4:

                    printf("\t Digite o valor de N:");
                    scanf("%d", &nValue);
                    somatorio4(nValue);

                break;

                case 5:
                break;

            }

        break; //End switch Somatório

        case 2: //Start submenu lógica proposicional
           system("cls");
           printf("\n");

            printf("\t\t\t\t 						  CALCCALCCALCCALCCALCCALCCALCCALCCALCCALC\n");
            printf("\t\t\t\t						 CALCCALCCALCCALCCALCCALCCALCCALCCALCCALCCA\n");
            printf("\t\t\t\tDDDDDD						CALCCALCCALCCALCCALCCALCCALCCALCCALCCALCCALC\n");
            printf("\t\t\t\tDDDDDDD					       CALC        CA        LC  CALCCALC        CALC\n");
            printf("\t\t\t\tDD   DDD  RR  RR  EEEEE  AAAAAAA  MM       MM  CALC  CALCCALC  CALC  CA  LCCALCCA  LCCALCCALC\n");
            printf("\t\t\t\tDD   DDD  RR RR   EE	 AA   AA  MMM     MMM  CALC  CALCCALC  CALC  CA  LCCALCCA  LCCALCCALC\n");
            printf("\t\t\t\tDD   DDD  RRRR    EEEEE  AAAAAAA  MM M   M MM  CALC  CALCCALC        CA  LCCALCCA  LCCALCCALC\n");
            printf("\t\t\t\tDDDDDDD   RR      EE	 AA   AA  MM   M   MM  CALC  CALCCALC  CALC  CA  LCCALCCA  LCCALCCALC\n");
            printf("\t\t\t\tDDDDDD    RR	  EEEEE  AA   AA  MM       MM  CALC        CA  LCCA  LC        CA        LCCA\n");
            printf("\t\t\t\t				  		CALCCALCCALCCALCCALCCALCCALCCALCCALCCALCCALC\n");
            printf("\t\t\t\t						 CALCCALCCALCCALCCALCCALCCALCCALCCALCCALCCA\n");
            printf("\t\t\t\t						  CALCCALCCALCCALCCALCCALCCALCCALCCALCCALC\n");

            printf("\n\n\n");

            printf("\t\t\t -----SUBMENU LÓGICA PROPOSICIONAL----- \n");

            printf("\t\t1. ~p \n");
            printf("\t\t2. ~q\n");
            printf("\t\t3. p ^ q\n");
            printf("\t\t4. p ou q\n");
            printf("\t\t5. p ou exclusivo q\n");
            printf("\t\t6. p se então q\n");
            printf("\t\t7. p se somente se q\n");
            printf("\t\t8. Voltar ao Menu anterior \n");

            printf("\n");

            printf("\t Escolha a opção desejada:");
            scanf("%d", &submenu);
            printf("\n");

            switch (submenu) {

                case 1:

                    printf("\t Digite o valor de P, sendo 0 para FALSO e 1 para VERDADEIRO:");
                    scanf("%d", &nPro);
                    proposicional1(nPro);

                break;

                case 2:

                    printf("\t Digite o valor de Q, sendo 0 para FALSO e 1 para VERDADEIRO:");
                    scanf("%d", &nPro);
                    proposicional2(nPro);

                break;

                case 3:

                    printf("\t Digite o valor de P, sendo 0 para FALSO e 1 para VERDADEIRO:");
                    scanf("%d", &nPro);
                    printf("\t Digite o valor de Q, sendo 0 para FALSO e 1 para VERDADEIRO:");
                    scanf("%d", &nPro1);
                    proposicional3(nPro, nPro1);

                break;

                case 4:

                    printf("\t Digite o valor de P, sendo 0 para FALSO e 1 para VERDADEIRO:");
                    scanf("%d", &nPro);
                    printf("\t Digite o valor de Q, sendo 0 para FALSO e 1 para VERDADEIRO:");
                    scanf("%d", &nPro1);
                    proposicional4(nPro, nPro1);

                break;

                case 5:

                    printf("\t Digite o valor de P, sendo 0 para FALSO e 1 para VERDADEIRO:");
                    scanf("%d", &nPro);
                    printf("\t Digite o valor de Q, sendo 0 para FALSO e 1 para VERDADEIRO:");
                    scanf("%d", &nPro1);
                    proposicional5(nPro, nPro1);

                break;

                case 6:

                    printf("\t Digite o valor de P, sendo 0 para FALSO e 1 para VERDADEIRO:");
                    scanf("%d", &nPro);
                    printf("\t Digite o valor de Q, sendo 0 para FALSO e 1 para VERDADEIRO:");
                    scanf("%d", &nPro1);
                    proposicional6(nPro, nPro1);

                break;

                case 7:

                    printf("\t Digite o valor de P, sendo 0 para FALSO e 1 para VERDADEIRO:");
                    scanf("%d", &nPro);
                    printf("\t Digite o valor de Q, sendo 0 para FALSO e 1 para VERDADEIRO:");
                    scanf("%d", &nPro1);
                    proposicional7(nPro, nPro1);

                break;

                case 8:
                break;

            }

        break; //End Switch Lógica Proposicional

        case 3: //Start Submenu Análise Combinatória
            system("cls");
            printf("\n");

            printf("\t\t\t\t 						  CALCCALCCALCCALCCALCCALCCALCCALCCALCCALC\n");
            printf("\t\t\t\t						 CALCCALCCALCCALCCALCCALCCALCCALCCALCCALCCA\n");
            printf("\t\t\t\tDDDDDD						CALCCALCCALCCALCCALCCALCCALCCALCCALCCALCCALC\n");
            printf("\t\t\t\tDDDDDDD					       CALC        CA        LC  CALCCALC        CALC\n");
            printf("\t\t\t\tDD   DDD  RR  RR  EEEEE  AAAAAAA  MM       MM  CALC  CALCCALC  CALC  CA  LCCALCCA  LCCALCCALC\n");
            printf("\t\t\t\tDD   DDD  RR RR   EE	 AA   AA  MMM     MMM  CALC  CALCCALC  CALC  CA  LCCALCCA  LCCALCCALC\n");
            printf("\t\t\t\tDD   DDD  RRRR    EEEEE  AAAAAAA  MM M   M MM  CALC  CALCCALC        CA  LCCALCCA  LCCALCCALC\n");
            printf("\t\t\t\tDDDDDDD   RR      EE	 AA   AA  MM   M   MM  CALC  CALCCALC  CALC  CA  LCCALCCA  LCCALCCALC\n");
            printf("\t\t\t\tDDDDDD    RR	  EEEEE  AA   AA  MM       MM  CALC        CA  LCCA  LC        CA        LCCA\n");
            printf("\t\t\t\t				  		CALCCALCCALCCALCCALCCALCCALCCALCCALCCALCCALC\n");
            printf("\t\t\t\t						 CALCCALCCALCCALCCALCCALCCALCCALCCALCCALCCA\n");
            printf("\t\t\t\t						  CALCCALCCALCCALCCALCCALCCALCCALCCALCCALC\n");

            printf("\n\n\n");

            printf("\t\t\t -----ANÁLISE COMBINATÓRIA----- \n");

            printf("\t\t1. Permutação Simples: P(n) \n");
            printf("\t\t2. Arranjo Simples: A(n,k) \n");
            printf("\t\t3. Combinação Simples: C(n,k) \n");
            printf("\t\t4. Arranjo com Repetição: AR(n,k) \n");
            printf("\t\t5. Combinação com Repetição: CR(n,k) \n");
            printf("\t\t6. Permutação com Repetição: P(n,k1, ..., Kp) \n");
            printf("\t\t7. Voltar ao Menu anterior \n");

            printf("\n");

            printf("\t Escolha a opção desejada:");
            scanf("%d", &submenu);
            printf("\n");

            switch (submenu) {

                case 1:

                    printf("\t Digite o valor de N:");
                    scanf("%d", &nAnali);
                    permutacaoSimples(nAnali);

                break;

                case 2:

                    printf("\t Digite o valor de N:");
                    scanf("%d", &nAnali);
                    printf("\t Digite o valor de K:");
                    scanf("%d", &nAnalis1);
                    arranjoSimples(nAnali, nAnalis1);

                break;

                case 3:

                    printf("\t Digite o valor de N:");
                    scanf("%d", &nAnali);
                    printf("\t Digite o valor de K:");
                    scanf("%d", &nAnalis1);
                    combinacaoSimples(nAnali, nAnalis1);

                break;

                case 4:

                    printf("\t Digite o valor de N:");
                    scanf("%d", &nAnali);
                    printf("\t Digite o valor de K:");
                    scanf("%d", &nAnalis1);
                    arranjoRepeticao(nAnali, nAnalis1);

                break;

                case 5:

                    printf("\t Digite o valor de N:");
                    scanf("%d", &nAnali);
                    printf("\t Digite o valor de K:");
                    scanf("%d", &nAnalis1);
                    combinacaoRepeticao(nAnali, nAnalis1);

                break;

                case 6:

                    printf("\t Digite o valor de N:");
                    scanf("%d", &nAnali);
                    printf("\t Digite o valor de K:");
                    scanf("%d", &nAnalis1);
                    permutacaoCRepeticao(nAnali, nAnalis1);

                break;

                case 7:
                break;

            }

        break; //End Submenu Análise Combinatória

        case 4: //Estilização

            system("cls");
            printf("\n");

            printf("\t\t\t\t 						  CALCCALCCALCCALCCALCCALCCALCCALCCALCCALC\n");
            printf("\t\t\t\t						 CALCCALCCALCCALCCALCCALCCALCCALCCALCCALCCA\n");
            printf("\t\t\t\tDDDDDD						CALCCALCCALCCALCCALCCALCCALCCALCCALCCALCCALC\n");
            printf("\t\t\t\tDDDDDDD					       CALC        CA        LC  CALCCALC        CALC\n");
            printf("\t\t\t\tDD   DDD  RR  RR  EEEEE  AAAAAAA  MM       MM  CALC  CALCCALC  CALC  CA  LCCALCCA  LCCALCCALC\n");
            printf("\t\t\t\tDD   DDD  RR RR   EE	 AA   AA  MMM     MMM  CALC  CALCCALC  CALC  CA  LCCALCCA  LCCALCCALC\n");
            printf("\t\t\t\tDD   DDD  RRRR    EEEEE  AAAAAAA  MM M   M MM  CALC  CALCCALC        CA  LCCALCCA  LCCALCCALC\n");
            printf("\t\t\t\tDDDDDDD   RR      EE	 AA   AA  MM   M   MM  CALC  CALCCALC  CALC  CA  LCCALCCA  LCCALCCALC\n");
            printf("\t\t\t\tDDDDDD    RR	  EEEEE  AA   AA  MM       MM  CALC        CA  LCCA  LC        CA        LCCA\n");
            printf("\t\t\t\t				  		CALCCALCCALCCALCCALCCALCCALCCALCCALCCALCCALC\n");
            printf("\t\t\t\t						 CALCCALCCALCCALCCALCCALCCALCCALCCALCCALCCA\n");
            printf("\t\t\t\t						  CALCCALCCALCCALCCALCCALCCALCCALCCALCCALC\n");

            printf("\n\n\n");

            printf("\t Escolha a cor de fundo da tela conforme as opções abaixo: \n");
            printf("\n");
            printf("\t 0 - Preto \n \t 1 - Azul \n \t 2 - Verde \n \t 3 - Verde-Água \n \t 4 - Vermelho \n \t 5 - Roxo \n \t 6 - Amarelo \n \t 7 - Cinza \n \t 8 - Azul claro \n");
            printf("\n");
            printf("\t Digite o número da cor desejeda:");
            scanf("%d", &coresDeFundo);

            printf("\n");

            if (coresDeFundo == 0) {
                system("color 0F");
            } else if (coresDeFundo == 1) {
                system("color 1F");
            } else if (coresDeFundo == 2) {
                system("color 2F");
            } else if (coresDeFundo == 3) {
                system("color 3F");
            } else if (coresDeFundo == 4) {
                system("color 4F");
            } else if (coresDeFundo == 5) {
                system("color 5F");
            } else if (coresDeFundo == 6) {
                system("color 6F");
            } else if (coresDeFundo == 7) {
                system("color 8F");
            } else if (coresDeFundo == 8) {
                system("color 9F");
            } else {
                printf("\t Valor Incorreto");
            }

        break;

        case 5:

                system("cls");
                printf("\n");
                printf("\t\t\t\t 						  CALCCALCCALCCALCCALCCALCCALCCALCCALCCALC\n");
                printf("\t\t\t\t						 CALCCALCCALCCALCCALCCALCCALCCALCCALCCALCCA\n");
                printf("\t\t\t\tDDDDDD						CALCCALCCALCCALCCALCCALCCALCCALCCALCCALCCALC\n");
                printf("\t\t\t\tDDDDDDD					       CALC        CA        LC  CALCCALC        CALC\n");
                printf("\t\t\t\tDD   DDD  RR  RR  EEEEE  AAAAAAA  MM       MM  CALC  CALCCALC  CALC  CA  LCCALCCA  LCCALCCALC\n");
                printf("\t\t\t\tDD   DDD  RR RR   EE	 AA   AA  MMM     MMM  CALC  CALCCALC  CALC  CA  LCCALCCA  LCCALCCALC\n");
                printf("\t\t\t\tDD   DDD  RRRR    EEEEE  AAAAAAA  MM M   M MM  CALC  CALCCALC        CA  LCCALCCA  LCCALCCALC\n");
                printf("\t\t\t\tDDDDDDD   RR      EE	 AA   AA  MM   M   MM  CALC  CALCCALC  CALC  CA  LCCALCCA  LCCALCCALC\n");
                printf("\t\t\t\tDDDDDD    RR	  EEEEE  AA   AA  MM       MM  CALC        CA  LCCA  LC        CA        LCCA\n");
                printf("\t\t\t\t				  		CALCCALCCALCCALCCALCCALCCALCCALCCALCCALCCALC\n");
                printf("\t\t\t\t						 CALCCALCCALCCALCCALCCALCCALCCALCCALCCALCCA\n");
                printf("\t\t\t\t						  CALCCALCCALCCALCCALCCALCCALCCALCCALCCALC\n");



            printf("\t Fim do programa!");

        break;

        default :

                system("cls");
                printf("\n");
                printf("\t\t\t\t 						  CALCCALCCALCCALCCALCCALCCALCCALCCALCCALC\n");
                printf("\t\t\t\t						 CALCCALCCALCCALCCALCCALCCALCCALCCALCCALCCA\n");
                printf("\t\t\t\tDDDDDD						CALCCALCCALCCALCCALCCALCCALCCALCCALCCALCCALC\n");
                printf("\t\t\t\tDDDDDDD					       CALC        CA        LC  CALCCALC        CALC\n");
                printf("\t\t\t\tDD   DDD  RR  RR  EEEEE  AAAAAAA  MM       MM  CALC  CALCCALC  CALC  CA  LCCALCCA  LCCALCCALC\n");
                printf("\t\t\t\tDD   DDD  RR RR   EE	 AA   AA  MMM     MMM  CALC  CALCCALC  CALC  CA  LCCALCCA  LCCALCCALC\n");
                printf("\t\t\t\tDD   DDD  RRRR    EEEEE  AAAAAAA  MM M   M MM  CALC  CALCCALC        CA  LCCALCCA  LCCALCCALC\n");
                printf("\t\t\t\tDDDDDDD   RR      EE	 AA   AA  MM   M   MM  CALC  CALCCALC  CALC  CA  LCCALCCA  LCCALCCALC\n");
                printf("\t\t\t\tDDDDDD    RR	  EEEEE  AA   AA  MM       MM  CALC        CA  LCCA  LC        CA        LCCA\n");
                printf("\t\t\t\t				  		CALCCALCCALCCALCCALCCALCCALCCALCCALCCALCCALC\n");
                printf("\t\t\t\t						 CALCCALCCALCCALCCALCCALCCALCCALCCALCCALCCA\n");
                printf("\t\t\t\t						  CALCCALCCALCCALCCALCCALCCALCCALCCALCCALC\n");


            printf("\t Valor inválido");

        break;

    }

    } while ( menuPrincipal != '0');


return 0;
}

//---------------SOMATÓRIO---------------
int somatorio1(int n) {
    int somatorio = 0;

    for (int i = 0; i<= n; i++) {
        somatorio = somatorio + i;
    }

    printf("\t %d\n", somatorio);
}

int somatorio2(int n) {
    int expoente;
    int somatorio = 0;
    for (int i = 0; i <= n; i++) {
        expoente = i + 1;
        int potencia = 1;

        for (int j = 1; j <= expoente; j++) {
           potencia = potencia * (-i);
        }

        somatorio = somatorio + potencia;
    }

    printf("\t %d\n", somatorio);
}

int somatorio3(int n) {
    float somatorio = 0;

    for (int i = 0; i<= n; i++) {
        float mult;
        float div;

        mult = (4 * i + 1) * (4 * i + 3);
        div = 8/mult;

        somatorio = somatorio + div;
    }
    printf("\t %f\n", somatorio);
}

int somatorio4(int n) {
    float somatorio = 0;

    for (int i = 0; i<= n; i++) {
        int fatorial = 1;
        float div;

        for (int j = i; j > 0; j--) {
            fatorial = fatorial * j;
        }

        div = (float)1/fatorial;
        somatorio = somatorio + div;
    }
    printf("\t %f\n", somatorio);
}

//---------------LOGÍCA PROPOSICIONAL---------------
int proposicional1(int n) {

    if (n == 0) {
        printf("\t TRUE\n");

    }else if (n == 1){
        printf("\t FALSE\n");
    }

    else {
        printf("\t Valor inválido\n");
    }
}

int proposicional2(int n) {

    if (n == 0) {
        printf("\t TRUE\n");

    }else if (n == 1){
        printf("\t FALSE\n");
    }

    else {
        printf("\t Valor inválido\n");
    }
}

int proposicional3(int p, int q) {
    if (p == 1 && q == 1) {
        printf("\t TRUE\n");
    } else if (p >= 2 || q >= 2) {
        printf("\t Valor inválido\n");
    }
     else {
        printf("\t FALSE\n");
    }
}

int proposicional4(int p, int q) {
    if (p == 0 && q == 0) {
        printf("\t FALSE\n");
    } else if (p >= 2 || q >= 2) {
        printf("\t Valor inválido\n");
    }
     else {
        printf("\t TRUE\n");
    }
}

int proposicional5(int p, int q) {
    if (p == 0 && q == 0) {
        printf("\t FALSE\n");
    }  else if (p == 1 && q == 1) {
        printf("\t FALSE\n");
    } else if (p >= 2 || q >= 2) {
        printf("\t Valor inválido\n");
    }
     else {
        printf("\t TRUE\n");
    }
}

int proposicional6(int p, int q) {
    if (p == 1 && q == 0) {
        printf("\t FALSE\n");
    } else if (p >= 2 || q >= 2) {
    printf("\t Valor inválido\n");
    }
     else {
        printf("\t TRUE\n");
    }
}

int proposicional7(int p, int q) {
    if (p == 0 && q == 0 || p == 1 && q == 1) {
        printf("\t TRUE\n");
    } else if (p >= 2 || q >= 2) {
    printf("\t Valor inválido\n");
    }
     else {
        printf("\t FALSE\n");
    }
}

//---------------ANÁLISE COMBINATÓRIA---------------

int permutacaoSimples(int n) {
    int resultado;
    resultado = fatorial(n);
    printf("\t %d", resultado);
}

int arranjoSimples(int n, int k) {
    int resultado;
    int subtracaoNK = n - k;
    int denominador = 1; //(n-k)!
    int numerador; //n!

    numerador = fatorial(n);
    denominador = fatorial(subtracaoNK);

    resultado = numerador / denominador;
    printf("\t %d", resultado);
}

int combinacaoSimples (int n, int k) {
    int numerador = 1;
    int kFatorial = 1;
    int subtracaoNK = n - k;
    int nkFatorial = 1;
    int denominador;
    int resultado;

    numerador = fatorial(n);
    kFatorial = fatorial(k);
    nkFatorial = fatorial(subtracaoNK);

    denominador = kFatorial * nkFatorial;
    resultado = numerador / denominador;
    printf("\t %d", resultado);
}

int arranjoRepeticao (int n, int k) {
    int potencia = 1;
    for (int i = 1; i<=k; i++) {
        potencia = potencia * n;
    }

    printf("\t %d", potencia);
}

int combinacaoRepeticao (int n, int k) {
    int equacao1 = (n + k - 1);
    int equacao2 = (n - 1);
    int fatorialEquacao1 = 1;
    int fatorialEquacao2 = 1;
    int kFatorial = 1;
    int denominador;
    int resultado;

    fatorialEquacao1 = fatorial(equacao1);
    kFatorial = fatorial(k);
    fatorialEquacao2 = fatorial(equacao2);

    denominador = kFatorial * fatorialEquacao2;
    resultado = fatorialEquacao1 / denominador;

    printf("\t %d", resultado);

}

int permutacaoCRepeticao (int n, int k) {
    int resultado, valorRept, resultadoN;
    int denominador = 1;

    for (int i = 1; i <= k; i++) {
        printf("Digite a quantidade de vezes que o elemento se repete: ");
        scanf("%d", &valorRept);
        denominador *= fatorial(valorRept);
    }
    resultadoN = fatorial(n);
    resultado = resultadoN / denominador;
    printf("\t %d", resultado);
}

int fatorial(int n) {
    int fatorial = 1;
    for (int i = n; i > 0; i--) {
        fatorial = fatorial * i;
    }
}
