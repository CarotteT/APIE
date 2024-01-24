#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#include "propriete.c"

char* liste_mots_default[MOT_MAX] = {"acrobatique", "bouillonnement", "catastrophique", "delicatement", "efficacement", "fantastiquement", "genereusement", "harmonieusement", "illuminer", "jubilation", "kangourou", "luminescent", "merveilleusement", "nuageux", "oxygene", "precieusement", "quadrilatere", "rhapsodie", "sensationnel", "tenebreux"};

char* animaux_facile[MOT_MAX] = {"chat", "chien", "singe", "poule", "canard", "lapin", "tigre", "lion", "perroquet", "furet", "panda", "faucon", "mouton", "abeille", "cochon", "poussin", "cheval", "éléphant", "hamster", "koala"};
char* nourritures_facile[MOT_MAX] = {"pizza", "pomme", "banane", "riz", "poire", "poulet", "salade", "yaourt", "bouilli", "crepe", "tomate", "melon", "haricot", "oignon", "fromage", "miel", "jusdorange", "cassis", "chocolat", "pain"};
char* musique_facile[MOT_MAX] = {"piano", "guitare", "flute", "clarinette", "saxophone", "trompette", "violon", "orgue", "tambour", "harpe", "ukulele", "xylophone", "accordeon", "cymbale", "bongo", "cornemuse", "triangle", "triangle", "hautbois", "maracas"};
char* films_facile[MOT_MAX] = {"coco", "moana", "zootopia", "ratatouille", "frozen", "shrek", "brave", "aladdin", "minions", "cars", "cinderella", "findingnemo", "mulan", "toy story", "tangled", "up", "inside out", "lion king", "mowgli", "beauty and the beast"};
char* ecole_facile[MOT_MAX] = {"cours", "professeur", "eleve", "tableau", "calcul", "lecture", "ecriture", "examen", "college", "lycee", "ecole", "lecon", "livre", "education", "savoir", "apprentissage", "note", "etudiant", "diplome", "connaissance"};
char* espace_facile[MOT_MAX] = {"lune", "etoile", "soleil", "mars", "jupiter", "saturne", "neptune", "pluton", "galaxie", "univers", "astre", "planete", "orbite", "comete", "cosmos", "espace", "astronaute", "alien", "roquette", "satellite"};

char* animaux_moyen[MOT_MAX] = {"girafe", "hippopotame", "crocodile", "chimpanze", "pingouin", "pangolin", "koala", "ornithorynque", "kangourou", "tatou", "tamanoir", "blaireau", "gecko", "hibou", "perruche", "pythons", "dromadaire", "elephant", "tarsier", "cachalot"};
char* nourritures_moyen[MOT_MAX] = {"lasagne", "parmesan", "sashimi", "quinoa", "couscous", "artichaut", "brocolis", "champignon", "pamplemousse", "mangoustan", "fruitdepasse", "grenadine", "choufleur", "asperges", "framboises", "aubergines", "courgettes", "framboises", "groseilles", "gnocchis"};
char* musique_moyen[MOT_MAX] = {"symphonique", "xylophoniste", "violoncelle", "accordeoniste", "tambourin", "contrebassiste", "soprano", "saxophoniste", "clarinettiste", "trompettiste", "flutiste", "harmoniciste", "hautbois", "clavicule", "mandoline", "glockenspiel", "guitariste", "bassiste", "tromboniste", "cornemuse"};
char* films_moyen[MOT_MAX] = {"interstellar", "blackpanther", "jumanji", "wonderwoman", "transformers", "hungergames", "gladiator", "pocahontas", "braveheart", "cinderella", "inception", "jurassicpark", "blackhawkdown", "amadeus", "terminator", "apocalypsenow", "revenant", "schindlerslist", "incredibles", "spiritedaway"};
char* ecole_moyen[MOT_MAX] = {"bibliothecaire", "mathematiques", "experimentation", "laboratoire", "etudiant", "bibliographie", "professoral", "enseignement", "diplome", "education", "laboratoire", "connaissance", "microscope", "cursus", "lycee", "universite", "philosophie", "biologie", "geographie", "pedagogique"};
char* espace_moyen[MOT_MAX] = {"astrophysique", "constellation", "nebuleuse", "supernova", "exoplanete", "cosmologie", "astronomique", "spatiotemporel", "galaxien", "astrometrie", "parallaxe", "gravite", "universel", "cosmonaute", "constellations", "heliopause", "teleportation", "antimatiere", "quasar", "extraterrestre"};

char* animaux_difficile[MOT_MAX] = {"hippopotamus", "platypus", "anteater", "armadillo", "chameleon", "orangutan", "rhinoceros", "ocelot", "lemur", "quokka", "tapir", "gazelle", "axolotl", "anteater", "cockatoo", "cassowary", "marmoset", "okapi", "serval", "mongoose"};
char* nourritures_difficile[MOT_MAX] = {"goulash", "souffle", "sashimi", "quinoa", "couscous", "artichoke", "brusselsprout", "pomegranate", "eggplant", "watercress", "beetroot", "cantaloupe", "escargot", "maraschino", "sauerkraut", "coqauvin", "vinaigrette", "guacamole", "taramasalata", "framboises"};
char* musique_difficile[MOT_MAX] = {"philharmonic", "bouzouki", "contrabassoon", "sitarist", "xylophonist", "oboeist", "hurdygurdy", "harpsichordist", "thereminist", "trombonist", "balalaika", "sousaphone", "melodica", "dulcimer", "cimbalom", "didgeridoo", "calliope", "appassionato", "serenata", "symphonique"};
char* films_difficile[MOT_MAX] = {"schindlerslist", "inception", "bladerunner", "pulpfiction", "ameliepoulain", "intouchables", "theshawshankredemption", "apocalypsenow", "braveheart", "gladiator", "reservoirdogs", "incredibles", "therevenant", "whiplash", "ingloriousbasterds", "djangounchained", "amadeus", "interstellar", "blackpanther", "jumanji"};
char* ecole_difficile[MOT_MAX] = {"philosophical", "bibliographical", "experimentalist", "paleontological", "philological", "electromagnetism", "mathematician", "biotechnology", "psychoanalysis", "quantummechanics", "astrophysicist", "entomologist", "microbiologist", "geophysicist", "epistemology", "anthropology", "archaeologist", "paleobotanist", "neuropsychology", "kinesiology"};
char* espace_difficile[MOT_MAX] = {"astrophysicist", "extraterrestrial", "cosmogony", "astrobiology", "quasar", "galacticcluster", "supernovaremnant", "multiverse", "hyperspace", "nebularhypothesis", "stellarparallax", "gravitationalwaves", "intergalactic", "photovoltaiceffect", "luminiferousaether", "quantumtunnelling", "complexcosmic", "quantumentanglement", "nebuloustheory", "exoplanetary"};


char* mot_aleatoire( int t, int d) {

    srand(time(NULL));
    int i = rand() % MOT_MAX;

    switch( t )
    {
    case 1:
        switch( d )
        {
        case 1: return animaux_facile[i] ;
        case 2: return animaux_moyen[i] ;
        case 3: return animaux_difficile[i] ;
        default: return animaux_moyen[i] ;
        }
    case 2:
        switch( d )
        {
        case 1: return nourritures_facile[i] ;
        case 2: return nourritures_moyen[i] ;
        case 3: return nourritures_difficile[i] ;
        default: return nourritures_moyen[i] ;
        }
    case 3:
        switch( d )
        {
        case 1: return films_facile[i] ;
        case 2: return films_moyen[i] ;
        case 3: return films_difficile[i] ;
        default: return films_moyen[i] ;
        }
    case 4:
        switch( d )
        {
        case 1: return musique_facile[i] ;
        case 2: return musique_moyen[i] ;
        case 3: return musique_difficile[i] ;
        default: return musique_moyen[i] ;
        }
    case 5:
        switch( d )
        {
        case 1: return ecole_facile[i] ;
        case 2: return ecole_moyen[i] ;
        case 3: return ecole_difficile[i] ;
        default: return ecole_moyen[i] ;
        }
    case 6:
        switch( d )
        {
        case 1: return espace_facile[i] ;
        case 2: return espace_moyen[i] ;
        case 3: return espace_difficile[i] ;
        default: return espace_moyen[i] ;
        }
    
    default: return liste_mots_default[i] ;
    }
}
