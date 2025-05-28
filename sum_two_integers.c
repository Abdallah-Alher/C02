#include <stdio.h>  // Bibliothèque pour gérer les entrées et sorties.

int main() {  // Début du programme principal.
    int nb1, nb2, somme; // Déclaration de trois variables pour stocker les nombres et leur somme.

    scanf("%d", &nb1); // Lecture d'un entier donné par l'utilisateur et stockage dans nb1.
    scanf("%d", &nb2); // Lecture d'un second entier donné par l'utilisateur et stockage dans nb2.

    somme = nb1 + nb2; // Calcul de la somme des deux nombres.

    printf("La somme est : %d", somme); // Affichage du résultat de l'addition.

    return 0; // Indique que le programme s'est exécuté correctement.
}