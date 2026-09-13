#include <stdio.h>
#include <stdlib.h>


int digitProduct(int n)
{
    if(n==0)
    {
        return 0;
    }

    int wynik = 1;

   while(n>0)
   {
       wynik = wynik * (n % 10);
       n = n / 10;
   }
    return wynik;
}

int countConsonants(char tab[])
{
    int count = 0;
    int i = 0;
    while(tab[i] != '\0')
    {
        char ch = tab[i];

        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        {
            if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u' &&
                ch != 'A' && ch != 'E' && ch != 'I' && ch != 'O' && ch != 'U')
            {
                count++;
            }
        }
        i++;
    }

    return count;
}

int sumAboveDiagonal(int **macierz, int n)
{
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            sum += macierz[i][j];
        }
    }
    return sum;
}


int main()
{
    printf("Zadanie 3\n");
    int n = 3;

    int r0[] = {2, 3, -3};
    int r1[] = {1, 4, 7};
    int r2[] = {-3, -6, 11};

    int *macierz[] = {r0, r1, r2};

    int wynik3 = sumAboveDiagonal(macierz, n);
    printf("Wynik zadania 3 to: %d\n", wynik3);



    printf("Zadanie 1\n ");
    int n;
    printf("Podaj nieujemna liczbe n: ");
    scanf("%d", &n);
    if(n<0)
    {
        n = n*(-1);
    }
printf("Wynik to: %d\n", digitProduct(n));

printf("Zadanie 2\n");
char tab[] = "Ala ma kota";
int wynik2 = countConsonants(tab);
printf("Wynik to: %d\n", wynik2);




    return 0;
}
