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
// } 
// struct node* findMid(struct node *source, struct node *copy) {
//     if(source->next == NULL) {
//         return copy;
//     } 
//     else if(source->next->next == NULL) {
//         return copy;
//     }
//     else {
//         return findMid(source->next->next, copy->next);
//     }
// }

// void reverseList(struct node *p)
// {
//     struct node *prev, *cur;

//     if( p->next != NULL)
//     {
//         prev = p;
//         cur = p->next;
//          p = p->next;

//         prev->next = NULL; 

//         while(p != NULL)
//         {
//              p  = p->next;
//             cur->next = prev;

//             prev = cur;
//             cur = p;
//         }

//          p = prev; 

//         printf("SUCCESSFULLY REVERSED LIST\n");
//     }
// }
// struct node* traverseLastNode(struct node *traverseNode) {
//     while(traverseNode->next != NULL) {
//         traverseNode = traverseNode -> next;
//     }
//     return traverseNode;
//}
struct node* reverse(struct node *source, struct node *dest) {
    if(source->next != NULL) {
        struct node *initial;
        initial = source;
        while(source->next->next != NULL) {
            source = source -> next;
        }
        dest->next = source;
        source->next = NULL;
        return reverse(initial, dest->next);
    }
    else {
      return source;
    }
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

    reverse(q,p);
    while(p!= NULL) 
      {
        printf("%d\n",p->data);
        p=p->next;
     
      } 
}

   
 
//   p=q;
//   mid=findMid(p,q);
//   printf("%d\n",mid->data);
//   p=q;
  int h=getlength(p);
  if(h%2==0)
  {
      for(int i=0;i<(h/2)-1;i++)
      {
          p=p->next;
      }
      printf("mid element is %d\n",p->data);
  }
  else
  {
      for(int i=0;i<h/2;i++)
      {
          p=p->next;
      }
      printf("mid element is %d\n",p->data);


  }
  printf("Length %d:\n",h);
  
 


// }