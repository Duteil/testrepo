//programme pour des bases inférieures à dix
# include <stdio.h>

int main()
{
    int i=0;
    int n=4664;
    int a=0;
    int j=0;
    int k=0;
    int m=0;
    printf ( "base de destination ?" ); scanf ( "%i" ,&a);
    if(a>n)printf("en base %i, le nombre s'écrit %i",a,n);
    else {
        while(a*a^i<n)i++;
        m=n/(a^i);
        n=n-(m*a^i);
        for(j=i;j>-1;j--)
            {k=n/(a^j);
             m=10*m+k;
             n=n-(k*a^j);}
        printf("en base %i, le nombre %i s'écrit %i",a,n,m);
         }
return 0;
}
