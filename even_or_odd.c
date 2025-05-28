#include<stdio.h>
int main()
{
    int N; // Déclaration d'une variable entière pour stocker un nombre donné par l'utilisateur.
    scanf("%d",&N); // Lecture d'un entier fourni par l'utilisateur et stockage dans N.
    if (N % 2==0) // Vérification si le nombre est divisible par 2 (donc pair).
    printf("%d est pair.",N); // Affichage du résultat si N est pair.
    else
    printf("%d est impair.",N); // Affichage du résultat si N est impair.
    return 0; // Fin du programme avec retour d'un code d'exécution correct.
}