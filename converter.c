#include<stdio.h>
int main()
{

    int n,n1,n2,n3;
    double meter,kilometer,gram,kilogram,celsius,farenheit;
    printf(" press 1 for length convert\n.........OR.......\n press 2 for mass convert\n............OR........\n press other number for temperature convert\n");
    scanf("%d",&n);
    if(n==1)
        {
            printf("press 1 for kilometer to meter\n  or\n press other number for meter to kilometer\n");
        scanf("%d",&n1);
        if(n1==1)
            {
                printf("kilometer:\n");
            scanf("%lf",&kilometer);
          meter=kilometer*1000;
        printf("meter:\n%lf\n",meter);
        }

        else
        {
        printf("meter:\n");
        scanf("%lf",&meter);
        kilometer=meter/1000;
        printf("kilometer:\n%lf\n",kilometer);
        }
        }
        else if(n==2)
        {
            printf("press 1 for kilogram to gram\n..... OR.....\n press other number for gram to kilogram\n");
            scanf("%d",&n2);
            if(n2==1)
            {
                printf("kilogram:\n");
                scanf("%lf",&kilogram);
                gram=kilogram*1000;
                printf("gram:\n%lf\n",gram);


            }
            else
            {
                printf("gram:\n");
                scanf("%lf",&gram);
                kilogram=gram/1000;
                printf("kilogram:\n%lf\n",kilogram);
            }

        }

      else
      {
          printf("press 1 for celsius to farenheit\n........OR........\npress other number for farenheit to celsius\n");
          scanf("%d",&n3);
          if(n3==1)
          {
              printf("celsius:\n");
              scanf("%lf",&celsius);
              farenheit=(9/5)*celsius+32;
              printf("farenheit:\n%lf\n",farenheit);
          }
          else
          {
            printf("farenheit:\n");
            scanf("%lf",&farenheit);
            celsius=(5*(farenheit-32))/9;
            printf("celsius:\n%lf\n",celsius);
          }
      }


return 0;
}
