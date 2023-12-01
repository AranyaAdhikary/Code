/*  union to find the value of y = x^n where x and y are floating point
    and n is either integer or floating point */

#include<stdio.h>
#include<math.h>

struct vari
{
    float x;
    float y;
    union number
    {
        int n1;
        float n2;
    }num;
};

int main()
{
    struct vari a[10];
    int i,n,sc;
    printf("Enter the number of terms : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the value of x : ");
        scanf("%f",&a[i].x);
        printf("Enter '1' for integer n or '2' for floating point n : ");
        scanf("%d",&sc);
        printf("Enter the value of n : ");
        switch(sc)
        {
            case 1:
                scanf("%d",&a[i].num.n1);
                a[i].y = pow(a[i].x, a[i].num.n1);
                break;
            case 2:
                scanf("%f",&a[i].num.n2);
                a[i].y = pow(a[i].x, a[i].num.n2);
                break;
            default:
                break;                
        }  
    }
    printf("x\t\ty\n");
    for(i=0;i<n;i++)
    {
        printf("%f\t",a[i].x);
        printf("%f\t\n",a[i].y);
    }
}
