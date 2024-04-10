#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "MySQL.c"

void AddTask() {
    char Tache[100];
    
    printf("Veuillez ajouter votre tache a faire: ");
    scanf(" %[^\n]", Tache); 
    printf("%s\n", Tache);
    MySQL();
    return;
}
   





