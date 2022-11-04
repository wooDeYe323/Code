
#include <stdio.h>
#include <math.h>
int main(void)
{
    double x1,x2,y1,y2,d;

    printf("please enter four number.\n");

    scanf("%lf %lf %lf %lf",&x1,&y1,&x2,&y2);
    d = sqrt((x1 - x2 ) * (x1 - x2) + (y1 - y2)*(y1 - y2));
    printf("%.2f\n",d);

    getchar();
    getchar();

    return 0;

}
