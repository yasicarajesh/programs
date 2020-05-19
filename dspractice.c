#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node* deleteatFirst(struct node *q){
    struct node *temp;
    temp=q->next;
    free(q);
    return temp;    
}
struct node* printNode(struct node *p){
    while(p!=NULL)
    {
        printf("%d",p->data);
        p=p->next;
    }
}
struct node* insertAtgivenPos(struct node *pnode3,struct node *p){
         pnode3->next=p->next;
         p->next=pnode3;
}
int main(){
    struct node *p,*q,*pnode,*pnode1,*pnode2,*pnode3;
    int n,count=0,len,pos;
    scanf("%d",&n);
    p=malloc(sizeof(struct node));
    scanf("%d",&(p->data));
    q=p;
    p->next=NULL;
    for(int i=1;i<n;i++){
         p->next=malloc(sizeof(struct node));
         p=p->next;
        scanf("%d",&(p->data));
        p->next=NULL;
        
    }
    //  INSERT AT LAST 
     pnode1=malloc(sizeof(struct node));
     pnode1->data=90;
     pnode1->next=NULL;
     p->next=pnode1; 
     p=q;
    //INSERT AT FIRST
    pnode=malloc(sizeof(struct node));
    pnode->data=80;
    pnode->next=NULL;
    pnode->next=p;
    q=pnode;
    p=q;
    printNode(p);
    //INSERT AT GIVEN POS
    printf("Enter the position to insert");
    scanf("%d",&pos);
    pnode3=malloc(sizeof(struct node));
    pnode3->data=70;
    pnode3->next=NULL;
    for(int i=1;i<pos;i++){
        p=p->next;
    }
    insertAtgivenPos(pnode3,p);
    p=q;
    printNode(p);
    //DELETE AT FIRST
    p=q;
    q=deleteatFirst(p);
    p=q;
    printNode(p);
    //FIND MIDDLE ELEMENT
    while(p!=NULL)
    {
        p=p->next;
        count=count+1;
    }
    if(count%2==0){
        len=count/2;
    }
    else{
        len=count/2+1;
    }
    printf("\nLEN:%d",len);
    p=pnode;
    for(int i=0;i<=len;i++){
       
        if(i==len-1){
            printf("\nMID:%d",p->data);
        }
         p=p->next;
    }
}