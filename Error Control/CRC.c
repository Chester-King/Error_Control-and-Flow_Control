#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

char quest[100],rem[100];
char dataword[100],genpoly[100],trailz[100];
int co=0,le=0;
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
    printf("\ndataword after trail-%s\n",dataword);
    co=0;

    return(0);
}

void xord()
{
    le=strlen(genpoly);
    substr(dataword,co,le)

}

