int check(struct bst*p,struct bst*q)
{
if(p->left->data!=q- && p->right->data==q)
{
  int parent=p->data;
  return parent;        //parent
}
elseif(p->left->data==q && p->right->data != q)
{
   int parent=p->data;
   return parent;
}
elseif(q->left->data!=p && q->right->data==p)
{
   int parent=q->data;
   return parent;
}
else(q->left->data==p && q->right->data!=p)
{
   int parent=q->data;
   return parent;
}


// leaf node
int leaf(struct *par,struct *child)
{
  if(child->left == NULL && child->right == NULL)
{   
    
    child->parent=par->parent;

    
}
else{
   no swap..
}

