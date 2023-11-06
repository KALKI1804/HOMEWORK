#include<stdio.h>
int main()
{
int f=1,i;
scanf("%d", &i);
while(i>=1)
{
printf("%d *", i);
f=f*i;
i--;
}
printf ("%d",f);
return 0;
}
