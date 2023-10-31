#include <stdio.h>
main()
{
int H,M;
scanf("%d %d",&H,&M);
float ht=30*H+0.5*M;
float mt=6*M;
double t;
    if(ht>360)
        ht=ht-360;
    t=ht-mt;

    if(t>0&&t<=180)
    {
       printf("%.3f\n", t);

    }
    if(t>0&&t>180)
    {
        t=t-180;
       printf("%.3f\n", t);

    }
    if(t<0&&t<=180)
    {
        t=t*(-1);
         printf("%.3f\n", t);
    }
    if(t<0&&t>180)
    {
        t=t+180;
        t=t*(-1);
       printf("%.3f\n", t);

    }



}
