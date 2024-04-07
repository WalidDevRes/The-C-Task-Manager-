#include <stdlib.h>
#include "FinishTask.c"
#include "DeleteTask.c"
#include "ShowAllTask.c"
#include "AddTask.c"



void main (){ 
    int choix;

    system("cls");
    printf("****************************************************" "\n" );
    printf("*Bienvenue dans mon gestionnaire de liste de taches*" "\n");
    printf("****************************************************" "\n");
    sleep(2);
    system("cls");
    printf("********************Menu d'accueil******************" "\n");
    printf("1 - Ajouter une tache avec une date d'echeance." "\n" );
    printf("2 - Afficher toutes les taches." "\n" );
    printf("3 - Marquer une tache comme terminee." "\n" );
    printf("4 - Supprimer une tache de la liste." "\n" );
    printf("****************************************************" "\n");

    printf("Veuillez choisir test: " );
    scanf("%d", &choix);
    
    switch ( choix ){
    case 1:
       AddTask();
        break;
    case 2:
        ShowAllTask();
        break;      
    case 3:
        FinishTask();
        break;   
    case 4:
        ShowAllTask();
        break;
    }
}





