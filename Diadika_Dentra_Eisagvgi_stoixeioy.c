/*diadika_dentra_eisagvgi*/

#include<stdio.h>

typedef struct node{
	int key;
	struct node*left;
	struct node *right;
	
};TreeNode;

void insert (TreeNode*t,int value){//h riza prepei na yparxeit!=NULL
	if (value<t->key){
		if(t->left==NULL)
		t->left=(TreeNode*)malloc(sizeof(struct TreeNode);
		t->left->key=value;
	}
	else
	insert(t->left,value);
}
else{
	if(t->right==NULL){
		t->right=(Treenode*)malloc(sizeof(Treenode));
		t->right->key=value;
		
	}
	else
	insert(t->right,value);
}
