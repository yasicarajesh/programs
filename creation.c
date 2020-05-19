//linked list creation

#include<stdio.h>
#include<stdlib.h>
//defining a structure
struct node{     
    int data;
    struct node *next;  

};
void deleteAtlast(struct node *p){
    struct node *temp1;
    temp1=p->next;
    p->next=NULL;
    free(temp1);
   


}
struct node* deleteAtfirst(struct node *q){
    struct node *temp;
    temp=q->next;
    free(q);
    return temp;
}
void deleteAtpos(struct node *p,int pos1){
    struct node *temp3;
    //scanf("%d",&pos1);
    for(int i=1;i<pos1-1;i++){
        p=p->next;
    }
    temp3=p->next;
    p->next=p->next->next;
    free(temp3);

}
//creating a link
int main()
{
    struct node *p,*q,*pnode1,*pnode2,*pnode3,*pnode4;  
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
 //    Insertion at first
 pnode1=malloc(sizeof(struct node));
 pnode1->data=60;
 pnode1->next=NULL;
 pnode1->next=q;                      
 q=pnode1;
 
 // Insertion at last
 pnode2=malloc(sizeof(struct node));
 pnode2->data=80;
 pnode2->next=NULL;
 p->next=pnode2;
//Insertion at given position
int pos;
scanf("%d",&pos); 
pnode3=malloc(sizeof(struct node));
pnode3->data=50;
pnode3->next=NULL;
pnode4=malloc(sizeof(struct node));
pnode4->data=70;
pnode4->next=NULL;
p=q;

for(int i=1;i<pos;i++)
{
  p=p->next;
} 
// pnode3->next=p->next;
// p->next=pnode3;
pnode3->next=pnode4;

pnode4->next=p->next;
p->next=pnode3;
p=q;

printf("After Inserting at first & last\n");
 while(p != NULL)
 {
     printf("%d\n",p->data);   
      p=p->next;
 } 
// q=deleteAtfirst(q);
 p=q;

printf("After deleting at first \n");
 while(p != NULL)
 {
     printf("%d\n",p->data);   
      p=p->next;
 } 
 p=q;
 printf("After deleting at last\n");
 while(p->next->next != NULL)
 {  
      p=p->next;
 } 
 //deleteAtlast(p);
 p=q;

while(p!= NULL)
 {
     printf("%d\n",p->data);   
      p=p->next;
 }
 p=q; 

//deleteAtpos(p,pos1);
while(p!= NULL)
 {
     printf("%d\n",p->data);   
      p=p->next;
 }


 return 0;
}