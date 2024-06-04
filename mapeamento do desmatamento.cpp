#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
int main()
{
	SetConsoleOutputCP(CP_UTF8);
int interesse,problemas,questoes,questao1, questao2,questao3,questao4;
char jogo,r='s',continuar,r2='s',prosseguir,prosseguir2,prosseguir4,r3='s';
while(r=='s'){
//ESCOLHA ENTRE AMAZÔNIA E PARÁ
	printf("                         BEM-VINDO(A) AO CENTRO DE INFORMAÇÕES DE MAPEAMENTO DO DESMATAMENTO\n");
	printf("\n");
	printf("                                          ESCOLHA UMA DAS ÁREAS AFETADAS\n");
	printf("\n");
	printf("                                                  1- AMAZÔNIA \n");
	printf("                                                  2- PARÁ     \n");
	scanf("%d",&interesse);
	    //AMAZÔNIA
		switch(interesse){
			case 1:
				//DESMATAMENTO E REFLORESTAMENTO
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
				// AREA DO DESMATAMENTO
				case 1:
					// ESCOLHA DA ÁREA DESMATAMENTO
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
					// ÁREAS DESMATADAS                            (DESMATAMETO)
					case 1:
						printf("                                    ÁREAS DESMATADAS\n");
						printf(" \n");
						printf("                    EM 2022, FORAM DEVASTADOS 10.573Km² EM TERRITÓRIO \n");
						printf("                    AMAZÔNICO BRASILEIRO, A MAIOR DESTRUIÇÃO DESDE 2008.\n");
						printf("                    NO ENTANTO, E IMPORTANTE RESSALTAR QUE O DESMATAMENTO\n");
						printf("                    NÃO ESTÁ RESTRITO A BAIRROS ESPECÍFICOS, MAIS SIM A ÁREAS\n");
						printf("                    MAIS ÂMPLAS DA FLORESTA\n");
						printf("\n");
						printf(" QUER CONTINUAR O PROGRAMA? [s/n]\n");
						scanf("%s",&r);
						break;
					case 2:
						// PRINCIPAIS CAUSAS DO DESMATAMENTO       (DESMATAMENTO)
						printf("                             PRINCIPAIS CAUSAS DO DESMATAMENTO\n"),
						printf("\n");
						printf("                      PRIMEIRO MOTIVO E A IMPUNIDADE DE CRIMES AMBIENTAIS,\n");
						printf("                      ATIVIDADE PECUARIA, PROJETOS DE EXTRAÇÃO DE MADEIRA,\n");
						printf("                      MINERAÇÃO, ESTIMULO A GRILAGEM DE TERRAS PUBLICAS,\n");
						printf("                      RETOMADA DE GRANDES OBRAS.");
						printf("\n");
						printf(" QUER CONTINUAR O PROGRAMA? [s/n]\n");
						scanf("%s",&r);
						break;
					case 3:
						// TRIBOS AFETADAS PELO DESMATAMENTO      (DESMATAMENTO)
						printf("                             TRIBOS AFETADAS PELO DESMATAMENTO\n");
						printf("\n");
						printf("                       CERCA DE 23 POR CENTO DO TERRITORIO AMAZÔNICO E CONSTITUIDO\n");
						printf("                       POR TERRAS INDIGENAS, AS TERRAS INDIGENAS MAIS AFETADAS PELO\n");
						printf("                       DESMATAMENTO INCLUEM O TERRITORIO YANOMAMI, KAYAPO, MUNDURUKU\n");
						printf("\n");
						printf(" QUER CONTINUAR O PROGRAMA? [s/n]\n");
						scanf("%s",&r);
						break;
					case 4:
						// ESPÉCIES AFETADAS PELO DESMATAMENTO   (DESMATAMENTO)
						printf("                           ESPÉCIES AFETADAS PELO DESMATAMENTO\n");
						printf("\n");
						printf("                       AS PRINCIPAIS ESPÉCIES AFETADAS SÃO A ONÇA-PINTADA,\n");
						printf("                       TAMANDUA-BANDEIRA, PEIXE-BOI-DA-AMAZONIA, ARARAJUBA\n");
						printf("                       E ANTA\n");
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
}
											
}
break;
//                                                             PARÁ
case 2:
while (r3=='s'){
	
	                    // ESCOLHA DESMATAMENTO E REFLORESTAMENTO DO PARÁ
	
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
					printf("                                               ARVORES EXTINTAS\n");
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
					printf("\n");
}
}
}
}
}
}
