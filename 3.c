#include <stdio.h>
#include <stdlib.h>

int countDistinctDigits(int n)
{
    int licz = 0;
    int c;
    int tab[10] = {0};
    if(n==0)
    {
        return 1;
    }
    else
    {
        while(n>0)
        {
            c = n%10;

            if(tab[c]==0)
            {
                tab[c] = 1;
                licz++;
            }
            n=n/10;
        }
    }
    return licz;
}

void reverseString(char n[])
{
    int d  = 0;
    while(n[d] != '\0')
    {
        d++;
    }

    for(int i =0;i <d/2;i++)
    {
        char temp = n[i];
        n[i] = n[d-1-i];
        n[d-1-i] = temp;
    }
}

int isSymmetric(int **tab, int n)
{
    for(int i =0;i<n;i++)
    {
        for(int j =0;j<n;j++)
            if(tab[i][j]!=tab[j][i])
        {
            return 0;
        }
            return 1;
    }
}

struct Measurement
{
    char label[30];
    float value;
};

char* closestToZero(struct Measurement tab[], int r)
{
    int index =0;
    for(int i =0;i<r;i++)
    {
        if(tab[i].value<0)
        {
            tab[i].value = tab[i].value * (-1);
        }
    }
    float temp = tab[0].value;
        for(int i = 0;i<r;i++)
    {
        if(tab[i].value<temp)
        {
            temp = tab[i].value;
            index=i;
        }
    }
    return tab[index].label;
}


int main()
{
    //r51 4
    int r = 3;
    struct Measurement tab[] =
    {
    {"A",-3.0},
    {"B",1.5},
    {"C",2.0}
    };
    printf("Odp: %s",closestToZero(tab,r));

    //r51 3
//    int n = 3;
//    int **tab = malloc(3*sizeof(int*));
//    tab[0] = malloc(3*sizeof(int));
//    tab[1] = malloc(3*sizeof(int));
//    tab[2] = malloc(3*sizeof(int));
//    tab[0][0] = 1; tab[0][1] = 2; tab[0][2] = 3;
//    tab[1][0] = 2; tab[1][1] = 5; tab[1][2] = 6;
//    tab[2][0] = 3; tab[2][1] = 6; tab[2][2] = 9;
//    printf("Odp: %d",isSymmetric(tab,n));
//    free(tab[0]);
//    free(tab[1]);
//    free(tab[2]);
//    free(tab);


    //r51 2
//    char n[] = "Ala";
//    printf("Odp: %s\n",n);
//    reverseString(n);
//    printf("Odp: %s",n);

    //r51 1
//    int n = 1213;
//    printf("Odp: %d",countDistinctDigits(n));


    return 0;
}
