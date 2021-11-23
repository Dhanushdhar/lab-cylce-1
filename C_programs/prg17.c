#include <stdio.h>

int main()
{
    int temp,n,sec,lar;
    printf(" limit:");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("num:");
        scanf("%d",&temp);
        if(i==0)
        sec=lar=temp;
        else if(lar<temp)
        {
            sec=lar;
            lar=temp;
        }
        else if(temp>sec)
        sec=temp;
    }
    printf("Largest:%d",lar);
    printf("\nSecond largest:%d",sec);

    return 0;
}
