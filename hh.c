#include<stdio.h>
#include<conio.h>
int main()
{
int i,a,b;
printf("Enter the for a and b");
scanf("%d%d",&a,&b);
while (a < b)
    {
        flag=0;

        for(i=2; i<=a/2; ++i)
        {
            if(a%i == 0)
            {
                flag=1;
                break;
            }
        }

        if (flag == 0)
            printf("%d ",a);

        ++a;
    }
return 0;
}
