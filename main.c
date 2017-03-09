#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 7, num;
    do
    {
        printf("Digite um numero\n");
        scanf("%d", &num);

        if(num == x) {
            printf("acertou\n");
            break;
        }
        else if((x > num) && (num >=(x - 3)))
        {
            printf("quente\n");

        }
        else if((num >= x - 6) && (num <= x - 4))
        {
            printf("morno\n");
        }
        else if((num > x) || (num <= x))
        {
            printf("frio\n");
        }
    }
    while(1);


    return 0;
}
















/*  }
  while(num >= 0);
  if(x > num & num >=(x - 3))
  {
      printf("quente\n");

  }
  else if(num >= x - 6 & num <= x - 4)
  {
      printf("morno\n");
  }
  else if(num > x)
  {
      printf("frio\n");
  }
  else
      printf("acertou\n");


  return 0;
}*/
