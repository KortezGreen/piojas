#include <stdio.h>
#include <stdlib.h>

int binaryOnes(int n)
{
    int w = 0;
    while(n > 0)
    {
        if(n % 2 == 1)
        {
            w++;
        }

        n = n / 2;
    }
    return w;
}

void minMaxDigit(int number,int* pMin,int* pMax)
{
    *pMax =  0;
    *pMin = 9;
    int temp;

while(number>0)
{
    temp = number%10;
    if(temp<*pMin)
    {
        *pMin = temp;
    }

    if(temp>*pMax)
    {
        *pMax = temp;
    }

    number = number/10;
}
}

int* colProducts(int n, int m, int ** tab)
{
    int *wynik = malloc(m*sizeof(int));

    for(int j = 0; j < m; j++)
    {
        wynik[j] = 1;

        for(int i = 0; i < n; i++)
        {
            wynik[j] = wynik[j] * tab[i][j];
        }
    }

    return wynik;
}





int main()
{
   
   
    z3
    int n = 3;
    int m = 3;
    int** tab = malloc(3*sizeof(int*));
    tab[0] = malloc(3*sizeof(int));
    tab[1] = malloc(3*sizeof(int));
    tab[2] = malloc(3*sizeof(int));
    tab[0][0] =1; tab[0][1] =2; tab[0][2] =3;
    tab[1][0] =4; tab[1][1] =5; tab[1][2] =6;
    tab[2][0] =-1; tab[2][1] =0; tab[2][2] =2;

    int *wynik = colProducts(n,m,tab);

    for(int j = 0; j < m; j++)
    {
        printf("%d ", wynik[j]);
    }

    free(tab[0]);
    free(tab[1]);
    free(tab[2]);
    free(tab);
    free(wynik);

    z2
    int n = 13;
    int min = 0;
    int max = 0;
    minMaxDigit(n,&min,&max);
    printf("Odp: min %d max %d",min, max);

    z1
    int n = 13;
    printf("Odp: %d",binaryOnes(n));


    return 0;
}
