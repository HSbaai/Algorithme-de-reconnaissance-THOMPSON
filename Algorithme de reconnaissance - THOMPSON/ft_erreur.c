#include "regulier.h"

void ft_erreur(int a,char *str)
{
    if (a == 1)
        fprintf(stderr, "Probleme: nombre argument\n");
    else if (a == 2)
        fprintf(stderr, "Probleme: l expression donnes n est pas regulier %s\n", str);
    else if(a == 3)
        fprintf(stderr, "Probleme: l expression regulier ne peut pas se converter en NFA %s\n", str);
    exit(0);
}