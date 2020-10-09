#include<stdio.h>
#include<stdlib.h>
struct node{
    int n,x,y;
    struct node *next;
} *p1, *p2, *r1, *r2, *p;
int a,b,c,d1,d2;
void add()
{
    r1=p1;
    while(r1->next!=NULL)
    {
        r2=r1->next;
        p=r1;
        while(r2!=NULL)
        {
            if(((r1->x)==(r2->x))&&((r1->y)==(r2->y)))
            {
                p->next=r2->next;
                r1->n=(r1->n)+(r2->n);
                r2=r2->next;
                p=r2;
            }
            else
            p=r2;

            r2=r2->next;
        }
        r1=r1->next;
    }
    printf("added elements");
    while(p1!=NULL)
    {
        printf("%d X^%d Y^%d+ ", p1->n,p1->x,p1->y);p1=p1->next;
    }
}
void main()
{
    printf("Enter polynomial 1's number of terms:");
    scanf("%d", &d1);
    while(d1>0)
    {
        if(p1==NULL)
        {
            p1=(struct node *)malloc(sizeof(struct node*));
            r1=p1;
        }
        else
        {
            r1->next=(struct node*)malloc(sizeof(struct node*));
            r1=r1->next;
        }
        printf("Enter coefficent, power of x,power of y");
        scanf("%d%d%d", &a,&b,&c);
        r1->n= a;r1->x= b;r1->y=c;
        d1--;
    }
    printf("Enter polynomial 2's number of terms:");
    scanf("%d", &d2);
    while(d2>0)
    {
        if(p2==NULL)
        {
            p2=(struct node *)malloc(sizeof(struct node*));
            r2=p2;
        }
        else
        {
            r2->next=(struct node*)malloc(sizeof(struct node*));
            r2=r2->next;
        }
        printf("Enter coeffecent, power of x,power of y");
        scanf("%d%d%d", &a,&b,&c);
        r2->n= a;r2->x= b;r2->y=c;
        d2--;
    }
    r1->next=p2;
    /*
    printf("p1: ");
    r1=p1;
    while (r1!=NULL)
    {printf("%d", r1->n);r1=r1->next;}
    printf("/np2:");
    r1=p2;
    while (r1!=NULL)
    {printf("%d", r1->n);r1=r1->next;}
    
    add();*/

    r1=p1;
    while(r1->next!=NULL)
    {
        r2=r1->next;
        p=r1;
        while(r2!=NULL)
        {
            if(((r1->x)==(r2->x))&&((r1->y)==(r2->y)))
            {
                p->next=r2->next;
                r1->n=(r1->n)+(r2->n);
                r2=r2->next;
                p=r2;
            }
            else
            p=r2;

            r2=r2->next;
        }
        r1=r1->next;
    }
    printf("added elements");
    while(p1!=NULL)
    {
        //printf("%d", p2->n);
        printf("%d X^%d Y^%d+ ", p1->n,p1->x,p1->y);
        p1=p1->next;
    }
}