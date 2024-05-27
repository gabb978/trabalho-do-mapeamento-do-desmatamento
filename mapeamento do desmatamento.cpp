#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
int main()
{
	SetConsoleOutputCP(CP_UTF8);
int interesse,problemas,questoes,jogo;
char r='s',continuar;
while(r=='s'){

	printf("                         BEM-VINDO(A) AO CENTRO DE INFORMAÇÕES DE MAPEAMENTO DO DESMATAMENTO\n");
	printf("\n");
	printf("                                          ESCOLHA UMA DAS ÁREAS AFETADAS\n");
	printf("\n");
	printf("                                                  1- AMAZÔNIA \n");
	printf("                                                  2- PARÁ     \n");
	scanf("%d",&interesse);
		switch(interesse){
			case 1:
 				printf("\n");
				printf("                                                 AMAZÔNIA\n");
				printf("                                 A AMAZÔNIA E A MAIOR FLORESTA TROPICAL DO MUNDO,\n");
				printf("                                 LOCALIZADA NA REGIÃO DA BACIA AMAZÔNICA NA\n");
				printf("                                 AMERICA DO SUL.\n");
				printf("\n");
				printf("                               QUAIS DESSSAS QUESTÕES LHE DESPERTA MAOIR INTERESSE\n");
				printf("                                        1- INFORMAÇÕES DO DESMATAMENTO\n");
				printf("                                        2- INFORMAÇÕES DO REFLORESTAMENTO\n");
				scanf("%d",&questoes);
			switch(questoes){
				case 1:
					printf(" 1- ÁREAS DESMATADAS\n");
					printf("\n");
					printf(" 2- CAUSAS\n");
					printf("\n");
					printf(" 3- TRIBOS AFETADAS\n");
					printf("\n");
					printf(" 4- ESPÉCIES AFETADAS\n");
					printf("\n");
					printf(" 5- ÁRVORES EXTINTAS\n");
					printf("\n");
					printf(" 6- COMO IMPEDIR ISSO\n");
					scanf("%d",&problemas);
				switch(problemas){
					case 1:
						printf("                                    ÁREAS DESMATADAS\n");
						printf(" \n");
						printf("                    EM 2022, FORAM DEVASTADOS 10.573Km² EM TERRITÓRIO \n");
						printf("                    AMAZÔNICO BRASILEIRO, A MAIOR DESTRUIÇÃO DESDE 2008.\n");
						printf("                    NO ENTANTO, E IMPORTANTE RESSALTAR QUE O DESMATAMENTO\n");
						printf("                    NÃO ESTÁ RESTRITO A BAIRROS ESPECÍFICOS, MAIS SIM A ÁREAS\n");
						printf("                    MAIS ÂMPLAS DA FLORESTA\n");
						printf("\n");
						printf(" QUER CONTINUAR O PROGRAMA?\n");
						scanf("%s",&r);
						break;
					case 2:
						printf("                             PRINCIPAIS CAUSAS DO DESMATAMENTO\n"),
						printf("\n");
						printf("                      PRIMEIRO MOTIVO E A IMPUNIDADE DE CRIMES AMBIENTAIS,\n");
						printf("                      ATIVIDADE PECUARIA, PROJETOS DE EXTRAÇÃO DE MADEIRA,\n");
						printf("                      MINERAÇÃO, ESTIMULO A GRILAGEM DE TERRAS PUBLICAS,\n");
						printf("                      RETOMADA DE GRANDES OBRAS.");
						printf("\n");
						printf(" QUER CONTINUAR O PROGRAMA?\n");
						scanf("%s",&r);
						break;
					case 3:
						printf("                             TRIBOS AFETADAS PELO DESMATAMENTO\n");
						printf("\n");
						printf("                       CERCA DE 23 POR CENTO DO TERRITORIO AMAZÔNICO E CONSTITUIDO\n");
						printf("                       POR TERRAS INDIGENAS, AS TERRAS INDIGENAS MAIS AFETADAS PELO\n");
						printf("                       DESMATAMENTO INCLUEM O TERRITORIO YANOMAMI, KAYAPO, MUNDURUKU\n");
						printf("\n");
						printf(" QUER CONTINUAR O PROGRAMA?\n");
						scanf("%s",&r);
						break;
					case 4:
						printf("                           ESPÉCIES AFETADAS PELO DESMATAMENTO\n");
						printf("\n");
						printf("                       AS PRINCIPAIS ESPÉCIES AFETADAS SÃO A ONÇA-PINTADA,\n");
						printf("                       TAMANDUA-BANDEIRA, PEIXE-BOI-DA-AMAZONIA, ARARAJUBA\n");
						printf("                       E ANTA\n");
						printf("\n");
						printf(" QUER CONTINUAR O PROGRAMA?\n");
						scanf("%s",&r);
						break;
					case 5:
						printf("                                     ÁRVORES EXTINTAS\n");
						printf("\n");
						printf("                              MUITAS QUE ESTÃO AMEAÇADAS DE EXTINÇÃO SÃO:\n");
						printf("                              1. ANDIROBA (Carapa Guianensis Aubl)\n");
						printf("                              2. MOGNO BRASILEIRO (Swietenia Macrophylla)\n");
						printf("                              3. PAU-ROSA (Aniba Rosaedora Ducke)\n");
						printf("                              4. CASTANHEIRA(Berthulletia Excelsa)\n");
						break;
					case 6:
						printf("                                  COMO IMPEDIR QUE CONTINUE\n");
						printf("\n");
						printf("                             HÁ CINCO FORMAS DE IMPEDIR O DESMATAMENTO\n");
						printf("                             SUPERVISIONAR E INCENTIVAR O PLANTIO DE ÁRVORES,\n");
						printf("                             FISCALIZAR PARA EVITAR A DERRUBADA DE ÁRVORES JÁ\n");
						printf("                             EXISTENTES, REDUZIR CONSUMO DE PAPEL, DIMINUIR\n");
						printf("                             O CONSUMO DE CARNE, APOIAR EMPRESAS SUSTENTÁVEIS\n");
						printf("\n");
						printf(" QUER CONTINUAR O PROGRAMA?\n");
						scanf("%s",&r);
						break;
}	
}
				case 2:
					printf(" 1- COMO FUNCIONA O REFLORESTAMENTO\n");
					printf("\n");
					printf(" 2- FAÇA O REFLORESTAMENTO NA PRATICA\n");
					scanf("%d",&problemas);
				switch(problemas){
				case 1:
					printf("                               COMO FUNCIONA O REFLORESTAMENTO\n");
					printf("\n");
					printf("                        O REFLORESTAMENTO NADA MAIS É QUE UMA TÉCNCA QUE\n");
					printf("                        RECUPERA ÁREAS QUE FORAM DESMATADAS OU DEGRADADAS,\n");
					printf("                        EXISTE DOIS TIPOS DE REFLORESTAMENTO O URBANO E\n");
					printf("                        RURAL, AS TÉCNICAS USADAS PARA O REFLORESTAMENTO\n");
					printf("                        É NADA MAIS NADA MENOS QUE O PLANTIO DE MUDAS\n");
					printf("\n");
					printf(" QUER PARTICIPAR DO JOGO DO RFLORESTAMENTO\n");
					scanf(" %d",&jogo);
					break;
				case 2:
					printf("");
						}					
}
}
}
