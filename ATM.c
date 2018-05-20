#include <stdio.h>

int main(void) {
int w;
    float a;
scanf("%d",&w);
scanf("%f",&a);
if(w%5==0)
{
    if(w<=a-0.50)
    printf("%.2f",a-w-0.50);
    else
    printf("%.2f",a);
}
else
printf("%.2f",a);
	return 0;
}
