#include<stdio.h>
#include<stdlib.h>
//defining a structure
struct node{     
    int data;
    struct node *next;  //type of node

};
//creating a link
int main()
{
    struct node *p;  //  Reference (struct node)
    p=malloc(sizeof(struct node)); //Refering to the struct node datatype(creating memory)excatly we dont know 2 or 3 bytes
    p->data=10;
    p->next=NULL;
    p->next=malloc(sizeof(struct node));
    p=p->next;
    p->data=20;
    p->next=NULL;
    p->next=malloc(sizeof(struct node));
    p=p->next;
    p->data=30;
    p->next=NULL;   
    return 0;
}