#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	srand(time(NULL));
	float total=(float)rand()/((float)RAND_MAX/2000);
	printf("Prix à payer: Rs %f\n", total);
	float payee=0;
	while (payee<total)
	{
	 printf("Le client a payé: Rs\n");
	 scanf("%f",&payee);
	 if (payee<total)
	    printf("insuffisant, payez plus\n");
	}
}
