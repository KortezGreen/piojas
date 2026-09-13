#include <stdio.h>
#include <stdlib.h>

 int digitSumRec(int n)
 {
    int s;
    if(n>0)
    {
    s = n%10;
    n=n/10;
    return s+digitSumRec(n);
    }
 }

 void firstLastDigit(int number,int* pFirst ,int* pLast)
 {
    *pLast = number%10;
    while(number>10)
    {
        number=number/10;
    }
    *pFirst = number;
 }

 void multiplyByScalar(int** tab,int n,int m,int k)
 {
    for(int i =0;i<n;i++)
    {
        for(int j=0;j<m;j++ )
        {
            tab[i][j] = tab[i][j]*3;
        }
    }
 }

 struct Stock
 {
     char name[20];
     int quantity;
 };

 struct Stock* newStock(char* nazwa, int ilosc)
 {
    if(ilosc<0)
    {
        return NULL;
    }

        struct Stock* new = malloc(sizeof(struct Stock));

        int i =0;
        while(nazwa[i] != '\0')
    {
        (*new).name[i] = nazwa[i];
        i++;
    }

    (*new).name[i] = '\0';
    (*new).quantity = ilosc;

    return new;
 };

 void sell(struct Stock* produkt, int amount)
 {
     if(amount>0 && amount<=(*produkt).quantity)
     {
         (*produkt).quantity=(*produkt).quantity-amount;
     }
 }

int main()
{
    z4
    int a = 4;
    char* naz= "Mleko";
    struct Stock* produkt = newStock(naz,10);

    if(produkt == NULL)
    {
        printf("Blad");
        return 1;
    }

    printf("Nazwa: %s\n", (*produkt).name);
    printf("Ilosc: %d\n", (*produkt).quantity);

    sell(produkt, a);

    printf("Nazwa: %s\n", (*produkt).name);
    printf("Ilosc: %d\n", (*produkt).quantity);

    free(produkt);

    z3
    int n = 2;
    int m = 2;
    int k = 3;
    int **tab = malloc(2*sizeof(int*));
    tab[0] = malloc(2*sizeof(int));
    tab[1] = malloc(2*sizeof(int));
    tab[0][0] =1; tab[0][1] =2;
    tab[1][0] =3; tab[1][1] =4;
    printf("Przed: \n");
    for(int i =0;i<n;i++)
    {
        for(int j=0;j<m;j++ )
        {
            printf(" %d" ,tab[i][j]);
        }
    }
    multiplyByScalar(tab,n,m,k);
    printf("\nPo: \n");
    for(int i =0;i<n;i++)
    {
        for(int j=0;j<m;j++ )
        {
            printf(" %d" ,tab[i][j]);
        }
    }
    free(tab[0]);
    free(tab[1]);
    free(tab);

    z2
    int n = 2345;
    int First;
    int Last;
    firstLastDigit(n,&First ,&Last);
    printf("Odp: %d\n",First);
    printf("Odp: %d\n",Last);

    z1
    int n = 1234;
    printf("Odp: %d",digitSumRec(n));

    return 0;
}
