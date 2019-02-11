#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int main()
{
    printf("Hello\n");
    char dataword[100],genpoly[100],trailz[100];
    int ez=0,x=0;
    scanf("%s",&dataword);
    scanf("%s",&genpoly);
    ez=strlen(genpoly)-1;
    printf("%s - %s---%d",dataword,genpoly,ez);
    trailz[0]='0';
    trailz[1]='\0';
    for(x=0;x<ez;x++)
        strcat(dataword,trailz);
    printf("\ndataword after trail-%s",dataword);

    return(0);
}
