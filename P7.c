//Medson José Alves da Silva Frazão Matrícula: 11721EAU015
#include <stdio.h>

int func(int m, int n)
{
	int i;
	if(m == 0)
	{
		return n+1;
    }
    else if(m >0 && n == 0)
    {
    	return func(m-1, 1);
	}
	else if(m > 0 && n > 0)
	{
		return func(m-1, func(m, n-1));
	}	
}
int main()
{
	int m, n;
	printf("Digite o primeiro valor: ");
	scanf("%d", &m);
	getchar();
	printf("Digite o segundo valor: ");
	scanf("%d", &n);
	getchar();
    printf("\n\nResultado da funcao: %d", func(m,n));
    return 0;
}
