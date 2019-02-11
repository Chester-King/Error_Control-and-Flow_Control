#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

char quest[100],rem[100];
char dataword[100],genpoly[100],trailz[100];
int co=0,le=0,nord=0;
int main()
{
    printf("Hello\n");
    int ez=0,x=0;
    scanf("%s",&dataword);
    scanf("%s",&genpoly);
    ez=strlen(genpoly)-1;
    printf("%s - %s---%d",dataword,genpoly,ez);
    trailz[0]='0';
    trailz[1]='\0';
    for(x=0;x<ez;x++)
        strcat(dataword,trailz);
    co=0;
    xord();

    return(0);
}

void xord()
{
    int y=0,z=0;
    le=strlen(genpoly);
    strcpy(rem,genpoly);
    printf("\ndataword after trail-%s\n%d",dataword,le);
    nord=strlen(dataword)-le+1;
    co=-1;
    for(y=0;y<nord;y++)
    {
        co++;
        for(z=0;z<le;z++)
        {

        }

    }

    // substr(dataword,co,le);

}

