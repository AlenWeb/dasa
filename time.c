#include<stdio.h>
#include<time.h>
int main()
{
    time_t s,t;
    s= clock();
    int i=0;
    while(i<10000000)
    {
        i++;
    }
    t= clock();
    printf("%d", (t-s));
}
