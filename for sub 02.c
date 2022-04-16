#include<stdio.h>
#include<string.h>
int main ()
{
    char s[101];
    int i,n,l;
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        scanf("%s",s);
        l=strlen(s);
        if (l>10)
            printf("%c%d%c",s[0],l-2,s[l-1]);
        else printf("%s",s);
        printf("\n");

    }
    return 0 ;
}

