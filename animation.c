
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h>


void pendu(int choix_incorrect) {
    
    system("clear");
    printf("\n");
    switch (choix_incorrect) {
        case 0:
            
        printf("         (                           (                           (\n"
           "          )                           )                           )\n"
           "     __..---..__                 __..---..__                 __..---..__\n"
           " ,-='  /  |  \\  `=-.         ,-='  /  |  \\  `=-.         ,-='  /  |  \\  `=-.\n"
           ":--..___________..--;       :--..___________..--;       :--..___________..--;\n"
           " \\.,_____________,./         \\.,_____________,./         \\.,_____________,./\n");

            break;
        case 1:
            
        printf("                                      )                          (\n"
           "          )                           (                           (\n"
           "     __..--                      __..---..__                 __..---..__\n"
           " ,-='  /  |                  ,-='  /  |  \\  `=-.         ,-='  /  |  \\  `=-.\n"
           ":--.._____|                 :--..___________..--;       :--..___________..--;\n"
           "\\.,_______|                  \\.,_____________,./         \\.,_____________,./\n");

            break;
        case 2:
        printf("           )                                                      )\n"
           "          (                            (                          )\n"
           "     __..--                      __..---                     __..---..__\n"
           " ,-='  /  |                  ,-='  /  ||                 ,-='  /  |  \\  `=-.\n"
           ":--.._____|                 :--..______|                :--..___________..--;\n"
           "\\.,_______|                  \\.,_______|                 \\.,_____________,./\n");

            break;
        case 3:
        printf("                                       (                          )\n"
           "          )                             )                         (\n"
           "     __..--                      __..---                          --..__\n"
           " ,-='  /  |                  ,-='  /  ||                          |  \\  `=-.\n"
           ":--.._____|                 :--..______|                          |_____..--;\n"
           "\\.,_______|                  \\.,_______|                          |______,./\n");

            break;
        case 4:
        printf("          (                             \n"
           "          (                             )\n"
           "     __..--                      __..---\n"
           " ,-='  /  |                  ,-='  /  ||\n"
           ":--.._____|                 :--..______|\n"
           "\\.,_______|                  \\.,_______|\n");

            break;
        case 5:
        printf("     __..--\n"
           " ,-='  /  | \n"
           ":--.._____|\n"
           "\\.,_______|\n");
            break;
        case 6:
            printf("                                                _        _ \n"
           " _ __   ___    _ __ ___   ___  _ __ ___   _ __ (_) ___  | |\n"
           "| '_ \\ / _ \\  | '_ ` _ \\ / _ \\| '__/ _ \\ | '_ \\| |/ _ \\ | |\n"
           "| | | | (_) | | | | | | | (_) | | |  __/ | |_) | |  __/ |_|\n"
           "|_| |_|\\___/  |_| |_| |_|\\___/|_|  \\___| | .__/|_|\\___| (_)\n"
           "                                         |_|\n");
            break;
        default:
            break;
    }

    printf("\n");
}


void logo(){

    srand(time(NULL));
    int i = rand() % 5;

    printf("\n") ;
    switch(i){
        case 0:
            printf("      ___           ___           ___           ___       ___           ___                       ___     \n");
            printf("     /\\  \\         /\\  \\         /\\  \\         /\\__\\     /\\  \\         /\\  \\          ___        /\\  \\    \n");
            printf("    /::\\  \\       /::\\  \\       /::\\  \\       /:/  /    /::\\  \\       /::\\  \\        /\\  \\      /::\\  \\   \n");
            printf("   /:/\\:\\  \\     /:/\\:\\  \\     /:/\\:\\  \\     /:/  /    /:/\\:\\  \\     /:/\\:\\  \\       \\:\\  \\    /:/\\:\\  \\  \n");
            printf("  /::\\~\\:\\  \\   /::\\~\\:\\  \\   /::\\~\\:\\  \\   /:/  /    /::\\~\\:\\  \\   /::\\~\\:\\  \\      /::\\__\\  /::\\~\\:\\  \\ \n");
            printf(" /:/\\:\\ \\:\\__\\ /:/\\:\\ \\:\\__\\ /:/\\:\\ \\:\\__\\ /:/__/    /:/\\:\\ \\:\\__\\ /:/\\:\\ \\:\\__\\  __/:/\\/__/ /:/\\:\\ \\:\\__\\\n");
            printf(" \\/__\\:\\/:/  / \\/__\\:\\/:/  / \\/__\\:\\/:/  / \\:\\  \\    \\:\\~\\:\\ \\/__/ \\/__\\:\\/:/  / /\\/:/  /    \\:\\~\\:\\ \\/__/\n");
            printf("      \\::/  /       \\::/  /       \\::/  /   \\:\\  \\    \\:\\ \\:\\__\\        \\::/  /  \\::/__/      \\:\\ \\:\\__\\  \n");
            printf("      /:/  /         \\/__/         \\/__/     \\:\\  \\    \\:\\ \\/__/         \\/__/    \\:\\__\\       \\:\\ \\/__/  \n");
            printf("     /:/  /                                   \\:\\__\\    \\:\\__\\                     \\/__/        \\:\\__\\    \n");
            printf("     \\/__/                                     \\/__/     \\/__/                                   \\/__/    \n");
        break ;
        
        case 1:
            printf("\n                     __           _    \n");
            printf("  ____ _____  ____  / /__  ____  (_)__ \n");
            printf(" / __ `/ __ \\/ __ \\/ / _ \\/ __ \\/ / _ \\\n");
            printf("/ /_/ / /_/ / /_/ / /  __/ /_/ / /  __/\n");
            printf("\\__,_/ .___/ .___/_/\\___/ .___/_/\\___/ \n");
            printf("    /_/   /_/          /_/            \n");
        break ;        
        case 2:
        printf(" ______   ______   ______   _        ______  ______  _____  ______ \n");
        printf("| |  | | | |  | \\ | |  | \\ | |      | |     | |  | \\  | |  | |     \n");
        printf("| |__| | | |__|_/ | |__|_/ | |   _  | |---- | |__|_/  | |  | |---- \n");
        printf("|_|  |_| |_|      |_|      |_|__|_| |_|____ |_|      _|_|_ |_|____ \n");   
        break ;        
        case 3:
            printf(" █████╗ ██████╗ ██████╗ ██╗     ███████╗██████╗ ██╗███████╗\n");
            printf("██╔══██╗██╔══██╗██╔══██╗██║     ██╔════╝██╔══██╗██║██╔════╝\n");
            printf("███████║██████╔╝██████╔╝██║     █████╗  ██████╔╝██║█████╗  \n");
            printf("██╔══██║██╔═══╝ ██╔═══╝ ██║     ██╔══╝  ██╔═══╝ ██║██╔══╝  \n");
            printf("██║  ██║██║     ██║     ███████╗███████╗██║     ██║███████╗\n");
            printf("╚═╝  ╚═╝╚═╝     ╚═╝     ╚══════╝╚══════╝╚═╝     ╚═╝╚══════╝\n");
        break ;        
        case 4:
            printf(" ▄▄▄·  ▄▄▄· ▄▄▄·▄▄▌  ▄▄▄ . ▄▄▄·▪  ▄▄▄ .\n");
            printf("▐█ ▀█ ▐█ ▄█▐█ ▄███•  ▀▄.▀·▐█ ▄███ ▀▄.▀·\n");
            printf("▄█▀▀█  ██▀· ██▀·██▪  ▐▀▀▪▄ ██▀·▐█·▐▀▀▪▄\n");
            printf("▐█ ▪▐▌▐█▪·•▐█▪·•▐█▌▐▌▐█▄▄▌▐█▪·•▐█▌▐█▄▄▌\n");
            printf(" ▀  ▀ .▀   .▀   .▀▀▀  ▀▀▀ .▀   ▀▀▀ ▀▀▀ \n");
        break ;

        default:
        break ;
    }
    printf("\n\t--- by esiea students ---\n\n\n") ;
}

void quit(){
    system("clear");
    printf("\n");
    printf("  _            _             \n");
    printf(" |_)     _    |_)     _    | \n");
    printf(" |_) \\/ (/_   |_) \\/ (/_   o \n");
    printf("     /            /          \n");
    printf("\n");
    exit(0);
}


int menu(){

    int choice ;

    printf("--------[ Game Menu ]--------\n");
    printf("1. Start Game\n");
    printf("2. View High Scores\n");
    printf("3. Infos\n");
    printf("4. Quit\n");
    printf("-----------------------------\n");

    printf("Tape your choice >>>") ;
    scanf("%d", &choice);
    switch(choice){
        case 1:
            return 1;
        case 2:
            return 2;
        case 3:
            return 3;
        case 4:
            return 4;
        default:
            return 0;
    }

}

int theme(){

    printf("\n -----------------------------------------\n");
    printf("| 1.animals\t 2.foods\t 3.movies |\n| 4.music\t 5.school\t 6.space  |\n");
    printf(" -----------------------------------------\n");

    printf("Select the theme of the word >>> ");

    int t;
    scanf("%d", &t) ;

    return t;

}

int level(){

    printf("\n ----------------------------------------------\n");
    printf("| 1.easy\t 2.intermediate\t        3.hard |\n");
    printf(" ----------------------------------------------\n");

    printf("Select the difficulty >>> ");

    int l;
    scanf("%d", &l) ;

    return l;

}

int type_game() {
    printf("--------[ Type of Game ]--------\n");
    printf("Do you want to play against the IA [Y/n] >>> ");

    char ia;
    scanf("%c", &ia);

    if (ia == 'Y' || ia == 'y' ) {
        return 1 ;
    } else {
        return 0;
    }
}


void infos(){

    system("clear");
    printf("\n-------------------------------[ Rules ]-------------------------------\n");
    printf("Le jeu du pendu est un jeu de mots dans lequel un joueur doit deviner un mot en suggérant des lettres. \n Déroulement du jeu : \n 1. Choix du thème du mot secret et son niveau de difficulté (Easy, Intermediate, Difficult) : Le joueur choisit un thème ainsi que la difficulté de son mot secret. Ce dernier est choisi aléatoirement par le programme et est caché au joueur. \n 2. Affichage du mot partiel : Le mot secret affiche le nombre de lettres du mot sous forme de tirets bas. \n 3. Saisie des lettres : Le joueur tente de deviner le mot en saisissant une lettre à la fois. \n 4. Validation de la lettre : Le programme vérifie si la lettre devinée est bien dans le mot secret. Si c'est le cas, toutes les occurrences de cette lettre sont révélées dans le mot secret. \n 5. Affichage du pendu : Pour chaque lettre incorrecte proposée par le joueur, une partie des tartes est partiellement mangée. Le dessin des tartes est représenté par trois tartes. Les parties des tartes sont mangées en fonction du nombre d'erreurs du joueur. \n 6. Nombre d'essais autorisés : Six erreurs sont autorisées avant que toutes les tartes ne soient complètement mangées. \n 7. Fin du jeu : \n -> Victoire : Le joueur gagne s'il parvient à deviner le mot avant que les tartes ne soient complètement mangées en totalité. \n -> Défaite : Le joueur perd s'il atteint le nombre maximal d'essais permises avant d'avoir deviné le mot.\n");    
    printf("\n-------------------------------[ Infos+ ]-------------------------------\n");
    printf("Bonjour, bienvenue dans notre jeu de pendu APPLE PIE. Nous sommes trois étudiants de l'ESIEA : Ahmed AMROUCHI, Nolwenn NIZARD et Caroline TRUONG, les créateurs de ce jeu. \n Plongez dans l'univers de notre jeu du pendu. Choisissez parmi une variété de thèmes passionnants : Animaux, Nourriture, Musique et bien plus encore. Explorez des niveaux de difficulté pour tous les niveaux d'expérience. \n Bien connu des cours de récréation, relevez le défi du pendu maintenant ! \n");
    printf("\n------------------------------------------------------------------------\n");

}


void win(){

    printf("██╗   ██╗ ██████╗ ██╗   ██╗    ██╗    ██╗██╗███╗   ██╗    ██╗\n");
    printf("╚██╗ ██╔╝██╔═══██╗██║   ██║    ██║    ██║██║████╗  ██║    ██║\n");
    printf(" ╚████╔╝ ██║   ██║██║   ██║    ██║ █╗ ██║██║██╔██╗ ██║    ██║\n");
    printf("  ╚██╔╝  ██║   ██║██║   ██║    ██║███╗██║██║██║╚██╗██║    ╚═╝\n");
    printf("   ██║   ╚██████╔╝╚██████╔╝    ╚███╔███╔╝██║██║ ╚████║    ██╗\n");
    printf("   ╚═╝    ╚═════╝  ╚═════╝      ╚══╝╚══╝ ╚═╝╚═╝  ╚═══╝    ╚═╝\n\n");                                                            

}
