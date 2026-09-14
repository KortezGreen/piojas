#include<stdio.h>
#include<stdlib.h>

int digitAt(int n, int k)
{
    int w;
    int l =0;
    int n2 =n;
    while(n2>0)
    {
    l++;
    n2=n2/10;
    }
    printf("%d\n",l);
    if(k>=l)
    {
    return 0;
    }
    else
    {
    for(int i=0;i<=k;i++)
    {
    n=n%10;
    }
    return n;
    }
}

int seqH(int n)
{
    int w;
    if(n==0)
    {
        return 2;
    }
    else
    {
        return 3*seqH(n-1)-n;
    }
}

int isIdentity(int **tab, int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(i == j)
            {
                if(tab[i][j] != 1)
                {
                    return 0;
                }
            }
            else
            {
                if(tab[i][j] != 0)
                {
                    return 0;
                }
            }
        }
    }

    return 1;
}

struct Hotel
{
char name[30];
int stars;
float price;
};

char* cheap(struct Hotel tab[], int r, int min)
{
float w = tab[0].price;
int index =0;
for(int i =0;i<r;i++)
{
if(w>tab[i].price || tab[i].stars>min)
{
w = tab[i].price;
index = i;
}
}
return tab[index].name;
};


int main()
{
//r65 4
int r = 4;
int min = 4;
struct Hotel tab[] = 
{
{"Alfa",3,200.0},
{"Beta",4,350.0},
{"Gamma",5,300.0},
{"Delta",4,420.0}
};
printf("Odp: %s",cheap(tab,r,min));

//r65 3
//    int n = 3;
//    int **tab = malloc(3*sizeof(int*));
//    tab[0] = malloc(3*sizeof(int));
//    tab[1] = malloc(3*sizeof(int));
//    tab[2] = malloc(3*sizeof(int));
//    tab[0][0] = 1; tab[0][1] = 0; tab[0][2] = 0;
//    tab[1][0] = 0; tab[1][1] = 1; tab[1][2] = 0;
//    tab[2][0] = 0; tab[2][1] = 0; tab[2][2] = 1;
//    printf("Odp: %d",isIdentity(tab,n));
//    free(tab[0]);
//    free(tab[1]);
//    free(tab[2]);
//    free(tab);
    
    
//r65 2
//    int n = 5;
//    printf("Odp: %d",seqH(n)); 


//r65 1
//    int n = 54321;
//    int k = 0;
//    printf("Odp: %d",digitAt(n,k));
    
    
    return 0;
} 
