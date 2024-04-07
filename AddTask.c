#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void AddTask() {
    char reponse[100];          
    char tableau[20][100];     

    while (1){
        printf("Veuillez mettre votre tache: ");
        scanf("%s", reponse);
        for (int i = 0; i < tableau; i++){
            strcpy(tableau[i], reponse);
            printf("%s", tableau[i]);  
        }
    }
}
   





