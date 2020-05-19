#include<stdio.h>
#include<stdlib.h>
//defining a structure
struct node{     
    int data;
    struct node *next;  

};
int getlength(struct node *len)
{
    int count=0;
    while(len!=NULL)
    {
        len=len->next;
        count=count+1;
        
    }
    return count;
}
int main()
{
    struct node *p,*q,*mid,*rev;  
    int n;                                                              
    scanf("%d",&n);
    p=malloc(sizeof(struct node)); 
    scanf("%d",&(p->data)); 
    q=p; 
    p->next=NULL;
    for(int i=1;i<n;i++)
    {
        p->next=malloc(sizeof(struct node));
        p=p->next;
        scanf("%d",&(p->data));
        p->next=NULL;       
    }
     
    p=q;
   while(p->next!= NULL) 
   {
       printf("%d\n",p->data);
       p=p->next;
     
  } 
  p=q;
  int h=getlength(p);
  if(h%2==0)
  {
      for(int i=0;i<(h/2)-1;i++)
      {
          p=p->next;
      }
      p->next=NULL;
      p=p->next;
      printf("mid element is %d\n",p->data);
  }
  else
  {
      for(int i=0;i<h/2;i++)
      {
          p=p->next;
      }
      p->next=NULL;
      p=p->next;
      printf("mid element is %d\n",p->data);


  }
  

}