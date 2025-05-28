#include <stdio.h>  // Inclusion de la bibliothèque pour les entrées et sorties standard
int main() {  // Début du programme principal
    int a, b;  // Déclaration de deux variables entières
    scanf("%d %d", &a, &b);  // Lecture de deux nombres entiers saisis par l'utilisateur et stockage dans a et b
    // Échange des valeurs de a et b sans utiliser de variable temporaire
    a = a + b;  // Addition des deux nombres et stockage du résultat dans a
    b = a - b;  // Retrait de la valeur initiale de b, ce qui récupère la valeur de a
    a = a - b;  // Retrait de la nouvelle valeur de b, ce qui récupère la valeur initiale de b dans a
    printf("Après échange : a = %d, b = %d\n", a, b);  // Affichage des valeurs échangées
    return 0;  // Fin du programme avec retour d'un code d'exécution correct
}