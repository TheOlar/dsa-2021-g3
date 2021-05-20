#include <stdio.h>
#include <stdlib.h>



int drumuri(int n, int m)
{
    if(n==1 || m==1)
    return 1;

    else return(drumuri(n-1, m-1)+
                drumuri(n-1, m)+
                drumuri(n, m-1));
}



int main()
{
    int n, m;

    printf("Citeste n:  \n");
    scanf("%d", &n);

    printf("Citeste m:  \n");
    scanf("%d", &m);

    printf("%d " , drumuri(n, m));


    return 0;
}
