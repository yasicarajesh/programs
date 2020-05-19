#include<stdio.h>
#include<stdlib.h>

struct bst{
    int data;
    struct bst *left;
    struct bst *right;
    struct bst *root;
    struct bst *parent;
};
void insertion(struct bst *t,int data,struct bst *root)
{
    if(data <= t->data){
        if(t->left != NULL){
            insertion(t->left,data,root);
        }
        else{
            t->left=malloc(sizeof(struct bst));
            t->left->data=data;
            t->left->left=NULL;
            t->left->right=NULL;
            t->left->parent=t;
            
        }
    }
    else{
        if(t->right != NULL){
            insertion(t->right,data,root);
        }
        else
        {
            t->right=malloc(sizeof(struct bst));
            t->right->data=data;
            t->right->left=NULL;
            t->right->right=NULL;
            t->right->parent=t;

        }
    }

}
void insert(struct bst *tr,struct bst *data){
    if(data<=tr->data){
        if(tr->left!=NULL){
            insert(tr->left,data);
        }
        else{
            tr->left=malloc(sizeof(struct bst));
            tr->left->data=data;
            tr->left->left=NULL;
            tr->left->right=NULL;
            tr->left->parent=tr;
        }
    }

  else{
        if(tr->right!=NULL){
            insert(tr->right,data);
        }
        else{
            tr->right=malloc(sizeof(struct bst));
            tr->right->data=data;
            tr->right->left=NULL;
            tr->right->right=NULL;
            tr->right->parent=tr;
        }
    }
}

void deleteBST(struct bst *node) {
    struct bst *temp;
    if(node->left == NULL && node->right == NULL) {
        node = node -> parent;
        free(node -> left);
        free(node -> right);
        node -> left = NULL;
        node -> right = NULL;
    }
    else if(node -> left == NULL && node -> right != NULL) {
        node -> parent -> right = node -> right;
        node -> right -> parent = node -> parent;
    }
    else if(node -> left != NULL && node -> right == NULL) {
        node -> parent -> left = node -> left;
        node -> left -> parent = node -> parent;
    }
    else {
        struct bst *trav;
        if(node->parent->left == node) {
            node->parent->left = node -> right;
            node->right->parent = node -> parent;
            trav = node -> left;
            while(trav -> right != NULL) {
                trav = trav -> right;
            }
            trav -> right = node -> right -> left;
            node -> right -> left = node -> left;
            node -> left -> parent = node -> right;
            node -> right -> left -> parent = trav;
            free(node);
        }
        else {
            node -> parent -> right = node -> right;
            node -> right -> parent = node -> parent;
            trav = node -> left;
            while(trav -> right != NULL) {
                trav = trav -> right;
            }
            trav -> right = node -> right -> left;
            node -> right -> left -> parent = trav;
            node -> right -> left = node -> left;
            node -> left -> parent = node -> right;
            free(node);
        }
    }
}
int checkLeaf(struct bst *node) {
    if(node -> left == NULL && node -> right == NULL) {
        return 1;
    }
    return 0;
}
void swap(struct bst *child, struct bst *parent) {
    if(parent->left == child) {
        child-> right=parent;
        child->parent=parent->parent;
        if(parent->parent->left == parent) {
            child->parent->left=child;
        }
        else {
            child->parent->right = child;
        }
        parent->parent=child;
        parent->left=NULL;
    }
    else
    {
        child-> left=parent;
        child->parent=parent->parent;

        if(parent->parent->left == parent) {
            child->parent->left=child;
        }
        else {
            child->parent->right = child;
        }
        parent->parent=child;
        parent->right=NULL;
    }  
}
void swapq(struct bst*child,struct bst*parent){
       child->left=parent;
       if(parent->parent == parent){
           child->parent=child;
       }
    //    else{
    //        child->parent=parent->parent;
    //    }
       if(parent->parent->left==parent){
           child->parent->left=child;
       }
       else if(parent->parent->right==parent){
           child->parent->right=child;
       }
       parent->parent=child;
       parent->right=NULL;
}
// void swapq(struct bst*child,struct bst*parent){
//     if(parent->right==child){
//         child->left=parent;
//         parent->parent=child;
//         if(parent->left=parent)
//         parent->parent=child;
        
//     }
    
// }
struct bst* findChild(struct bst *node1,struct bst *node2){
    if(node1->parent==node2){
        return node1;
    }
    else if (node2->parent==node1){
        return node2;
    }
    return NULL;
}
struct bst* findGivenNode(struct bst *tree, int data) {
    if(tree!=NULL) {
        struct bst* left = findGivenNode(tree->left, data);
        if(left!=NULL && left->data == data) {
            return left;
        }
        else {
            if(tree!=NULL && tree->data == data) {
                return tree;
            }
            return findGivenNode(tree->right, data);
        }
    }
    else {
        return NULL;
    }
}

void inOrder(struct bst *tr, int data) {
    if(tr!=NULL) {
        inOrder(tr -> left, data);
        if(tr->data == data) {
            deleteBST(tr);
        }
        inOrder(tr -> right, data);
    }
}


void printTree(struct bst *tr){ //inorder
   if(tr != NULL){
       printTree(tr->left);
       printf("%d\n",tr->data);
       printTree(tr->right);
   }

}
int main()
{
    struct bst *tree,*q,*pfind;
    int temp;
    int arr[]={10,4,6},len=3;
    tree=malloc(sizeof(struct bst));
    tree -> data=8;
    tree -> left=NULL;
    tree -> right=NULL;
    tree -> root=tree;
    tree->parent=tree;
    q=tree;
    for(int i=0;i<len;i++){
    
        insertion(q,arr[i],q);
    }
     pfind = findChild((q), findGivenNode(q,10));
    if(pfind) {
        printf("checker...%d\n", checkLeaf(pfind));
        if(checkLeaf(pfind)) {
            printf("%d %d\n", pfind->data, pfind->parent->data);
            swapq(pfind, pfind->parent);
            if(pfind->parent==pfind){
            q=pfind;
            }
            printf("%d %d\n", pfind->data, pfind->parent->data);
            
        }
    }
    else {
        printf("They are not in parent child relationship");
    }

    //insert(q,7);
    // inOrder(q, 5);
    // printf("After deleting 5\n");
    printTree(q);

}