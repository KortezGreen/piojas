#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isPalindrome(int n)
{
    int oryginalna = n;
    int odwrocona = 0;
    int reszta;

    while (n > 0)
    {
        reszta = n % 10;
        odwrocona = odwrocona * 10 + reszta;
        n = n / 10;
    }

    if (oryginalna == odwrocona)
    {
        return 1;
    } else {
        return 0;
    }
}


int countWords(char tab[])
{
    int w = 0;
    for(int i = 0;tab[i]!='\0';i++)
    {
            if(tab[i]==' ')
        {
        w++;
        }
    }
    return w+1;
}

int sumMatrix(int **tab, int n, int m)
{
    int w = 0;
    for(int i = 0;i<n;i++)
    {
        for(int j = 0;j<m;j++)
        {
            w=w+tab[i][j];
        }
    }
    return w;
}

struct Account
{
    char owner[30];
    float balance;
};

struct Account* newAccount(char owner[], float balance)
{
    if (balance < 0)
    {
        return NULL;
    }

    struct Account* account = malloc(sizeof(struct Account));

    if (account == NULL)
    {
        return NULL;
    }

    strcpy(account->owner, owner);
    account->balance = balance;

    return account;
}

void deposit(struct Account* account, float amount)
{
    if (amount > 0)
    {
        account->balance += amount;
    }
}

int isPerfect(int n)
{
    int w = 0;
    int i = 1;
    while(i<n)
    {
        if(n%i==0)
        {
            w=w+i;
        }
        i++;
    }

    if(n==w)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void countParity(int tab[],int r,int* pEven, int* pOdd)
{
    for(int i = 0;i<r;i++)
    {
        if(tab[i]%2==0)
        {
            (*pEven)++;
        }
        else
        {
            (*pOdd)++;
        }
    }
}

int maxMatrix(int **tab,int n,int m)
{
     int naj = tab[0][0];
    for(int i = 0;i<n;i++)
    {
        for(int j = 0;j<m;j++)
        {
            if(tab[i][ j]>naj)
            {
                naj = tab[i][j];
            }
        }
    }
     return naj;
}

struct Employee
{
    char name[30];
    float salary;
};

float sumSalaries(struct Employee tab[], int n)
{
    float suma = 0;
    for(int i = 0;i<n;i++)
    {
        suma=suma+(tab[i].salary);
    }
    return suma;
}

int doubleFactorial(int n)
{
    if(n==1||n==0)
    {
        return 1;
    }
    else
    {
        return n*doubleFactorial(n-2);
    }
}

typedef enum{
niedostateczny,
dostateczny,
dobry,
bardzo_dobry,
} Grade;

Grade nextGrade(Grade ocena)
{
    if(ocena == niedostateczny)
        return dostateczny;

    if(ocena == dostateczny)
        return dobry;

    if(ocena == dobry)
        return bardzo_dobry;

    return bardzo_dobry;
}

int isPassing(Grade o)
{
    if(o==niedostateczny)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

int countAboveMean(int **tab, int n, int m)
{
    int w = 0;
    float art = 0.0;
    float l =0.0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            art=art+tab[i][j];
            l++;
        }
    }
    art = art/l;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(tab[i][j]>art)
            {
                w++;
            }
        }
    }

    return w;
}

struct Shipment
{
    int id;
    float weight;
};

float totalWeightAbove(struct Shipment tab[],int r,float l)
{
    float suma = 0;
    for(int i = 0;i<r;i++)
    {
        if(tab[i].weight>l)
        {
            suma=suma+tab[i].weight;
        }
    }
    return suma;
}

int main()
{
    r64 4
    float limit = 5.0;
    int r = 4;
    struct Shipment tab[] =
    {
        {1,2.5},{2,10.0},{3,5.0},{4,7.5},
    };
    printf("Odp: %.1f",totalWeightAbove(tab,r,limit));

    r64 3
    int n = 2;
    int m = 3;
    int **tab = malloc(2*sizeof(int*));
    tab[0] = malloc(3*sizeof(int));
    tab[1] = malloc(3*sizeof(int));
    tab[0][0] = 1; tab[0][1] = 2; tab[0][2] = 3;
    tab[1][0] = 4; tab[1][1] = 5; tab[1][2] = 6;
    printf("Odp: %d",countAboveMean(tab, n, m));
    free(tab[0]);
    free(tab[1]);
    free(tab);

    r64 2
    Grade ocena = bardzo_dobry;
    printf("Odp: %d\n",nextGrade(ocena));
    printf("Odp: %d",isPassing(niedostateczny));

    r64 1
    int n = 6;
    printf("Odp: %d",doubleFactorial(n));

    r42 4
    int n = 3;
        struct Employee tab[] =
    {
        {"Anna", 3000.0},
        {"Jan", 4500.0},
        {"Ewa", 2500.0}
    };
    printf("Odp: %.1f",sumSalaries(tab,n));


    r42 3
    int n = 2;
    int m = 3;
    int **tab = malloc(2*sizeof(int*));
    tab[0] = malloc(3*sizeof(int));
    tab[1] = malloc(3*sizeof(int));
    tab[0][0] = 3; tab[0][1] = -1; tab[0][2] = 7;
    tab[1][0] = 2; tab[1][1] = 8; tab[1][2] = 4;
    free(tab[0]);
    free(tab[1]);
    free(tab);
    printf("Odp: %d",maxMatrix(tab,n,m));


    r42 2
    int pEven = 0;
    int pOdd = 0;
    int r = 5;
    int tab[] = {4, 7, 2, 9, 6};
    countParity(tab,r,&pEven,&pOdd);
    printf("Parzyste: %d\nNieparzyste: %d",pEven,pOdd);

    r42 1
    int n =  6;
    printf("Odp: %d",isPerfect(n));


    r41 4
    struct Account* konto;
    konto = newAccount("Kowalski", 100.0);

        if (konto == NULL)
    {
        printf("Nie mozna utworzyc konta.\n");
        return 1;
    }

    printf("Wlasciciel: %s\n", konto->owner);
    printf("Saldo: %.2f\n", konto->balance);
    deposit(konto, 50.0);
    printf("Po wplacie 50: %.2f\n", konto->balance);
    deposit(konto, -10.0);
    printf("Po probie wplaty -10: %.2f\n", konto->balance);
    free(konto);

    r41 3
    int n = 2;
    int m = 3;
    int **tab = malloc(2*sizeof(int*));
    tab[0] = malloc(3*sizeof(int));
    tab[1] = malloc(3*sizeof(int));
    tab[0][0] = 1; tab[0][1] = 2; tab[0][2] = 3;
    tab[1][0] = 4; tab[1][1] = 5; tab[1][2] = 6;
    printf("Odp: %d",sumMatrix(tab,n,m));
    free(tab[0]);
    free(tab[1]);
    free(tab);

    r41 2
    char tab[] = {"ala ma kota"};
    printf("Odp: %d",countWords(tab));

    r41 1
    int n = 123;
    printf("Odp: %d",isPalindrome(n));


    return 0;
}
