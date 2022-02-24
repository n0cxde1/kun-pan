#include <stdlib.h>
#include <string.h>

int main()
{
   char reponse[10];
   int i = 1;

   while(i < 10)
   {
    printf("As tu manger aujourd'hui ? \n");
    scanf("%s", reponse);
    if(reponse[0] == 'a' || reponse[0] == 'A')
        printf("Bonne digestion \n");
    else if(reponse[0] == 'n' || reponse[0] == 'N')
        printf("va manger \n");
    i++;
   }
   printf("Va chier");
   return 0;
}
