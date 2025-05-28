#include <stdio.h> // Bibliotèque d'entrer et sotie
int main ()
{
    int N; // Déclaration de la variable N.
    int i; // Déclaration du compteur i.
    double F; // Déclaration du factorielle F.
    scanf("%d",&N); // Permet de lire un entier et de le stocker dans la variable N.
    for(i=1,F=1;i<=N;i++) // Elle sert à répéter une opération de i = 1 jusqu'à i = N, tout en initialisant F = 1.
    F*=i; // Set ...
    printf("Le factoriel de %d est : %.0f\n", N,F); // Le résultat 
    return 0;
}