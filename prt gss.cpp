#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
int main()
{
	SetConsoleOutputCP(CP_UTF8);
int interesse,problemas,questoes,questao1, questao2,questao3,questao4;
char jogo,r='s',continuar,r2='s',prosseguir,prosseguir2,prosseguir4,r3='s';
while(r=='s'){

						printf(" 1-COMO FUNCIONA O RESFLORESTAMENTO\n");
						printf("\n");
						printf("2-FAÇA O REFLORESTAMENTO NA PRATICA\n ");
						printf("\n");
	                    scanf("%d",&problemas);
				        switch(problemas){
				        	
				        	
				        	case 1:	
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
						while(r2=='s'){
					
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
								scanf("%S",&r2);
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
											sacnf("%S",&r2);
											break;
										case 2:
										    printf("                         INCORRETO\n"); 
										    printf("          O EUCALYPTUS GLOBULUS, TAMBEM CONEHCIDO COMO GUM ZUL\n");
										    printf("          OU GUM DO SUL, NÃO É NATIVO DO BRASIL. ELE É ENDEMICO\n");
										    printf("          DO SULDESTE DA AUSTRALIA, INCLUINDO A ILHA DA TASMANIA\n");
										    printf("\n");
										    printf(" QUER CONTINUAR O JOGO?\n");
										    scanf("%S",&r2)
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
										   scanf("%d",&prosseguir2);
										   if(prosseguir2=='S'){
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
											scanf("%s",&r2);
											break;
										case 2:
										    printf("                         INCORRETO\n");
											printf("           	O EXCESSO DE CHUVA PODE AFETAR NEGATIVAMENTE O REFLORESTAMENTO\n");
											printf("            DE VARIAS MANEIRAS COMO POR EXEMPLO;\n")
											printf("            EROSÃO DO SOLO, LIXIVIAÇÃO DE NUTRIENTES, DOENÇAS, FUNGOS E ETC...\n");
											printf("\n");
											printf("QUER CONTINUAR O JOGO?\n");
											scanf("%s",&r2);
											break;
								        case 3;
								            printf("                         CORRETO PARABENS!!\n");
								            
												   		
											   }
										   }
										   

										
										   
										   
										   
										   
										   
										   
									
										   
										   
										
										   
										
										    	
											                      
											
											
											
											
											
											
											
											
											
											
											
											
											
											
											
											
											
											
											
											
											
											
											
											
											
											
											
											
											
											
											
											")
											
									}
								}
}
}
}
}