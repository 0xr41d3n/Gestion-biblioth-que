#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct livre{
	int num;
	char titre[200];
	char auteur[100];
	int anneEdition;
	struct livre *suivant;
};
typedef struct livre *Biblio;
typedef struct livre *Livre;

//menu....................
int menu(){
	int choix;
	
do {

 		printf("1 :  creer la liste\n");
			printf("2 :  afficher la liste des livres \n");
				printf("3 :  ajouter au debut \n ");
					printf("4 :  ajouter a la fin \n");
						printf("5 :  nombre de livres dans la bibliotheque \n");
							printf("6 :  ajouter un livre a la bibliotheque \n");
								printf("7 :  inverser la liste des livres \n");
									printf("8 :  rechercher un livre \n");
										printf("9 :  supprimer un livre \n");
											printf("0 :  Quitter\n");
											scanf("%d",&choix);
												switch(choix) {
		
		case 1:Biblio creerBibliotheque();
			break;
				case 2:void afficherBibliotheque();
					break;
						case 3:Biblio ajoutDebut(Biblio b,Livre l);
							break;
								case 4:	Biblio ajoutFin(Biblio b,Livre l);
									break;
									/*	case 5:
											break;
												case 6:
													break;
														case 7:
															break;
																case 8:
																	break;
																		case 9:
																			break; */ 
}
		
}while(choix!=0);
	
		
	
		
	
}
//creer une liste ////////
Biblio creerBibliotheque(){
		return NULL;
	}
	//creer un livre //////
	Livre creerLivre(int num,char *titre,char *auteur,int anneEdition){
		
		Livre L;
		L=(livre*)malloc(sizeof(livre));
		L->num=num;
		strcpy(L->auteur,"auteur");
		strcpy(L->titre,"titre");
		L->anneEdition=anneEdition;
		return L;
		
	}
	//ajoutDEbut//////////
	Biblio ajoutDebut(Biblio b,Livre l){
		if (b==NULL){
			return l;
		}else
		l->suivant=b;
		b=l;
		
		
		
	}
	
//afficher une liste
void afficherBibliotheque(){                                                                                 
		livre  *b,*courant;
		courant=b;
		while(courant!=NULL){
			printf("%d",courant->num);
           	courant=courant->suivant;
           	
	}
	
	
	
}
	
	//Nombre de livre/////
	
int nombreLivres(Biblio b)
{
	int i=0;
	livre *courant;
	courant=b;
	while(courant!=NULL){
		i++;
		courant=courant->suivant;
	}
	return i;
	
	}	
	
	//ajout Fin////
	
	Biblio ajoutFin(Biblio b,Livre l){
		livre *courant=b;
			while(courant->suivant!=NULL){
				courant=courant->suivant;
			}
			l->suivant=NULL;
			courant=l;

		
		
		
		
		
	}
	
main(){

menu ();
 

}
	
		
		
		
		
		
	
	
	
	
	
	
	
	
	
	
	

