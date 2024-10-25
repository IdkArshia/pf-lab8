#include <stdio.h>
int main() 
{
    int l,u,i,j;
    int flag=0;
    printf("enter lower limit");
    scanf("%d",&l);
    printf("enter upper limit");
    scanf("%d",&u);
    if(l==1)
	{
        l=l+1;
    }
    if (l==2)
	{
        printf("%d,",l);
        l=l+1;
    }
    for(i=l;i<=u;i++)
	{
        for(j=2;j<i;j++)
		{
            if(i%j==0)
			{
                flag=1;
                break;
            }
            
        }
        if(flag==0)
		{
            printf(" %d,",i);
        }
        flag=0;
        i++;
    }
    

return 0;
}