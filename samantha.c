//In this code we are assuming that a sorted array is already formed from an unbalanced tree
# include <stdio.h>
# include <stdlib.h>

struct node {
	int x;
	struct node *left;
	struct node *right;
};

struct node *BST(int *a,int initial,int final);

int main()
{
int a[] = {};//Enter the elements of array in this(or modify the code accordingly for input)
struct node *p;
p = BST(a,0,n-1);//Assuming there are 'n' elements in an array.Here the function returns the 'root' of the balanced binary tree
return 0;
}


struct node *BST(int *a,int initial,int final)
{
	struct node *p,*q;
p = (struct node *)malloc(sizeof(struct node));
p->x = a[(initial+final)/2];
if((final-initial)==1){
	q = (struct node *)malloc(sizeof(struct node));
q->x = a[((initial+final)/2)+1];
q->left = NULL;
q->right = NULL;
p->left = NULL;
p->right = q;
return p;
}
if(initial == final){p->left = NULL;p->right = NULL;return p;}
p->left = BST(a,initial,((initial+final)/2)-1);
p->right = BST(a,((initial+final)/2)+1,final);
return p;
}
