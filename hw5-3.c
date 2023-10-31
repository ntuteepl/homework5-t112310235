#include <stdio.h>
main()
{
int hour;
scanf("%d",&hour);
int hour_money;
scanf("%d",&hour_money);
double money;
if (hour<=60)
    money=hour*hour_money;
if (hour>60&&hour<=120)
    money=60*hour_money+(hour-60)*hour_money*1.33;
if (hour>120)
    money=60*hour_money+60*hour_money*1.33+(hour-120)*hour_money*1.66;
printf("%.1f\n", money);

}
