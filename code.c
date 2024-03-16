#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int main()
{
	/*
	? O programa avisa ao usuário que ele deve pensar em um número de 1 a 100
? O programa faz uma sequência de perguntas para o usuário. As perguntas devem ser do tipo:
-O número é maior que 10 e menor ou igual a 20? -O número é 83?
? O usuário só pode responder ‘S’ (sim) ou ‘N’ (não).
O grande desafio é fazer um programa cuja estratégia permita sempre adivinhar o número fazendo
até 7 perguntas.
	*/
	
	char resposta;
	printf("pense em um numero de 0 a 100\n");
	
	printf("o numero e maior que 50? [S/N]\n");
	scanf("%s",&resposta);
	resposta = toupper(resposta);
		if(resposta != 'S' && resposta != 'N'){
			printf("digite [S/N]\n");
			return 1;
		}
		if (resposta == 'S'){
			fflush(stdin);
			printf("o numero e maior que 75? [S/N]\n");
			scanf("%s",&resposta);
			resposta = toupper(resposta);
			
			if(resposta != 'S' && resposta != 'N'){
			printf("digite [S/N]\n");
			return 1;
			}
			if(resposta == 'S'){
				fflush(stdin);
				printf("o numero e maior que 90? [S/N]\n");
				scanf("%s",&resposta);
				resposta = toupper(resposta);
				
				if(resposta != 'S' && resposta != 'N'){
				printf("digite [S/N]\n");
				return 1;
				}
				if(resposta == 'S'){
					fflush(stdin);
					printf("o numero e par? [S/N]\n");
					scanf("%s",&resposta);
					resposta = toupper(resposta);
					
					if(resposta != 'S' && resposta != 'N'){
					printf("digite [S/N]\n");
					return 1;
					}	
					if(resposta == 'S'){
						fflush(stdin);
						printf("o numero e maior que 95? [S/N]\n");
						scanf("%s",&resposta);
						fflush(stdin);
						resposta = toupper(resposta);
						
						if(resposta != 'S' && resposta != 'N'){
						printf("digite [S/N]\n");
						return 1;
						}
						if(resposta == 'S'){
							fflush(stdin);
							printf("o numero e 96? [S/N]\n");
							scanf("%s",&resposta);
							resposta = toupper(resposta);
							
							if(resposta != 'S' && resposta != 'N'){
							printf("digite [S/N]\n");
							return 1;
							}
							if(resposta == 'S'){
								printf("vc pensou no numero 96\n");
							}else{
								printf("vc pensou no numero 98\n");
							}
						}else{
							fflush(stdin);
							printf("o numero e 94? [S/N]\n");
							scanf("%s",&resposta);
							resposta = toupper(resposta);
							
							if(resposta != 'S' && resposta != 'N'){
							printf("digite [S/N]\n");
							return 1;
							}
							if(resposta == 'S'){
								printf("vc pensou no numero 94\n");
							}else{
								printf("vc pensou no numero 92\n");
							}
						}
					}else{
						fflush(stdin);
						printf("o numero e maior que 94? [S/N]\n");
						scanf("%s",&resposta);
						fflush(stdin);
						resposta = toupper(resposta);
						
						if(resposta != 'S' && resposta != 'N'){
						printf("digite [S/N]\n");
						return 1;
						}
						if(resposta == 'S'){
							fflush(stdin);
							printf("o numero e 95? [S/N]\n");
							scanf("%s",&resposta);
							resposta = toupper(resposta);
							
							if(resposta != 'S' && resposta != 'N'){
							printf("digite [S/N]\n");
							return 1;
							}
							if(resposta == 'S'){
								printf("vc pensou no numero 95\n");
							}else if (resposta == 'N'){
								fflush(stdin);
								printf("o numero e 97? [S/N]\n");
								scanf("%s",&resposta);
								resposta = toupper(resposta);
								
								if(resposta != 'S' && resposta != 'N'){
								printf("digite [S/N]\n");
								return 1;
								}
								if(resposta == 'S'){
									printf("vc pensou no numero 97\n");
								}else{
									printf("vc pensou no numero 99\n");
								}
							}
						}else{
							fflush(stdin);
							printf("o numero e 93? [S/N]\n");
							scanf("%s",&resposta);
							resposta = toupper(resposta);
							
							if(resposta != 'S' && resposta != 'N'){
							printf("digite [S/N]\n");
							return 1;
							}
							if(resposta == 'S'){
								printf("vc pensou no numero 93\n");
							}else{
								printf("vc pensou no numero 91\n");
							}
						}
					}
					//se o numero for menor que 90 e maior que 75
				}else{
					fflush(stdin);
					printf("o numero e maior que 80? [S/N]\n");
					scanf("%s",&resposta);
					resposta = toupper(resposta);
					
					if(resposta != 'S' && resposta != 'N'){
					printf("digite [S/N]\n");
					return 1;
					}
					if(resposta == 'S'){
						fflush(stdin);
						printf("o numero e par? [S/N]\n");
						scanf("%s",&resposta);
						resposta = toupper(resposta);
						
						if(resposta != 'S' && resposta != 'N'){
						printf("digite [S/N]\n");
						return 1;
						}
						if(resposta == 'S'){
							fflush(stdin);
							printf("o numero e maior que 85? [S/N]\n");
							scanf("%s",&resposta);
							resposta = toupper(resposta);
							
							if(resposta != 'S' && resposta != 'N'){
							printf("digite [S/N]\n");
							return 1;
							}
							if(resposta == 'S'){
								fflush(stdin);
								printf("o numero e 86? [S/N]\n");
								scanf("%s",&resposta);
								resposta = toupper(resposta);
								
								if(resposta != 'S' && resposta != 'N'){
								printf("digite [S/N]\n");
								return 1;
								}
								if(resposta == 'S'){
									printf("vc pensou no numero 86\n");
								}else{
									fflush(stdin);
									printf("o numero e 88? [S/N]\n");
									scanf("%s",&resposta);
									resposta = toupper(resposta);
									
									if(resposta != 'S' && resposta != 'N'){
									printf("digite [S/N]\n");
									return 1;
									}
									if(resposta == 'S'){
										printf("vc pensou no numero 88\n");
									}else{
										printf("vc pensou no numero 90\n");
									}
								}
							}else{
								fflush(stdin);
								printf("o numero e 84? [S/N]\n");
								scanf("%s",&resposta);
								resposta = toupper(resposta);
								
								if(resposta != 'S' && resposta != 'N'){
								printf("digite [S/N]\n");
								return 1;
								}
								if(resposta == 'S'){
									printf("vc pensou no numero 84\n");
								}else{
									printf("vc pensou no numero 82\n");
								}
							}
							//não é par
						}else{
							fflush(stdin);
							printf("o numero e maior que 84? [S/N]\n");
							scanf("%s",&resposta);
							resposta = toupper(resposta);
							
							if(resposta != 'S' && resposta != 'N'){
							printf("digite [S/N]\n");
							return 1;
							}
							if(resposta == 'S'){
								fflush(stdin);
								printf("o numero e 85? [S/N]\n");
								scanf("%s",&resposta);
								resposta = toupper(resposta);
								
								if(resposta != 'S' && resposta != 'N'){
								printf("digite [S/N]\n");
								return 1;
								}
								if(resposta == 'S'){
									printf("vc pensou no numero 85\n");
								}else{
									fflush(stdin);
									printf("o numero e 87? [S/N]\n");
									scanf("%s",&resposta);
									resposta = toupper(resposta);
									
									if(resposta != 'S' && resposta != 'N'){
									printf("digite [S/N]\n");
									return 1;
									}
									if(resposta == 'S'){
										printf("vc pensou no numero 87\n");
									}else{
										printf("vc pensou no numero 89\n");
									}
								}
							}else{
								fflush(stdin);
								printf("vc pensou no numero 83? [S/N]\n");
								scanf("%s",&resposta);
								resposta = toupper(resposta);
								
								if(resposta != 'S' && resposta != 'N'){
								printf("digite [S/N]\n");
								return 1;
								}
								if(resposta == 'S'){
									printf("vc pensou no numero 83\n");
								}else{
									printf("vc pensou no numero 81\n");
								}
							}
						}
						//menor que 80 e maior que 75
					}else{
						fflush(stdin);
						printf("o numero e par? [S/N]\n");
						scanf("%s",&resposta);
						resposta = toupper(resposta);
						
						if(resposta != 'S' && resposta != 'N'){
						printf("digite [S/N]\n");
						return 1;
						}
						if(resposta == 'S'){
							fflush(stdin);
						 	printf("o numero e 76? [S/N]\n");
							scanf("%s",&resposta);
							resposta = toupper(resposta);
							
							if(resposta != 'S' && resposta != 'N'){
							printf("digite [S/N]\n");
							return 1;
							}
							if(resposta == 'S'){
							 	printf("vc pensou no numero 76\n");
							}else{
								fflush(stdin);
						 		printf("o numero e 78? [S/N]\n");
								scanf("%s",&resposta);
								resposta = toupper(resposta);
								
								if(resposta != 'S' && resposta != 'N'){
								printf("digite [S/N]\n");
								return 1;
								}
								if(resposta == 'S'){
									printf("vc pensou no numero 78\n");
								}else{
									printf("vc pensou no numero 80\n");
								}
							}
						}else{
							fflush(stdin);
						 	printf("o numero e 77? [S/N]\n");
							scanf("%s",&resposta);
							resposta = toupper(resposta);
							
							if(resposta != 'S' && resposta != 'N'){
							printf("digite [S/N]\n");
							return 1;
							}
							if(resposta == 'S'){
								printf("vc pensou no numero 77\n");
							}else{
								printf("vc pensou no numero 79\n");
							}
						}
					}
				}
				//menor ou igual a 75 e maior que 50	
			}else{
				fflush(stdin);
				printf("o numero e maior que 65? [S/N]\n");
				scanf("%s",&resposta);
				resposta = toupper(resposta);
				
				if(resposta != 'S' && resposta != 'N'){
				printf("digite [S/N]\n");
				return 1;
				}
				if(resposta == 'S'){
					fflush(stdin);
					printf("o numero e maior que 70? [S/N]\n");
					scanf("%s",&resposta);
					resposta = toupper(resposta);
					if(resposta != 'S' && resposta != 'N'){
					printf("digite [S/N]\n");
					return 1;
					}
					if(resposta == 'S'){
						fflush(stdin);
						printf("o numero e par? [S/N]\n");
						scanf("%s",&resposta);
						resposta = toupper(resposta);
						
						if(resposta != 'S' && resposta != 'N'){
						printf("digite [S/N]\n");
						return 1;
						}
						if(resposta == 'S'){
							fflush(stdin);
						 	printf("o numero e 72? [S/N]\n");
							scanf("%s",&resposta);
							resposta = toupper(resposta);
							
							if(resposta != 'S' && resposta != 'N'){
							printf("digite [S/N]\n");
							return 1;
							}
							if(resposta == 'S'){
								printf("vc pensou no numero 72\n");
							}else{
								printf("vc pensou no numero 74\n");
							}
						}else{
							fflush(stdin);
						 	printf("o numero e 71? [S/N]\n");
							scanf("%s",&resposta);
							resposta = toupper(resposta);
							
							if(resposta != 'S' && resposta != 'N'){
							printf("digite [S/N]\n");
							return 1;
							}
							if(resposta == 'S'){
								printf("vc pensou no numero 71\n");
							}else{
								fflush(stdin);
						 		printf("o numero e 73? [S/N]\n");
								scanf("%s",&resposta);
								resposta = toupper(resposta);
								
								if(resposta != 'S' && resposta != 'N'){
								printf("digite [S/N]\n");
								return 1;
								}
								if(resposta == 'S'){
									printf("vc pensou no numero 73\n");
						 		}else{
						 			printf("vc pensou no numero 75\n");
								}
							}
						}
						// 66 a 70
					}else{
						fflush(stdin);
						printf("o numero e par? [S/N]\n");
						scanf("%s",&resposta);
						resposta = toupper(resposta);
						
						if(resposta != 'S' && resposta != 'N'){
						printf("digite [S/N]\n");
						return 1;
						}
						if(resposta ==  'S'){
							fflush(stdin);
						 	printf("o numero e 66? [S/N]\n");
							scanf("%s",&resposta);
							resposta = toupper(resposta);
							
							if(resposta != 'S' && resposta != 'N'){
							printf("digite [S/N]\n");
							return 1;
							}
							if(resposta == 'S'){
								printf("vc pensou no numero 66\n");
							}else{
								fflush(stdin);
						 		printf("o numero e 68? [S/N]\n");
								scanf("%s",&resposta);
								resposta = toupper(resposta);
								
								if(resposta != 'S' && resposta != 'N'){
								printf("digite [S/N]\n");
								return 1;
								}
								if(resposta == 'S'){
									printf("vc pensou no numero 68\n");
								}else{
									printf("vc pensou no numero 70\n");
								}
							}
						}else{
							fflush(stdin);
						 	printf("o numero e 67? [S/N]\n");
							scanf("%s",&resposta);
							resposta = toupper(resposta);
							
							if(resposta != 'S' && resposta != 'N'){
							printf("digite [S/N]\n");
							return 1;
							}
							if(resposta == 'S'){
								printf("vc pensou no numero 67\n");
							}else{
								printf("vc pensou no numero 69\n");
							}
						}
					}
					//maior que 50 e menor e igual a 65
				}else{
					fflush(stdin);
					printf("o numero e maior que 60? [S/N]\n");
					scanf("%s",&resposta);
					resposta = toupper(resposta);
					
					if(resposta != 'S' && resposta != 'N'){
					printf("digite [S/N]\n");
					return 1;
					}
					if(resposta == 'S'){
						fflush(stdin);
						printf("o numero e par? [S/N]\n");
						scanf("%s",&resposta);
						resposta = toupper(resposta);
						
						if(resposta != 'S' && resposta != 'N'){
						printf("digite [S/N]\n");
						return 1;
						}
						if(resposta == 'S'){
							fflush(stdin);
						 	printf("o numero e 62? [S/N]\n");
							scanf("%s",&resposta);
							resposta = toupper(resposta);
							
							if(resposta != 'S' && resposta != 'N'){
							printf("digite [S/N]\n");
							return 1;
							}
							if(resposta == 'S'){
								printf("vc pensou no numero 62\n");
							}else{
								printf("vc pensou no numero 64\n");
							}
						}else{
							fflush(stdin);
						 	printf("o numero e 61? [S/N]\n");
							scanf("%s",&resposta);
							resposta = toupper(resposta);
							
							if(resposta != 'S' && resposta != 'N'){
							printf("digite [S/N]\n");
							return 1;
							}
							if(resposta == 'S'){
								printf("vc pensou no numero 61\n");
							}else{
								fflush(stdin);
						 		printf("o numero e 63? [S/N]\n");
								scanf("%s",&resposta);
								resposta = toupper(resposta);
								
								if(resposta != 'S' && resposta != 'N'){
								printf("digite [S/N]\n");
								return 1;
								}
								if(resposta == 'S'){
									printf("vc pensou no numero 63\n");
								}else{
									printf("vc pensou no numero 65\n");
								}
							}
						}
						//maior que 50 e menor igual a 60
					}else{
						fflush(stdin);
						printf("o numero e par? [S/N]\n");
						scanf("%s",&resposta);
						resposta = toupper(resposta);
						
						if(resposta != 'S' && resposta != 'N'){
						printf("digite [S/N]\n");
						return 1;
						}
						if(resposta == 'S'){
							fflush(stdin);
							printf("o numero e maior que 55? [S/N]\n");
							scanf("%s",&resposta);
							resposta = toupper(resposta);
							
							if(resposta != 'S' && resposta != 'N'){
							printf("digite [S/N]\n");
							return 1;
							}
							if(resposta == 'S'){
								fflush(stdin);
						 		printf("o numero e 56? [S/N]\n");
								scanf("%s",&resposta);
								resposta = toupper(resposta);
								
								if(resposta != 'S' && resposta != 'N'){
								printf("digite [S/N]\n");
								return 1;
								}
								if(resposta == 'S'){
									printf("vc pensou no numero 56\n");
								}else{
									fflush(stdin);
						 			printf("o numero e 58? [S/N]\n");
									scanf("%s",&resposta);
									resposta = toupper(resposta);
									
									if(resposta != 'S' && resposta != 'N'){
									printf("digite [S/N]\n");
									return 1;
									}
									if(resposta == 'S'){
										printf("vc pensou no numero 58\n");
									}else{
										printf("vc pensou no numero 60\n");
									}
								}
							}
						}else{
							fflush(stdin);
							printf("o numero e maior que 54? [S/N]\n");
							scanf("%s",&resposta);
							resposta = toupper(resposta);
							
							if(resposta != 'S' && resposta != 'N'){
							printf("digite [S/N]\n");
							return 1;
							}
							if(resposta == 'S'){
								fflush(stdin);
						 		printf("o numero e 55? [S/N]\n");
								scanf("%s",&resposta);
								resposta = toupper(resposta);
								
								if(resposta != 'S' && resposta != 'N'){
								printf("digite [S/N]\n");
								return 1;
								}
								if(resposta == 'S'){
									printf("vc pensou no numero 55\n");
								}else{
									fflush(stdin);
						 			printf("o numero e 57? [S/N]\n");
									scanf("%s",&resposta);
									resposta = toupper(resposta);
									
									if(resposta != 'S' && resposta != 'N'){
									printf("digite [S/N]\n");
									return 1;
									}
									if(resposta == 'S'){
										printf("vc pensou no numero 57\n");
									}else{
										printf("vc pensou no numero 59\n");
									}
								}
							}else{
								fflush(stdin);
						 		printf("o numero e 53? [S/N]\n");
								scanf("%s",&resposta);
								resposta = toupper(resposta);
								
								if(resposta != 'S' && resposta != 'N'){
								printf("digite [S/N]\n");
								return 1;
								}
								if(resposta == 'S'){
									printf("vc pensou no numero 53\n");
								}else{
									printf("vc pensou no numero 51\n");
								}
							}
						}
					}
				}
			}
		}
		//menor que e igual á 50 
		else{
			if(resposta == 'N'){
				fflush(stdin);
				printf("o numero e maior que 40? [S/N]\n");
				scanf("%s",&resposta);
				resposta = toupper(resposta);
				
				if(resposta != 'S' && resposta != 'N'){
				printf("digite [S/N]\n");
				return 1;
				}
				if(resposta == 'S'){
					fflush(stdin);
					printf("o numero e par?[S/N]\n");
					scanf("%s",&resposta);
					resposta = toupper(resposta);
					
					if(resposta != 'S' && resposta != 'N'){
					printf("digite [S/N]\n");
					return 1;
					}
					if(resposta == 'S'){
						fflush(stdin);
						printf("o numero e maior que 45? [S/N]\n");
						scanf("%s",&resposta);
						fflush(stdin);
						resposta = toupper(resposta);
						
						if(resposta != 'S' && resposta != 'N'){
						printf("digite [S/N]\n");
						return 1;
						}
						if(resposta == 'S'){
							fflush(stdin);
							printf("o numero e 46? [S/N]\n");
							scanf("%s",&resposta);
							resposta = toupper(resposta);
							
							if(resposta != 'S' && resposta != 'N'){
							printf("digite [S/N]\n");
							return 1;
							}
							if(resposta == 'S'){
								printf("vc pensou no numero 46\n");
							}else{
								fflush(stdin);
								printf("o numero e 48? [S/N]\n");
								scanf("%s",&resposta);
								resposta = toupper(resposta);
								
								if(resposta != 'S' && resposta != 'N'){
								printf("digite [S/N]\n");
								return 1;
								}
								if(resposta == 'S'){
									printf("vc pensou no numero 48\n");
								}else{
									printf("vc pensou no numero 50\n");
								}
							}
						}else{
							fflush(stdin);
							printf("o numero e 44? [S/N]\n");
							scanf("%s",&resposta);
							resposta = toupper(resposta);
							
							if(resposta != 'S' && resposta != 'N'){
							printf("digite [S/N]\n");
							return 1;
							}
							if(resposta == 'S'){
								printf("vc pensou no numero 44\n");
							}else{
								printf("vc pensou no numero 42\n");
							}
						}
					}else{
						fflush(stdin);
						printf("o numero e maior que 44? [S/N]\n");
						scanf("%s",&resposta);
						fflush(stdin);
						resposta = toupper(resposta);
						
						if(resposta != 'S' && resposta != 'N'){
						printf("digite [S/N]\n");
						return 1;
						}
						if(resposta == 'S'){
							fflush(stdin);
							printf("o numero e 45? [S/N]\n");
							scanf("%s",&resposta);
							resposta = toupper(resposta);
							
							if(resposta != 'S' && resposta != 'N'){
							printf("digite [S/N]\n");
							return 1;
							}
							if(resposta == 'S'){
								printf("vc pensou no numero 45\n");
							}else if (resposta == 'N'){
								fflush(stdin);
								printf("o numero e 47? [S/N]\n");
								scanf("%s",&resposta);
								resposta = toupper(resposta);
								
								if(resposta != 'S' && resposta != 'N'){
								printf("digite [S/N]\n");
								return 1;
								}
								if(resposta == 'S'){
									printf("vc pensou no numero 47\n");
								}else{
									printf("vc pensou no numero 49\n");
								}
							}
						}else{
							fflush(stdin);
							printf("o numero e 43? [S/N]\n");
							scanf("%s",&resposta);
							resposta = toupper(resposta);
							
							if(resposta != 'S' && resposta != 'N'){
							printf("digite [S/N]\n");
							return 1;
							}
							if(resposta == 'S'){
								printf("vc pensou no numero 43\n");
							}else{
								printf("vc pensou no numero 41\n");
							}
						}
					}
					//se o numero é menor que 40 e maior que 30
				}else{
					fflush(stdin);
					printf("o numero e maior que 30? [S/N]\n");
					scanf("%s",&resposta);
					resposta = toupper(resposta);
					
					if(resposta != 'S' && resposta != 'N'){
					printf("digite [S/N]\n");
					return 1;
					}
					if(resposta == 'S'){
						fflush(stdin);
						printf("o numero e par? [S/N]\n");
						scanf("%s",&resposta);
						resposta = toupper(resposta);
						
						if(resposta != 'S' && resposta != 'N'){
						printf("digite [S/N]\n");
						return 1;
						}
						if(resposta == 'S'){
							fflush(stdin);
							printf("o numero e maior que 35? [S/N]\n");
							scanf("%s",&resposta);
							resposta = toupper(resposta);
							
							if(resposta != 'S' && resposta != 'N'){
							printf("digite [S/N]\n");
							return 1;
							}
							if(resposta == 'S'){
								fflush(stdin);
								printf("o numero e 36? [S/N]\n");
								scanf("%s",&resposta);
								resposta = toupper(resposta);
								
								if(resposta != 'S' && resposta != 'N'){
								printf("digite [S/N]\n");
								return 1;
								}
								if(resposta == 'S'){
									printf("vc pensou no numero 36\n");
								}else{
									fflush(stdin);
									printf("o numero e 38? [S/N]\n");
									scanf("%s",&resposta);
									resposta = toupper(resposta);
									
									if(resposta != 'S' && resposta != 'N'){
									printf("digite [S/N]\n");
									return 1;
									}
									if(resposta == 'S'){
										printf("vc pensou no numero 38\n");
									}else{
										printf("vc pensou no numero 40\n");
									}
								}
							}else{
								fflush(stdin);
								printf("o numero e 34? [S/N]\n");
								scanf("%s",&resposta);
								resposta = toupper(resposta);
								
								if(resposta != 'S' && resposta != 'N'){
								printf("digite [S/N]\n");
								return 1;
								}
								if(resposta == 'S'){
									printf("vc pensou no numero 34\n");
								}else{
									printf("vc pensou no numero 32\n");
								}
							}
							//não é par
						}else{
							fflush(stdin);
							printf("o numero e maior que 34? [S/N]\n");
							scanf("%s",&resposta);
							resposta = toupper(resposta);
							
							if(resposta != 'S' && resposta != 'N'){
							printf("digite [S/N]\n");
							return 1;
							}
							if(resposta == 'S'){
								fflush(stdin);
								printf("o numero e 35? [S/N]\n");
								scanf("%s",&resposta);
								resposta = toupper(resposta);
								
								if(resposta != 'S' && resposta != 'N'){
								printf("digite [S/N]\n");
								return 1;
								}
								if(resposta == 'S'){
									printf("vc pensou no numero 35\n");
								}else{
									fflush(stdin);
									printf("o numero e 37? [S/N]\n");
									scanf("%s",&resposta);
									resposta = toupper(resposta);
									
									if(resposta != 'S' && resposta != 'N'){
									printf("digite [S/N]\n");
									return 1;
									}
									if(resposta == 'S'){
										printf("vc pensou no numero 37\n");
									}else{
										printf("vc pensou no numero 39\n");
									}
								}
							}else{
								fflush(stdin);
								printf("vc pensou no numero 33? [S/N]\n");
								scanf("%s",&resposta);
								resposta = toupper(resposta);
								
								if(resposta != 'S' && resposta != 'N'){
								printf("digite [S/N]\n");
								return 1;
								}
								if(resposta == 'S'){
									printf("vc pensou no numero 33\n");
								}else{
									printf("vc pensou no numero 31\n");
								}
							}
						}
						//menor que e igual á 30 e maior que 20
					}else{
						fflush(stdin);
						printf("o numero e maior que 20? [S/N]\n");
						scanf("%s",&resposta);
						resposta = toupper(resposta);
						
						if(resposta != 'S' && resposta != 'N'){
						printf("digite [S/N]\n");
						return 1;
						}
						if(resposta == 'S'){
							fflush(stdin);
						 	printf("o numero e par? [S/N]\n");
							scanf("%s",&resposta);
							resposta = toupper(resposta);
							
							if(resposta != 'S' && resposta != 'N'){
							printf("digite [S/N]\n");
							return 1;
							}
							if(resposta == 'S'){
								fflush(stdin);
								printf("o numero e maior que 25? [S/N]\n");
								scanf("%s",&resposta);
								resposta = toupper(resposta);
								
								if(resposta != 'S' && resposta != 'N'){
								printf("digite [S/N]\n");
								return 1;
								}
								if(resposta == 'S'){
									fflush(stdin);
									printf("o numero e 26? [S/N]\n");
									scanf("%s",&resposta);
									resposta = toupper(resposta);
									
									if(resposta != 'S' && resposta != 'N'){
									printf("digite [S/N]\n");
									return 1;
									}
									if(resposta == 'S'){
										printf("vc pensou no numero 26\n");
									}else{
										fflush(stdin);
										printf("o numero e 28? [S/N]\n");
										scanf("%s",&resposta);
										resposta = toupper(resposta);
										
										if(resposta != 'S' && resposta != 'N'){
										printf("digite [S/N]\n");
										return 1;
										}
										if(resposta == 'S'){
											printf("vc pensou no numero 28\n");
										}else{
											printf("vc pensou no numero 30\n");
										}
									}
								}else{
								fflush(stdin);
						 		printf("o numero e 24? [S/N]\n");
								scanf("%s",&resposta);
								resposta = toupper(resposta);
								
								if(resposta != 'S' && resposta != 'N'){
								printf("digite [S/N]\n");
								return 1;
								}
									if(resposta == 'S'){
										printf("vc pensou no numero 24\n");
									}else{
										printf("vc pensou no numero 22\n");
									}
								}
							// não é par	
							}else{
								fflush(stdin);
								printf("o numero e maior que 24? [S/N]\n");
								scanf("%s",&resposta);
								resposta = toupper(resposta);
								
								if(resposta != 'S' && resposta != 'N'){
								printf("digite [S/N]\n");
								return 1;
								}
								if(resposta == 'S'){
									fflush(stdin);
									printf("o numero e 25? [S/N]\n");
									scanf("%s",&resposta);
									resposta = toupper(resposta);
									
									if(resposta != 'S' && resposta != 'N'){
									printf("digite [S/N]\n");
									return 1;
									}
									if(resposta == 'S'){
										printf("vc pensou no numero 25\n");
									}else{
										fflush(stdin);
										printf("o numero e 27? [S/N]\n");
										scanf("%s",&resposta);
										resposta = toupper(resposta);
										
										if(resposta != 'S' && resposta != 'N'){
										printf("digite [S/N]\n");
										return 1;
										}
										if(resposta == 'S'){
											printf("vc pensou no numero 27\n");
										}else{
											printf("vc pensou no numero 29\n");
										}
									}
								}else{
									fflush(stdin);
									printf("o numero e 23? [S/N]\n");
									scanf("%s",&resposta);
									resposta = toupper(resposta);
									
									if(resposta != 'S' && resposta != 'N'){
									printf("digite [S/N]\n");
									return 1;
									}
									if(resposta == 'S'){
										printf("vc pensou no numero 23\n");
									}else{
										printf("vc pensou no numero 21\n");
									}
								}
							}
							// menor que 20 e maior que 10
						}else{	
								fflush(stdin);
								printf("o numero e maior que 10? [S/N]\n");
								scanf("%s",&resposta);
								resposta = toupper(resposta);
								
								if(resposta != 'S' && resposta != 'N'){
								printf("digite [S/N]\n");
								return 1;
								}
								if(resposta == 'S'){
									fflush(stdin);
						 			printf("o numero e par? [S/N]\n");
									scanf("%s",&resposta);
									resposta = toupper(resposta);
								
								
									if(resposta != 'S' && resposta != 'N'){
									printf("digite [S/N]\n");
									return 1;
									}
									if(resposta == 'S'){
										fflush(stdin);
										printf("o numero e maior que 15? [S/N]\n");
										scanf("%s",&resposta);
										resposta = toupper(resposta);
										
										if(resposta != 'S' && resposta != 'N'){
										printf("digite [S/N]\n");
										return 1;
										}
										if(resposta == 'S'){
											fflush(stdin);
											printf("o numero e 16? [S/N]\n");
											scanf("%s",&resposta);
											resposta = toupper(resposta);
											
											if(resposta != 'S' && resposta != 'N'){
											printf("digite [S/N]\n");
											return 1;
											}
											if(resposta == 'S'){
												printf("vc pensou no numero 16\n");
											}else{
												fflush(stdin);
												printf("o numero e 18? [S/N]\n");
												scanf("%s",&resposta);
												resposta = toupper(resposta);
												
												if(resposta != 'S' && resposta != 'N'){
												printf("digite [S/N]\n");
												return 1;
												}
												if(resposta == 'S'){
													printf("vc pensou no numero 18\n");
												}else{
													printf("vc pensou no numero 20\n");
												}
											}
										}else{
										fflush(stdin);
						 				printf("o numero e 14? [S/N]\n");
										scanf("%s",&resposta);
										resposta = toupper(resposta);
										
										if(resposta != 'S' && resposta != 'N'){
										printf("digite [S/N]\n");
										return 1;
										}
											if(resposta == 'S'){
												printf("vc pensou no numero 14\n");
											}else{
												printf("vc pensou no numero 12\n");
											}
										}
									// não é par	
									}else{
										fflush(stdin);
										printf("o numero e maior que 14? [S/N]\n");
										scanf("%s",&resposta);
										resposta = toupper(resposta);
										
										if(resposta != 'S' && resposta != 'N'){
										printf("digite [S/N]\n");
										return 1;
										}
										if(resposta == 'S'){
											fflush(stdin);
											printf("o numero e 15? [S/N]\n");
											scanf("%s",&resposta);
											resposta = toupper(resposta);
											
											if(resposta != 'S' && resposta != 'N'){
											printf("digite [S/N]\n");
											return 1;
											}
											if(resposta == 'S'){
												printf("vc pensou no numero 15\n");
											}else{
												fflush(stdin);
												printf("o numero e 17? [S/N]\n");
												scanf("%s",&resposta);
												resposta = toupper(resposta);
												
												if(resposta != 'S' && resposta != 'N'){
												printf("digite [S/N]\n");
												return 1;
												}
												if(resposta == 'S'){
													printf("vc pensou no numero 17\n");
												}else{
													printf("vc pensou no numero 19\n");
												}
											}
										}else{
											fflush(stdin);
											printf("o numero e 13? [S/N]\n");
											scanf("%s",&resposta);
											resposta = toupper(resposta);
											
											if(resposta != 'S' && resposta != 'N'){
											printf("digite [S/N]\n");
											return 1;
											}
											if(resposta == 'S'){
												printf("vc pensou no numero 13\n");
											}else{
												printf("vc pensou no numero 11\n");
											}
										}
									}
								}
								//maior que 0 e menor e igual a 10
								else{
									fflush(stdin);
						 			printf("o numero e par? [S/N]\n");
									scanf("%s",&resposta);
									resposta = toupper(resposta);
									
									if(resposta != 'S' && resposta != 'N'){
									printf("digite [S/N]\n");
									return 1;
									}
									if(resposta == 'S'){
										fflush(stdin);
										printf("o numero e maior que 5? [S/N]\n");
										scanf("%s",&resposta);
										resposta = toupper(resposta);
										
										if(resposta != 'S' && resposta != 'N'){
										printf("digite [S/N]\n");
										return 1;
										}
										if(resposta == 'S'){
											fflush(stdin);
											printf("o numero e 6? [S/N]\n");
											scanf("%s",&resposta);
											resposta = toupper(resposta);
											
											if(resposta != 'S' && resposta != 'N'){
											printf("digite [S/N]\n");
											return 1;
											}
											if(resposta == 'S'){
												printf("vc pensou no numero 6\n");
											}else{
												fflush(stdin);
												printf("o numero e 8? [S/N]\n");
												scanf("%s",&resposta);
												resposta = toupper(resposta);
												
												if(resposta != 'S' && resposta != 'N'){
												printf("digite [S/N]\n");
												return 1;
												}
												if(resposta == 'S'){
													printf("vc pensou no numero 8\n");
												}else{
													printf("vc pensou no numero 10\n");
												}
											}
										}else{
										fflush(stdin);
						 				printf("o numero e 4? [S/N]\n");
										scanf("%s",&resposta);
										resposta = toupper(resposta);
										
										if(resposta != 'S' && resposta != 'N'){
										printf("digite [S/N]\n");
										return 1;
										}
											if(resposta == 'S'){
												printf("vc pensou no numero 4\n");
											}else{
												printf("vc pensou no numero 2\n");
											}
										}
									// não é par	
									}else{
										fflush(stdin);
										printf("o numero e maior que 4? [S/N]\n");
										scanf("%s",&resposta);
										resposta = toupper(resposta);
										
										if(resposta != 'S' && resposta != 'N'){
										printf("digite [S/N]\n");
										return 1;
										}
										if(resposta == 'S'){
											fflush(stdin);
											printf("o numero e 5? [S/N]\n");
											scanf("%s",&resposta);
											resposta = toupper(resposta);
											
											if(resposta != 'S' && resposta != 'N'){
											printf("digite [S/N]\n");
											return 1;
											}
											if(resposta == 'S'){
												printf("vc pensou no numero 5\n");
											}else{
												fflush(stdin);
												printf("o numero e 7? [S/N]\n");
												scanf("%s",&resposta);
												resposta = toupper(resposta);
												
												if(resposta != 'S' && resposta != 'N'){
												printf("digite [S/N]\n");
												return 1;
												}	
												if(resposta == 'S'){
													printf("vc pensou no numero 7\n");
												}else{
													printf("vc pensou no numero 9\n");
												}
											}
										}else{
											fflush(stdin);
											printf("o numero e 3? [S/N]\n");
											scanf("%s",&resposta);
											resposta = toupper(resposta);
											
											if(resposta != 'S' && resposta != 'N'){
											printf("digite [S/N]\n");
											return 1;
											}
											if(resposta == 'S'){
												printf("vc pensou no numero 3\n");
											}else{
												printf("vc pensou no numero 1\n");
											}
										}
									}
								}
						}
					}
				}
			}
		}

	return 0;	
}
