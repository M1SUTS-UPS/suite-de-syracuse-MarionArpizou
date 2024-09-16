//Arpizou marion 

#include <stdio.h>
#include <stdlib.h>

int n=1000;

int main()
{
	int i, u[n], u0, tvol, umax;
	
	FILE *fich;
	fich=fopen("suite_syracuse.txt", "w");
	
	printf("u0 :\n");
	scanf("%d",&u0);
	
	u[0]=u0;
	i=1;
	umax=0;
	
	while(u[i-1]!=1)
	{
		if(u[i-1]%2==0)
		{
			u[i]=u[i-1]/2;
		}
		else
		{
			u[i]=3*u[i-1]+1;
		}
		fprintf(fich, "%d\n", u[i]);
		
		if(u[i]>umax)
		{
			umax=u[i];
		}
		i++;
	}
	
	tvol=i;
	printf("le temps de vol est %d\n",tvol);
	printf("l'altitude est %d\n",umax);
	fclose(fich);
}	
	
	
