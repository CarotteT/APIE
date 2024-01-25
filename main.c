
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "methode.c"
#include "propriete.c"
#include "animation.c"
#include "liste.c"


void game() {

    int t = theme();        
    int d = level();        
    char* mot = mot_aleatoire( t, d );

    char lettre_saisie[LONGUEUR_MAX_MOT] = "";
    int choix_incorrect = 0;

    system("clear");
    pendu(choix_incorrect);
    while (choix_incorrect < ESSAI_MAX) {
        mot_cache(mot, lettre_saisie);
        char choix = choix_utilisateur();
        int result = verifie_choix(mot, choix, lettre_saisie);

        if (result == 1) {
            strncat(lettre_saisie, &choix, 1);
        }
        else if (result == -1) {
            choix_incorrect++;
            pendu(choix_incorrect);
        }

        if (strspn(mot, lettre_saisie) == strlen(mot)) {
            system("clear");
            pendu(choix_incorrect);
            printf("CONGRATULATIONS ! YOU FOUND THE WORD !: %s\n", mot);
            break;
        }
    }

    if (choix_incorrect == ESSAI_MAX) {
        system("clear");
        pendu(choix_incorrect);
        printf("\t--> word to find: %s <---\n", mot);
    }
}




void run(){

    system("clear");
    
        logo();
        int m = menu();

        switch( m ){
            case 1:
                game();
            break;
            case 2:
                //score();
            break;
            case 3:
                infos();
            break;
            case 4:
                quit();
            break;
        }

}




int main() {
    run();
    return 0;
}
