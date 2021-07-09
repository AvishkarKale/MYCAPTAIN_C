#include<stdio.h>
int main()
{
    int i,j,k,l,m,n;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    m=2*n;
    l=0;
    {
        for(i=0;i<n;i++)
        {
            l=l+2;
            for(j=0;j<l;j++)
            {
                if(j%2==0)
                {
                    printf("0");
                }
                else
                {
                    printf("1");
                }
            }
            printf("\n");
        }
    }
    return 0;
}
