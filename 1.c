#include <stdio.h>
#include <stdlib.h>

int sumDigitsSquared(unsigned int n)
{
    int wynik = 0;
    while(n>0)
    {
        int cyfra = n % 10;
        int kwadrat = cyfra * cyfra;
        wynik = wynik + kwadrat;
        n = n / 10;
    }
    return wynik;
}

int digitProduct(unsigned int n)
{
    int wynik = 1;
        while(n>0)
        {
            int cyfra = n%10;
            wynik = wynik * cyfra;
            n = n/10;
        }
    return wynik;
}

int countConsonants(char *t)
{
    int i = 0;
    int licznik = 0;
        while(t[i] != '\0')
        {
            licznik++;
            if(t[i] == ' ' ||t[i] == 'a' ||t[i] ==  'A' ||t[i] == 'e' ||t[i] ==  'E' ||t[i] ==  'i' ||t[i] ==  'I' ||t[i] ==  'o' ||t[i] ==  'O' ||t[i] ==  'u' ||t[i] ==  'U')
                {
                    licznik--;
                }
                i++;
        }
    return licznik;
}

int sumAboveDiagonal(int tab[3][3])
{
    int w = 0;
        for(int i = 0; i < 3; i++)
        {
            for(int j = i+1; j < 3; j++)
            {
                w = w+tab[i][j];
            }
        }
    return w;
}

struct Car
{
    char model[50];
    int year;
    int mileage;
};

char* getModel(struct Car tab[], int rozmiar)
{
    int indeksNajmniejszego = 0;
        for (int i = 1; i < rozmiar; i++)
    {
        if (tab[i].mileage < tab[indeksNajmniejszego].mileage)
        {
            indeksNajmniejszego = i;
        }
    }

    return tab[indeksNajmniejszego].model;
}

int lcm(int a, int b)
{
    int min;
    int max;
    if(a>=b)
    {
        min=b;
        max=a;
    }
    else
    {
        min=a;
        max=b;
    }
    int w = max;
    while(w%min!=0)
    {
        w=w+max;
        printf("%d\n",w);
    }
        return w;
}

    void analyzeNumber(int number, int *pCount, int *pSum)
    {
        int l = 0;
        int s = 0;
        while(number>0)
        {
            l++;
            s =s + (number%10);
            number = number/10;
        }
        *pCount = l;
        *pSum = s;
    }

int sumInner(int tab[3][4],int x,int y)
{
    int w = 0;

    if(x<=2||y<=2)
    {
        return w = 0;
    }
    else
    {
        for(int i = 1;i<x-1;i++)
        {
            for(int j = 1;j<y-1;j++)
            {
                printf("%d\n",tab[i][j]);
                w =w+tab[i][j];
            }
        }
    return w;
    }
}

    int isPowerOfTwo(int n)
    {
        if (n <= 0)
    {
        return 0;
    }

    while (n % 2 == 0)
    {
        n = n / 2;
    }

    if (n == 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    }

int countUpper(char tab[])
{
    int w = 0;
    int i = 0;

    while (tab[i] != '\0')
    {
        if (tab[i] >= 'A' && tab[i] <= 'Z')
        {
            w++;
        }
        i++;
    }
    return w;
}

int countAbove(int **tab,int x,int y,int v)
{
    int w = 0;
    for(int i=0;i<x;i++)
    {
        for(int j=0;j<y;j++)
        {
            if(tab[i][j]>v)
            {
                w=w+1;
            }
        }
    }
    return w;
}

int main()
{
    3  27
    int value = 4;
    int x = 2;
    int y = 3;
    int m[2][3] = {{2,6,1},{8,-4,5}};

    int *wiersze[2] = { m[0], m[1] };
    int **tab = wiersze;

    printf("Odp %d",countAbove(tab,x,y,value));


    2  27
char tab[] = "Ala Ma Kota";
printf("Odp %d",countUpper(tab));

    1  27
int n = 14;
printf("Odpowiedz to %d",isPowerOfTwo(n));


3 36
    int tab[3][4] = {{1,2,3,4},{5,6,7,8},{9,1,2,3}};
    int x = 3;
    int y = 4;
    int w = sumInner(tab,x,y);
    printf("Wynik to %d",w);


2 36
int number = 405;
int count = 0;
int sum = 0;
int *pCount = &count;
int *pSum = &sum;
analyzeNumber(number, pCount, pSum);
printf("Liczba cyfr to %d a Suma cyfr to %d",*pCount,*pSum);


1 36
    int a = 4;
    int b = 6;
    int w = lcm(a,b);
    printf("Wynik to: %d\n",w);


z1
    unsigned int n = 123;
    int w = sumDigitsSquared(n);
    printf("%d\n",w);

z1 21
unsigned int n;
printf("Podaj nieujemna liczbe n: ");
scanf("%u",&n);
int wynik = digitProduct(n);
printf("\nWynik to: %u",wynik);

z2 21
char t[] = "Ala ma kota";
int w = countConsonants(t);
printf("Wynik to: %d",w);

z3 21
int tab[3][3] = {{2,3,-3},{1,4,7},{-3,-6,11}};
int w = sumAboveDiagonal(tab);
printf("Wynik to: %d",w);

z4 21
 struct Car bazaSamochodow[4] = {
        {"Opel", 2014, 80000},
        {"Honda", 2018, 50000},
        {"Ford", 2012, 50000},
        {"Mazda", 2020, 95000}
    };

    char* najmniejszyModel = getModel(bazaSamochodow, 4);
    printf("Samochod o najmniejszym przebiegu to: %s\n", najmniejszyModel);

    return 0;
}
