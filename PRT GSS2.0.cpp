#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define INITIAL_TREES 1000
#define YEARS 10
#define SURVIVAL_RATE 0.85
#define NEW_PLANTINGS 200

// Definição da estrutura da área de reflorestamento
typedef struct {
    int ano;
    int numero_arvores;
    int novas_arvores_por_ano;
} Reflorestamento;

// Função para inicializar a área de reflorestamento
void inicializarReflorestamento(Reflorestamento *area, int numero_inicial, int novas_arvores) {
    area->ano = 0;
    area->numero_arvores = numero_inicial;
    area->novas_arvores_por_ano = novas_arvores;
}

// Função para simular um ano de crescimento
void simularAno(Reflorestamento *area) {
    area->ano++;
    area->numero_arvores += area->novas_arvores_por_ano;
}

// Função para exibir o estado atual da área de reflorestamento
void exibirEstado(const Reflorestamento *area) {
    printf("Ano %d: %d árvores\n", area->ano, area->numero_arvores);
}

// Definição da estrutura da área de reflorestamento
typedef struct {
    int ano;
    int numero_arvores;
    int novas_arvores_por_ano;
} Reflorestamento2;

// Função para inicializar a área de reflorestamento
void inicializarReflorestamento(Reflorestamento2 *area, int numero_inicial, int novas_arvores) {
    area->ano = 0;
    area->numero_arvores = numero_inicial;
    area->novas_arvores_por_ano = novas_arvores;
}

// Função para simular um ano de crescimento
void simularAno(Reflorestamento2 *area) {
    area->ano++;
    area->numero_arvores += area->novas_arvores_por_ano;
}

// Função para exibir o estado atual da área de reflorestamento
void exibirEstado(const Reflorestamento2 *area) {
    printf("Ano %d: %d árvores\n", area->ano, area->numero_arvores);
}


void simulate_reforestation(int initial_trees, int years, double survival_rate, int new_plantings) {
    int year;
    int trees = initial_trees;
    
    printf("Ano 0: %d árvores\n", trees);
    
    for (year = 1; year <= years; year++) {
        int survived = trees * survival_rate;
        trees = survived + new_plantings;
        printf("Ano %d: %d árvores\n", year, trees);
    }
}
int main()
{
	SetConsoleOutputCP(CP_UTF8);
int interesse,problemas,questoes,questao1, questao2,questao3,questao4,primeiro,senha,senha2,nome,senha3,senhaincorreta,senha4;
char jogo,r='s',continuar,r2='s',prosseguir,prosseguir2,prosseguir4,r3='s',querparticipar,r4='s',quervisualizar,r5='s';
Reflorestamento area;
    int anos;
    int numero_inicial;
    int novas_arvores_por_ano;
    while(r5=='s'){
printf("_._._._._._._._._._._._.__._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._\n");
printf("\n");
printf("                          BEM-VINDO(A) AO CENTRO DE INFORMAÇÕES DE MAPEAMENTO DO DESMATAMENTO          \n");
printf("\n");
	printf("DIGITE 1 PARA CADASTRAR SUA SENHA:\n");

	scanf("%d",&primeiro);
	switch (primeiro){
		case 1:
			printf("                                          - - - - - - - - -  - - - - - - -\n");
			printf("                                          |  COMECE O CADASTR0 DA SENHA  |\n");
			printf("                                          - - - - - - - - -  - - - - - - - \n");
			printf("INFORME UMA SENHA DO TIPO PIN:\n");
			scanf("%d",&senha);
		case 2:
			printf("\n");
			printf("                                                      SENHA VÁLIDA!!\n");
			printf("CONFIRME A SENHA:\n");
			scanf("%d",&senha2);
	}
	if(senha==senha2){
	
while(r=='s'){
//	ESCOLHA ENTRE AMAZÔNIA E PARÁ
	printf("_._._._._._._._._._._._.__._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._\n");
	printf("\n");
	printf("                          BEM-VINDO(A) AO CENTRO DE INFORMAÇÕES DE MAPEAMENTO DO DESMATAMENTO\n");
	printf("\n");
	printf("                                            ESCOLHA UMA DAS ÁREAS AFETADAS\n");
	printf("\n");
    printf("                                                    -------------\n ");
	printf("                                                 | 1- AMAZÔNIA |\n");
	printf("                                                  | 2- PARÁ     |\n");
	printf("                                                   -------------\n ");
	scanf("%d",&interesse);	    
	//AMAZÔNIA
	switch(interesse){
			case 1:
				printf("                                           ANTES DE COMEÇAR INFORME SUA SENHA\n");
				scanf("%d",&senha3);
				if(senha3==senha){
				//DESMATAMENTO E REFLORESTAMENTO
 				printf("\n");
				printf("                                                     ° AMAZÔNIA °\n");
				printf("\n");
				printf("                         AMAZÔNIA É A MAIOR FLORESTA TROPICAL DO MUNDO, SE ENCONTRA NA REGIÃO\n");
				printf("                         DA BACIA AMAZÔNICA NA AMÉRICA DO SUL, CONSIDERADA A REGIÃO DE MAIOR\n");
				printf("                         BIODIVERSIDADE DO PLANETA E O MAIOR BIOMA BRASILEIRO.\n");
				printf("\n");
				printf("_._._._._._._._._._._._.__._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._\n");
				printf("\n");	
				printf("                                   QUAIS DESSSAS QUESTÕES LHE DESPERTA MAOIR INTERESSE?\n");
				printf("\n");
				printf("                                          ----------------------------------\n");
				printf("                                         | 1- INFORMAÇÕES DO DESMATAMENTO   |\n");
				printf("                                         | 2- INFORMAÇÕES DO REFLORESTAMENTO|\n");
				printf("                                          ----------------------------------\n");
				scanf("%d",&questoes);
			switch(questoes){
				// AREA DO DESMATAMENTO
				case 1:
					// ESCOLHA DA ÁREA DESMATAMENTO
					printf(" 1- ÁREAS DESMATADAS.\n");
					printf("\n");
					printf(" 2- CAUSAS.\n");
					printf("\n");
					printf(" 3- TRIBOS AFETADAS.\n");
					printf("\n");
					printf(" 4- ESPÉCIES AFETADAS.\n");
					printf("\n");
					printf(" 5- ÁRVORES EXTINTAS.\n");
					printf("\n");
					printf(" 6- COMO IMPEDIR ISSO.\n");
					scanf("%d",&problemas);
				switch(problemas){
					// ÁREAS DESMATADAS                            (DESMATAMETO)
					case 1:
						printf("                                                    ° ÁREAS DESMATADAS °\n");
						printf(" \n");
						printf("                          EM 2022, FORAM DEVASTADOS 10.573Km² EM TERRITÓRIO AMAZÔNICO BRASILEIRO,\n");
						printf("                          A MAIOR DESTRUIÇÃO DESDE 2008. NO ENTANTO, E IMPORTANTE RESSALTAR QUE O\n");
						printf("                          DESMATAMENTO NÃO ESTÁ RESTRITO A BAIRROS ESPECÍFICOS, MAIS SIM A ÁREAS\n");
						printf("                          MAIS ÂMPLAS DA FLORESTA.\n");
						printf("\n");
						printf("_._._._._._._._._._._._.__._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._\n");
						printf("\n");	
						printf(" QUER CONTINUAR O PROGRAMA? [s/n]\n");
						scanf("%s",&r);
						break;
					case 2:
						// PRINCIPAIS CAUSAS DO DESMATAMENTO       (DESMATAMENTO)
						printf("                                         ° PRINCIPAIS CAUSAS DO DESMATAMENTO °\n"),
						printf("\n");
						printf("                         PRIMEIRO MOTIVO E A IMPUNIDADE DE CRIMES AMBIENTAIS, ATIVIDADE PECUARIA,\n");
						printf("                         PROJETOS DE EXTRAÇÃO DE MADEIRA, MINARAÇÃO, ESTIMULO A GRILAGEM DE TERRAS\n");
						printf("                         PÚBLICAS, RETOMADA DE GRANDES OBRAS.\n");
						printf("\n");
						printf("_._._._._._._._._._._._.__._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._\n");
						printf("\n");	
						printf(" QUER CONTINUAR O PROGRAMA? [s/n]\n");
						scanf("%s",&r);
						break;
					case 3:
						// TRIBOS AFETADAS PELO DESMATAMENTO      (DESMATAMENTO)
						printf("                                          ° TRIBOS AFETADAS PELO DESMATAMENTO °\n");
						printf("\n");
						printf("                       CERCA DE VINTE E TRÊS POR CENTO DO TERRITÓRIO AMAZÔNICO É CONSTITUIDO POR\n");
						printf("                       TERRAS INDÍGENAS, OS POVOS INDÍGENAS MAIS AFETADOS PELO DESMATAMENTO INCLU-\n");
						printf("                       EM O GRUPOS COMO YANOMAMI, KAYAPÓ, MUNDURUKU, GUARANI, ENTRE OUTROS.\n");
						printf("\n");
						printf("_._._._._._._._._._._._.__._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._\n");
			 			printf("\n");	
						printf(" QUER CONTINUAR O PROGRAMA? [s/n]\n");
						scanf("%s",&r);
						break;
					case 4:
						// ESPÉCIES AFETADAS PELO DESMATAMENTO   (DESMATAMENTO)
						printf("                                          ° ESPÉCIES AFETADAS PELO DESMATAMENTO °\n");
						printf("\n");
						printf("                       AS PRINCÍPAIS ESPÉCIES AFETADAS SÃO A ONÇA-PINTADA, O PEIXE-BOI, TAMANDUÁ-\n");
						printf("                       BANDEIRA, PEIXE-BOI-DA-AMAZONIA, ARARAJUBA, MICO-LEÃO-DOURADO, ANTA, DIVERSAS\n");
						printf("                       DIVERSAS AVES TROPICAIS E UMA INFINIDADE DE ESPÉCIES DE INSETOS E PLANTAS.\n");
						printf("\n");
						printf("_._._._._._._._._._._._.__._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._\n");
					printf("\n");	
						printf(" QUER CONTINUAR O PROGRAMA? [s/n]\n");
						scanf("%s",&r);
						break;
					case 5:
						// ARVORES EXTINTAS                      (DESMATAMENTO)
						printf("                                     ÁRVORES EXTINTAS\n");
						printf("\n");
						printf("                              MUITAS QUE ESTÃO AMEAÇADAS DE EXTINÇÃO SÃO:\n");
						printf("                              1. ANDIROBA (Carapa Guianensis Aubl)\n");
						printf("                              2. MOGNO BRASILEIRO (Swietenia Macrophylla)\n");
						printf("                              3. PAU-ROSA (Aniba Rosaedora Ducke)\n");
						printf("                              4. CASTANHEIRA(Berthulletia Excelsa)\n");
						printf(" QUER CONTINUAR O PROGRAMA? [s/n]\n");
						scanf("%s",&r);
						break;
					case 6:
						// COMO IMPEDIR QUE CONTINUE              (DESMATAMENTO)
						printf("                                  COMO IMPEDIR QUE CONTINUE\n");
						printf("\n");
						printf("                             HÁ CINCO FORMAS DE IMPEDIR O DESMATAMENTO\n");
						printf("                             SUPERVISIONAR E INCENTIVAR O PLANTIO DE ÁRVORES,\n");
						printf("                             FISCALIZAR PARA EVITAR A DERRUBADA DE ÁRVORES JÁ\n");
						printf("                             EXISTENTES, REDUZIR CONSUMO DE PAPEL, DIMINUIR\n");
						printf("                             O CONSUMO DE CARNE, APOIAR EMPRESAS SUSTENTÁVEIS\n");
						printf("\n");
						printf(" QUER CONTINUAR O PROGRAMA? [s/n]\n");
						scanf("%s",&r);
						break;
}
break;
case 2:
					// AREA DO REFLORESTAMENTO                   (REFLORESTAMENTO)
					printf(" 1- COMO FUNCIONA O REFLORESTAMENTO\n");
					printf("\n");
					printf(" 2- FAÇA O REFLORESTAMENTO NA PRATICA\n");
					scanf("%d",&problemas);
				switch(problemas){
				case 1:
					
					// PRIMEIRA OPÇÃO                        (REFLORESTAMENTO)
					printf("                               COMO FUNCIONA O REFLORESTAMENTO\n");
					printf("\n");
					printf("                        O REFLORESTAMENTO NADA MAIS É QUE UMA TÉCNCA QUE\n");
					printf("                        RECUPERA ÁREAS QUE FORAM DESMATADAS OU DEGRADADAS,\n");
					printf("                        EXISTE DOIS TIPOS DE REFLORESTAMENTO O URBANO E\n");
					printf("                        RURAL, AS TÉCNICAS USADAS PARA O REFLORESTAMENTO\n");
					printf("                        É NADA MAIS NADA MENOS QUE O PLANTIO DE MUDAS\n");
					printf("\n");
					
					// QUIZ                                  (REFLORESTAMENTO)
					printf(" QUER PARTICIPAR DO JOGO DO RFLORESTAMENTO [s/n]\n");
					scanf(" %s",&jogo);
					if (jogo=='s'){
						
						// SEGUNDO LOOPING                   (REFLORETAMENTO)
						while(r2=='s'){
							
						// PRIMEIRA PERGUNTA                 (REFLORESTAMENTO)
						printf(" SEJA-BEMVIND(A), AO JOGO DO REFLORESTAMENTO\n");
						printf("\n");
						printf("PRIMEIRA PERGUNTA\n");
						printf("\n");
						printf("O QUE VOCÊ FARIA PARA AJUDAR O REFLORESTAMENTO?\n");
						printf("\n");
						printf("1- DESMATARIA ALGUMA ÁREA\n");
						printf("2- FARIA MAIS EMIÇÃO DE GASES NOCIVOS\n");
						printf("3- PROCURARIA AJUDAR AS CAMPANHAS QUE LUTAM PELO REFLORESTAMENTO\n");
						printf("4- JOGARIA DEJETOS NA RUA OU EM LUGARES INAPROPIADOS\n");
						scanf("%d",&questao1);
						switch(questao1){
							
							//AQUI COMEÇA AS ALTERNATIVAS
							case 1:
								
								// PRIMEIRA ALTERNATIVA              (PRIMEIRA PERGUNTA)
								printf("                                    INCORRETO\n");
								printf("                               DESMATAR UMA AREA ALÉM DE\n");
								printf("                               SER UMA AÇÃO ILEGAL(CRIMINOSA),\n");
								printf("                               PREJUTICA MUITO NO REFLORESTAMENTO\n");
								printf("                               E AJUDA NA PERCA DA BIODIVERSIDADE\n");
								printf("\n");
								printf(" QUER CONTINUAR O JOGO? [s/n]\n");
								scanf("%s",&r2);
								break;
									
							case 2:
								
								// SEGUNDA ALTERNATIVA                (PRIMEIRA PERGUNTA)
								printf("                                    INCORRETO\n");
								printf("                           A EMISSÃO CAUSA MUDANÇAS CLIMATICAS,\n");
								printf("                           ACIDIFICAÇÃO DO SOLO, AUMENTO DE DOENÇAS\n");
								printf("                           DISTORBIOS ECOLOGICOS, ISSO MOSTRA COMO\n");
								printf("                           IMPACTA NEGATIVAMENTE NO REFLORESTAMENTO\n");
								printf("\n");
								printf(" QUER CONTINUAR O JOGO? [s/n]\n");
								scanf("%s",&r2);	
								break;
								
							case 3:
								
								// TERCEIRA ALTERNATIVA                 (PRIMEIRA PERGUNTA)
								printf("                                   CORRETO PARABENS!!\n");
								printf("                            ISSO PODE SIM AJUDAR O REFLORESTAMENTO\n");
								printf("                            COM O AUMENTO DA CONSIENTIZAÇÃO, CAPTAÇÃO\n");
								printf("                            DE RECURSOS, MONITORAMENTO E MANUTENÇÃO\n");
								printf("                            SÃO ESSÊNCIAIS PARA ENFRENTAR A DEGRADAÇÃO\n");
								printf("                            AMBIENTAL.\n");
								printf("\n");
								printf(" QUER PROSSEGUIR? [s/n]\n");
								scanf("%s",&prosseguir);
								
								// SEGUNDA PERGUNTA
								if(prosseguir=='s'){
								printf("SEGUNDA PERGUNTA\n");
								printf("\n");
								printf("QUAL É UM DOS PRINCIPAIS BENEFÍCIOS DO REFLORESTAMENTO?\n");
								printf("\n");
								printf("1- AUMENTO DA EROSÃO DO SOLO\n");
								printf("2- REDUÇÃO DA BIODIVERSIDADE\n");
								printf("3- DIMINUIÇÃO DOS RECURSO HÍDRICOS\n");
								printf("4- MELHORA NA QUALIDADE DO AR E SEQUESTRO DO DE CARBONO\n");
								scanf("%d",&questao2);
								
								// COMEÇO DAS ALTERNATIVAS
								switch(questao2){
									 case 1:
									 	
									 	// PRIMEIRA ALTERNATIVA                   (SEGUNDA PERGUNTA)
									 	printf("                                     INCORRETO\n");
										printf("                           O AUMENTO DA EROSÃO DO SOLO CAUSA A PERDA DA\n");
										printf("                           CAMADA FÉRTIL DO SOLO, DIFICUDADE NA ESTABILIZAÇÃO\n");
										printf("                           DAS MUDAS,EXPOSIÇÃO A CONDIÇÕES CLIMÁTICAS EXTREMAS\n ");
										printf("                           AUMENTO DOS CUSTOS DE REFLORESTAMENTO ENTRE OUTROS...\n ");
										printf("                           (INDIRETA)\n");
										printf("\n");
										printf(" QUER CONTINUAR O JOGO? [s/n]\n");
										scanf("%s",&r2);
										break;
										
									case 2:
										
										// SEGUNDA ALTERNATIVA                    (SEGUNDA PERGUNTA)
										printf("                                     INCORRETO\n");
										printf("                           A REDUÇÃO DA BIODIVERSIDADE PREJUDICA O REFLORESTAMENTO\n");
										printf("                           DE VÁRIAS MENIRAS, AFETANDO A SAÚDE DE ECOSSISTEMA\n");
										printf("                           A RESILIÊNCIA DAS FLORESTAS E A EFICÁCIA DOS ESFORÇOS\n ");
										printf("                           DE RECUPERAÇÃO NO LOCAL\n ");
										printf("                           (INDIRETA)\n");
										printf("\n");
										printf(" QUER CONTINUAR O JOGO? [s/n]\n");
										scanf("%s",&r2);
										break;
										
									case 3:
										
										// TERCEIRA ALTERNATIVA                   (SEGUNDA PERGUNTA)
										printf("                                     INCORRETO\n");
									    printf("                           A DIMINUIÇÃO DOS RECURSO HÍDRICOS PRJUDICA O\n");
										printf("                           REFLORESTAMENTO DE DIVERSAS MENEIRAS, IMPACTANDO\n");
										printf("                           DIRETAMENTE O CRESCIMENTO A SOBREVIVÊNCIA DAS \n ");
										printf("                           ÁRVOVES E ACATANDO MUDANÇAS CLIMÁTICAS EXTREMAS\n ");
										printf("                           (INDIRETA)\n");								
										printf("\n");
										printf(" QUER CONTINUAR O JOGO? [s/n]\n");
										scanf("%s",&r2);
										break;
										
									case 4:
										
										// QUARTA ALTERNATIVA                     (SEGUNDA PERGUNTA)
										printf("                                     CORRETO PARABENS!!\n");
										printf("                           A MELHORA NA QUALIDADE DO AR E O SEQUESTRO DE \n");
										printf("                           CARBONO SÃO FATORES QUE PODEM BENEFICIAR SIGNIFICAMENTE\n");
										printf("                           REFLORESTAMENTO CRIANDO UM AMBIENTE MAIS PROPÍCIO PARA\n ");
										printf("                           O CRESCIEMENTO DAS ARVORES E CONSERVAÇÃO DAS FLORESTAS.\n ");									
										printf("\n");
										printf("QUER PROSSEGUIR?[s/n]\n");
										scanf("%s",&prosseguir2);
										
										// TERCEIRA PERGUNTA
										if(prosseguir2=='s'){
											printf("TERCEIRA PERGUNTA\n");
											printf("\n");
											printf("3- COMO O REFLORESTAMENTO PODE AJUDAR A COMBATER A MUDANÇAS CLIMATICAS?\n");
											printf("\n");
											printf("1- O REFLORESTAMENTO PODE AJUDAR A COMBATER AS MUDANÇAS CLIMATICAS\n");
											printf(" REFLETINDO A LUZ SOLAR DE VOLTA PARA O ESPAÇO, O QUE DIMINUI A TEMPERATURA DA TERRA.\n");
											printf("\n");
											printf("2- O REFLORESTAMENTO PODE AJUDAR A COMBATER AS MUDANÇAS ABSORVENDO DIÓXIDO DE CARBONO\n");
											printf(" DA ATMOSFERA, QUE É UM DOS PRINCIPAIS GASES DE EFEITO ESTUFA. ");
											printf("\n");
											printf("3- TODAS ALTERNATIVAS ESTÃO CORRETAS\n");
											printf("\n");
											scanf("%d",&questao3);
											
											// COMEÇO DAS ALTERNATIVAS      (TERCEIRA PERGUNTA)
											switch (questao3){
												case 1:
													
													// PRIMEIRA ALTERNATIVA
													printf("                                     INCORRETO\n");
													printf("                            NADA PODE REFLETIR A LUZ AO PONTO\n");
													printf("                            DE MUDAR A TEMPERATURA, SÓ A NEVE.\n");
													printf("\n");
													printf(" QUER CONTINUAR O JOGO? [s/n]\n");
													scanf("%s",&r2);
													break;
													
												case 2:
													
													// SEGUNDA ALTERNATIVA
													printf("                                     CORRETO!!\n");
													printf("                         PARABENS VOCÊ ACERTOU,AJDA A COMBATER ABSORVENDO\n");
													printf("                         O DIÓXIDO DE CARBONO.\n");
													printf("QUER PROSSEGUIR?");
													scanf("%s",&prosseguir4);
													
													// QUARTA PERGUNTA
													if(prosseguir4=='s'){
														printf("ULTIMA PERGUNTA\n");
														printf("\n");
														printf("              4- QUAL É A DIFERANÇA ENTRE REFLORESTAMENTO E FLORESTAMENTO?\n");
														printf("\n");
														printf("1-REFLORESTAMENTO É A PRÁTICA DE PLANTAR ÁRVORES EM ÁREAS ONDE A FLORESTA FOI REMOVIDA");
														printf("ENQUANTO FLORESTAMENTO É A CRIAÇÃO DE FLORESTAS EM ÁREAS QUE ANTERIORMENTE NÃO ERAM FLORESTADAS\n");
														printf("\n");
														printf("2-NÃO HÁ DIFERENÇA ENTRE REFLORESTAMENTO E FLORESTAMENTO AMBOS OS TERMOS SIGNIFICAM A MESMA COISA");
														printf("\n");
														printf("3-REFLORESTAMENTO É A CRIAÇÃO DE FLORESTAS EM ÁREAS QUE ANTERIORMENTE NÃO ERAM REFLORESTADAS");
														printf("ENQUANTO FLORESTAMENTO É A PRÁTICA DE PLANTAR ÁRVORES EM ÁREAS ONDE A FLORESTA FOI REMOVIDA");
														printf("\n");
														scanf("%d",&questao4);
														
														// COMEÇO ALTERNATIVA              (QUARTA PERGUNTA)
														switch(questao4){
															case 1:
																
																// PRIMEIRA ALTERNATIVA    (QUARTA PERGUNTA)    
																printf("                  CORRETO!!                        ");
																printf("    O REFLORESTAMENTO CONSISTE NA RESTAURAÇÃO DE ÁREAS DESMATADAS");
																printf("    E O FLORESTAMENTO É A CRIAÇÃO DE NOVAS FLORESTAÇÕES");
																printf("\n");
																printf("                  PARABENS!!!\n");
																printf("                VOCÊ TERMINOU O QUIZ");
																printf("\n");
																printf(" QUER CONTINUAR O PROGRAMA? [s/n]\n");
																scanf("%s",&r);
																break;
																
															case 2:
																
//////															SEGUNDA ALTERNATIVA    (QUARTA PERGUNTA)
																printf("                 INCORRETO!!                      ");
																printf(" O REFLORESTAMENTO E O FLORESTAMENTO NÃO SÃO A MESMA COISA AMBOS");
																printf(" TEM SIGNIFICADOS DIFERENTES");
																printf("\n");
																printf(" QUER CONTINUAR O JOGO? [s/n]\n");
																scanf("%s",&r2);
																break;
																
															case 3:
																
																// TERCEIRA ALTERNATIVA (QUARTA PERGUNTA)
																printf("                 INCORRETO!!                       ");
																printf("  POIS O REFLORESTAMENTO CONSISTE NA RESTAURAÇÃO DE ÁREAS DESMATADAS ");
																printf("  E O FLORESTAMENTO É A CRIAÇÃO DE NOVAS FLORESTACÕES ");
																printf("\n");
																printf(" QUER CONTINUAR O JOGO? [s/n]\n");
																scanf("%s",&r2);
																break;
																
																
														}
														
													}
												case 3:
													
//													TERCEIRA ALTERNATIVA         (TERCEIRA PERGUNTA)
													printf("                                     INCORRETO\n");
													printf("                         A ALTERNATIVA CERTA É A NûMERO 2\n");
													printf("\n");
													printf(" QUER CONTINUAR O JOGO? [s/n]\n");
													scanf("%s",&r2);
													break;
							
							}
							}
							}
							}
							break;
							
									case 4:
//							 			 QUARTA ALTERNATIVA            (PRIMEIRA PERGUNTA)
										printf("                                     INCORRETO\n");
										printf("                           ALÉM DISSO SER UMA AÇÃO ILEGAL(CRIMINOSA)\n");
										printf("                           ISSO TAMBÉM PODE CAUSAR INCHENTES E AGRAVAR\n");
										printf("                           NO DESMATAMENTO E ATRASAR O PROCESSO DE\n");
										printf("                           REFLORESTAMENTO.\n");
										printf("\n");
										printf(" QUER CONTINUAR O JOGO? [s/n]\n");
										scanf("%s",&r2);
										break;
											
}
				
}
}
//                                  SEGUNDA OPÇÃO             (REFLORESTAMENTO)
break;
	  								case 2:
										printf("QUER VISUALIZAR A SIMULAÇÃO DA AMAZÔNIA [s/n]\n");
										scanf("%s",&querparticipar);
										if(querparticipar=='s'){
											printf("\n");
											 srand(time(NULL));
    
    										printf("Simulação de Reflorestamento da Amazônia\n");
   											printf("				========================================\n");
    										simulate_reforestation(INITIAL_TREES, YEARS, SURVIVAL_RATE, NEW_PLANTINGS);
    										printf("\n");
    										printf("QUER REINICIAR O PROGRAMA? [s/n]\n");
											scanf("%s",&r);
    										
											
										}
										else{
											printf("QUER REINICIAR O PROGRAMA? [s/n]\n");
											scanf("%s",&r);
										}
}
}
}
break;
//                                                             PARÁ
case 2:
while (r3=='s'){
	
	                    // ESCOLHA DESMATAMENTO E REFLORESTAMENTO DO PARÁ
						printf("                                           ANTES DE COMEÇAR INFORME SUA SENHA\n");
						scanf("%d",&senha4);
						if(senha4==senha){
						printf("\n");
						printf("                                                  PARA\n");
						printf("                              PARÁ É O MAIOR ESTADO DA REGIÃO DO NORTE DO BRASIL,\n")	;
						printf("                              CONCENTRANDO QUASE A METADE DE SUA POPULAÇÃO.\n");
						printf("                              POSSUI RELEVO POUCO ACIDENTADO E SITUA-SE INTEIRAMENTE\n");
						printf("                              AMAZÔNIA. BANDEIRA DO PARÁ\n.");
						
						printf("\n");
						printf("                              QUAIS DESSSAS QUESTOES LHE DESPERTA MAOIR INTERESSE\n");
						printf("                                       1- INFORMACOES DO DESMATAMENTO\n");
						printf("                                       2- INFORMACOES DO REFLORESTAMENTO\n");
						scanf("%d",&questoes);
			switch(questoes){
			
				case 1:
					
					// ESCOLHA DESMATAMENTO
					printf(" 1- AREAS DESMATADAS\n");
					printf(" 2- CAUSAS\n");
					printf(" 3- TRIBOS AFETADAS\n");
					printf(" 4- ESPECIES AFETADAS\n");
					printf(" 5- ARVORES EXTINTAS\n");
					scanf("%d",&problemas);	
					switch(problemas){
					// ESCOLHAS DESMATAMENTO
				
				// AREAS DESMATADAS                          (DESMATAMENTO)
				case 1:
				printf("                                                     ÁREAS DESMATADAS");
			    printf("\n");
				printf("                                    NOS ÚLTIMOS 12 MESES,DE AGOSTO DE 2021 A JULHO DE 2022,\n");
				printf("                                    FORAM DERRUBADOS 3.858 KM² DE FLORESTAS PARAENSES, O QUE\n");
				printf("                                    REPRESENTA 36% DO TOTAL DEVASTADO NA AMAZÔNIA (10.781KM².\n)");
				printf("                                    ISSO É EQUIVALENTE A QUATRO VEZES O TAMANHO DE BELÉM\n");
				printf("\n");
				printf(" QUE CONTINUAR O PROGRAMA? [s/n]\n");
				scanf("%s",&r3);
				break;
				
				case 2:
				
					// CAUSAS                                  (DESMATAMENTO)
					printf("                                               PRINCIPAIS CAUSAS DO DESMATAMENTO\n");
					printf("\n");
					printf("                                     AS PRINCIPAIS CAUSAS DO DESMATAMENTO SÃO:DENSIDADE POPULACIONAL\n");
					printf("                                     CRESCIMENTO ECONÔMICO; E EXPLORAÇÃO ILEGAL DE RECURSOS NATURAIS\n");
					printf("                                     E ALGUNS ESTADOS COMO TOCANTINS,MARANHÂO E RONDÔNIA JÁ DESMATARAM\n");
					printf("                                     PRATICAMENTE TODAS AS SUAS FLORESTAS.\n");
					printf("\n");
					printf(" QUE CONTINUAR O PROGRAMA? [s/n]\n");
					scanf("%s",&r3);
					break;
					
				case 3:
					
					// TRIBOS AFETADAS                          (DESMATAMENTO)                 
					printf("                                                TRIBOS AFETADAS PELO DESMATAMENTO\n");		
					printf("\n");
					printf("                                     OS TERRITÓRIOS QUE MAIS SOFRERAM COM QUEIMADAS E DESMATAMENTOS ILEGAIS\n");
					printf("                                     NESTE ÚLTIMO SEMESTRE FORAM AS TERRAS INDÍGENAS URU-EU-WAU-WAU(RO),\n");
					printf("                                     JACAREÚBA/KATAWIXI(AM),MUNDURUKU (PA)E ARARIBÓIA (MA).\n");
					printf("\n");
					printf(" QUE CONTINUAR O PROGRAMA? [s/n]\n");
					scanf("%s",&r3);
					break;
					
				case 4:
					
					// ESPRECIES AFETADAS PELO DESMATAMENTO      (DESMATAMENTO)
					printf("                                               ESPECIES AFETADAS PELO DESMATAMENTO\n");
					printf("\n");
					printf("                                      1-GATO-MARACAJÁ(leopardus wiedii)\n");
					printf("                                      2-PEIXE BOI(Trichechus inunguis\n)");
					printf("                                      3-ARARAJUBA(Guaruba guarouba\n)");
					printf("                                      4-GAVIÃO REAL(Harpia harpyja\n)");
					printf("                                      5-ONÇA-PINTADA(Panthera onca\n)");
					printf("                                      6-ONÇA PARDA(Puma concolor)\n");
					printf("                                      7-UACARI(Cacajao hosomi\n)");
					
					printf("\n");
					printf(" QUE CONTINUAR O PROGRAMA? [s/n]\n");
					scanf("%s",&r3);
					break;
					
				case 5:
					
					// ARVORES EXTINTAS                        (DESMATAMENTO)
					printf("                                              ° ARVORES EXTINTAS °\n");
					printf("\n");
					printf("                                      1-ESTOPA\n");
					printf("                                      2-CACHIMBEIRO\n");
					printf("                                      3-PAU-DE-CACHIMBO\n");
					printf("                                      4-PAU-ESTOPA\n");
					printf("                                      5-MUSSAMBÊ\n");
					printf("                                      6-COATINGA\n");
					break;
}			
                break;
//			 REFLORESTAMENTO					
            	case 2:
            	
//            		ALTERNATIVAS REFLORESTAMENTO
					printf(" 1-COMO FUNCIONA O RESFLORESTAMENTO\n");
					printf("\n");
					printf("2-FAÇA O REFLORESTAMENTO NA PRATICA\n ");
					printf("\n");
	                scanf("%d",&problemas);
					switch(problemas){
				        	

		    	case 1:
				
//					PRIMEIRA OPÇÃO REFLORETAMENTO                  (REFLORESTAMENTO)	
					printf("\n");
							printf("                               COMO FUNCIONA O REFLORESTAMENTO\n");
					printf("\n");
					printf("                        O REFLORESTAMENTO NADA MAIS É QUE UMA TÉCNCA QUE\n");
					printf("                        RECUPERA ÁREAS QUE FORAM DESMATADAS OU DEGRADADAS,\n");
					printf("                        EXISTE DOIS TIPOS DE REFLORESTAMENTO O URBANO E\n");
					printf("                        RURAL, AS TÉCNICAS USADAS PARA O REFLORESTAMENTO\n");
					printf("                        É NADA MAIS NADA MENOS QUE O PLANTIO DE MUDAS\n");
					printf("\n");
					printf(" QUER PARTICIPAR DO JOGO DO RFLORESTAMENTO [s/n]\n");
					scanf(" %s",&jogo);
					if (jogo=='s'){
						while(r4=='s'){
					
							printf(" SEJA-BEMVIND(A), AO JOGO DO REFLORESTAMENTO\n");
						printf("\n");
						printf("PRIMEIRA PERGUNTA\n");
						printf("\n");
						printf("QUAL É O PRINCIPAL OBJETIVO DO REFLORESTAMENTO NO PARÁ?\n");
						printf("\n");
						printf("1- AUMENTAR A PRODUÇÃO DE MADEIRA PARA EXPORTAÇÃO.\n");
						printf("2- RECUPERAR ÁREAS DEGRADADS E PRESERVAR A BIODIVERSIDADE.\n");
						printf("3- EXPANDIR ÁREAS URBANAS PARA O DESENVOLVIMENTO ECONÔMICO.\n");
						printf("4- CRIAR RESERVAS PARA CAÇA E PESCA.\n");
						scanf("%d",&questao1);
						switch(questao1){
							case 1:
								printf("                                    INCORRETO\n");
								printf("                      AUMENTAR A PRODUÇÃO DE MADEIRA\n");
								printf("                  PARA EXPORTAÇÃO PODE TER IMPACTOS AMBIENTAIS\n");
								printf("                  NEGATIVOS, É CRUCIAL ADOTAR PRÁTICAS SUSTENTÁVEIS\n");
								printf("                  E REGULAMENTAÇÕES RIGOROSAS PARA EQUILIBRAR ESSES\n");
								printf("                  ASPECTOS\n");
								printf("\n");
								printf(" QUER CONTINUAR O JOGO?\n");
								scanf("%s",&r4);
								break;
							case 2:
								printf("                                    CORRETO PARABENS!!\n");
								printf("                      A RECUPERAÇÃO DE ÁREAS DEGRADADAS É BENÉFICA PARA\n");
								printf("                      A CONSERVAÇÃO DA BIODIVERSIDADE E PARA AS COMUNIDADES\n");
								printf("                      HUMANAS\n");
								printf("\n");
								printf(" QUER PROSSEGUIR?\n");
								scanf("%s",&prosseguir);
								if(prosseguir=='s'){
									printf("SEGUNDA PERGUNTA\n");
									printf("\n");
									printf("QUAL É UMA DAS PRINCIPAIS ESPÉCIES NATIVAS UTILIZADAS NO REFLORESTAMENTO NO PARÁ?");
									printf("\n");
									printf("1- PINUS ELLIOTTII\n");
									printf("2- EUCALYPTUS GLOBULUS\n");
									printf("3- BERTHOLLETIA EXCELSA(CASTANHEIRA-DO-BRASIL)\n");
									printf("4- SEQUIA SEMPERVIRENS\n");
									scanf("%d",&questao2);
									switch(questao2){
										case 1:
											printf("                         INCORRETO\n");
											printf("          O SOLO DO ESTADO DO PARÁ É DIVERSIFICADO, VARIANDO DE\n");
											printf("          ACORDO COM AS CONDIÇÕES CLIMÁTICAS, GEOLÓGICAS E GEOMORFOLÓGICAS.\n");
											printf("          GRANDE PARTE DA ÁREA É CONSTITUÍDA POR SOLOS DE BAIXA\n");
											printf("          FERTILIDADE QUÍMICA\n");
											printf("\n");
											printf(" QUER CONTINUAR O JOGO?\n");
											scanf("%s",&r4);
											break;
										case 2:
										    printf("                         INCORRETO\n"); 
										    printf("          O EUCALYPTUS GLOBULUS, TAMBEM CONEHCIDO COMO GUM ZUL\n");
										    printf("          OU GUM DO SUL, NÃO É NATIVO DO BRASIL. ELE É ENDEMICO\n");
										    printf("          DO SULDESTE DA AUSTRALIA, INCLUINDO A ILHA DA TASMANIA\n");
										    printf("\n");
										    printf(" QUER CONTINUAR O JOGO?\n");
										    scanf("%s",&r4);
										    break;
										case 3:
											printf("                          CORRETO PARABENS!!");
											printf("           A CASTANHEIRA-DO-PARÁ(BERTHOLLETIA EXCELSA)É NATIVA DA AMAZÔNIA E,\n");
											printf("           ESPECIFICAMENTE, DOESTADO DO PARÁ, NO BRASIL. ESSA MAJESTOSA ÁRVORE\n");
											printf("           É ENCONTRADA EM FLORESTAS AO LONGO DOS GRANDES RIOS, COMO O AMAZONAS,\n");
											printf("           O NEGRO, O ORINOCO E O ARAGUAIA. INFELIZMENTE, ELA ESTÁ AMEAÇADA DE\n");
											printf("           EXTINÇÃO DEVIDO AO DESMATAMENTO.\n");
											printf("\n");
											printf(" QUER PROSSEGUIR?\n");
											scanf("%s",&prosseguir2);
										if(prosseguir2=='s'){
										   	printf("TERCEIRA PERGUNTA\n");
										   	printf("\n");
										   	printf("QUAL É UM DOS DESAFIOS ENFRENTADOS PELOS PROJETOS DE REFLORESTAMENTO NO PARÁ?\n");
										   	printf("\n");
										   	printf("1- A FALTA DE INTERESSE DAS COMUNIDADES LOCAIS.\n");
										   	printf("2- O EXCESSO DE CHUVAS DURANTE O ANO TODO.\n");
										   	printf("3- A COMPETIÇÃO COM A PECUÁRIA E AGRICULTURA EXTENSIVA.\n");
										   	printf("4- A AUSÊNCIA DE ÁREAS DESMATADAS NA REGIÃO.\n");
										   	scanf("%d",&questao3);
										   	switch(questao3){
										case 1:
										   	printf("                         INCORRETO\n");
											printf("           A FALTA DE INTERESSE DA COMUNIDADE PODE DEIXAR MAIS DIFICIL O\n");
											printf("           REFLORESTAMENTO,\n");
											printf("\n");
											printf(" QUER CONTINUAR O JOGO?\n");
											scanf("%s",&r4);
											break;
										case 2:
										    printf("                         INCORRETO\n");
											printf("           	O EXCESSO DE CHUVA PODE AFETAR NEGATIVAMENTE O REFLORESTAMENTO\n");
											printf("            DE VARIAS MANEIRAS COMO POR EXEMPLO;\n");
											printf("            EROSÃO DO SOLO, LIXIVIAÇÃO DE NUTRIENTES, DOENÇAS, FUNGOS E ETC...\n");
											printf("\n");
											printf("QUER CONTINUAR O JOGO?\n");
											scanf("%s",&r4);
											break;
								        case 3:
								            printf("                         CORRETO PARABENS!!\n");
								            printf("              A BUSCA POR SOLUÇÕES QUE CONCILIEM A PRODUÇÃO AGROPECUARIA COM A\n");
								            printf("              PRESERVAÇÃO AMBIENTAL É FUNDAMENTAL PARA ENFRENTAR ESSE DESAFIO E PROMOVER\n");
								            printf("              REFLORESTAMENTO NO PARÁ.\n");
								            scanf("\n");
								            printf("                      PARABENS VOCE TERMINOU O QUIZ");
								            printf("\n");
								            printf("QUER CONTINUAR O PROGRAMA? [s/n]");
								            scanf("%s",&r);
								            break;
								        case 4:
										    printf("                          INCORRETO\n");
											printf("             A FALTA DE ÁREAS DESMATADAS NO PARÁ DA UMA GRANDE AJUDA NO REFLORESTAMENTO\n");
											printf(" QUER CONTINUAR O JOGO?\n");
											scanf("%s",&r4);
											break;   		
											   }
										}
									}
									break;
										case 3:
//											PRIMEIRA ALTERNATIVA         (PRIMEIRA PERGUNTA)
										  	printf("                                     INCORRETO\n");
											printf("                         A ALTERNATIVA CERTA É A NûMERO 2\n");
											printf("\n");
											printf(" QUER CONTINUAR O JOGO? [s/n]\n");
											scanf("%s",&r2);
											break;
										case 4:		
//											PRIMEIRA ALTERNATIVA         (PRIMEIRA PERGUNTA)
										    printf("                                     INCORRETO\n");
											printf("                         A ALTERNATIVA CERTA É A NûMERO 2\n");
											printf("\n");
											printf(" QUER CONTINUAR O JOGO? [s/n]\n");
											scanf("%s",&r4);
											break;
												}
											}
											break;
										case 4:
//											SEGUNDA ALTERNATIVA         (SEGUNDA PERGUNTA)
											printf("                                     INCORRETO\n");
											printf("                         A ALTERNATIVA CERTA É A NûMERO 3\n");
											printf("\n");
											printf(" QUER CONTINUAR O JOGO? [s/n]\n");
											scanf("%s",&r4);
											break; 
}
}

break;
										case 2:
											printf("                             QUER VISUALIZAR A REFLORESTAÇÃO DO PARÁ? [s/n]\n");
											scanf("%s",&quervisualizar);
											if(quervisualizar=='s'){
												printf("\n");
												printf("Simulador de Reflorestamento no Pará\n");
   		 										printf("Digite o número inicial de árvores: ");
    											scanf("%d", &numero_inicial);
    											printf("Digite o número de novas árvores plantadas por ano: ");
    											scanf("%d", &novas_arvores_por_ano);
    											printf("Digite o número de anos a ser simulado: ");
    											scanf("%d", &anos);

    											// Inicializa a área de reflorestamento
    											inicializarReflorestamento(&area, numero_inicial, novas_arvores_por_ano);

    											// Simula ano a ano e exibe o estado
    											for (int i = 0; i < anos; i++) {
        										simularAno(&area);
        										exibirEstado(&area);
        										
}

    											return 0;
}
}
}
}
}
}
}
}
}
}
