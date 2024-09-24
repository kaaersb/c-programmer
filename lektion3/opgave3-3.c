#include <stdio.h>

int main(void)
{
    int pH;
    printf("Indtast pH vaerdi\n > ");
    scanf("%d", &pH);

    if (pH > 7)
    {
        if (pH == 7)
        {
            printf("Neutral");
        }   else {
            if (pH < 12)
            {
                printf("Alkaline");
            }
            else
            {
                printf("Very alkaline!!!!!!!");
            }
        }
    }
    else
    {
        if (pH == 7)
        {
            printf("Neutral");
        }
        else
        {
            if (pH >= 2)
            {
                printf("Acidic");
            }
            else
            {
                printf("Very acidic");
            }
        }
    }

    return 0;
}


/* Alternativ løsning

  if (ph <= 2)
     printf("Very acidic");  
  else if (ph < 7) 
     printf("Acidic");       
  else if (ph == 7)
     printf("Neutral");      
  else if (ph < 12)
     printf("Alkaline");     
  else 
     printf("Very alkaline");
*/