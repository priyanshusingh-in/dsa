// You are using GCC
#include<bits/stdc++.h>
using namespace std;
struct node
{
    int element;
    struct node* left;
    struct node* right;
};

struct node* createNode(int val)
{
    struct node* Node=(struct node*)malloc(sizeof(struct node));
    Node->element=val;
    Node->left=NULL;
    Node->right=NULL;

    return (Node);
}

void traversePreorder(struct node* root)
{
    if(root==NULL)
        return;
    cout<<root->element<<' ';
    traversePreorder(root->left);
    traversePreorder(root->right);
}

void traverseInorder(struct node* root)
{
    if(root==NULL)
        return;
    traverseInorder(root->left);
    cout<<root->element<<' ';
    traverseInorder(root->right);
}

void traversePostorder(struct node* root)
{
    if(root=NULL)
        return;
    traversePostorder(root->left);
    traversePostorder(root->right);
    cout<<root->element<<' ';
}

int main()
{
    struct node* root=createNode(36);
    root->left = createNode(26);
    root->right= createNode(32);
    root->left->left=createNode(323);
    root->right->right=createNode(32);
    root->left->left->left=createNode(22);
    root->left->left->right=createNode(22);
    root->right->left=createNode(322);
    root->right->right=createNode(32);
    root->right->right->left=createNode(222);
    root->right->right->right=createNode(2323);

    cout<<"\n The preorder traversal of given binary tree is: \n";
    traversePreorder(root);
    cout<<"\n The Inorder traversal of the giver binary tree is: \n";
    traverseInorder(root);
    cout<<"\n The Postorder traversal of the given binary tree is: \n";
    traversePostorder(root);

    return 0;
}
