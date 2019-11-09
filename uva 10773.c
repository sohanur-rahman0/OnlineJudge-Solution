#include <stdio.h>
#include <math.h>

int main()
{
    int tc,c = 0;
    double d, v, u, t1, t2;
    scanf("%d", &tc);
    while(tc--)
    {
        scanf("%lf %lf %lf", &d, &v, &u);
        t1 = d/u;
        t2 = d/sqrt(u*u-v*v);
        if(v >= u || t1 == t2)
        {
            printf("Case %d: can't determine\n", ++c);
            continue;
        }
        printf("Case %d: %.3lf\n", ++c, t2-t1);
    }
    return 0;
}
