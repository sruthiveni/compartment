#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
        int n;
    scanf("%d",&n);
    int sum1=0;
    while(n>0)
    {
    int n1;
    scanf("%d",&n1);
    int a[n1];
    for(int i=1;i<=n1;i++)
    {
        scanf("%d",&a[i]);
    }
    int c;
    scanf("%d",&c);
    for(int i=0;i<c;i++)
    {
        int s,e,we;
        scanf("%d %d %d",&s,&e,&we);
        for(int i=s;i<=e;i++)
        {
            a[i]+=we;
        }
    }
            for(int i=1;i<=n1;i++)
            {
                sum1+=a[i];
            }
        printf("%d",sum1);
        sum1=0;
        n--;
    }
}
