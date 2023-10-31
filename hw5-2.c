#include <stdio.h>
main()
{
int call;
scanf("%d",&call);
double df;
if (call<=800)
    df=call*0.9;
if(call>800&&call<1500)
    df=(call*0.9)*0.9;

if(call>=1500)
df=(call*0.9)*0.79;
printf("%.1f\n", df);

}
