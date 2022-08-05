#include <stdio.h>
#include <stdlib.h>

int main()
{
   int Nbr, i, f;

	printf("veuillez saisire un nombre pour calculer le factoriel : \n");
	scanf("%d", &Nbr);
	f = 1;
	for (i = 1; i <= Nbr; i++)
	f = f * i;
	printf("le factoriel de %d = %d", Nbr, f);
	return 0;
}
