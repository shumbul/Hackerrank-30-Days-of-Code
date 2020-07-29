#include <iostream>
#include <cstddef>
#include <queue>
#include <string>
#include <cstdlib>

using namespace std;	
class Node{
    public:
        int data;
        Node *left,*right;
        Node(int d){
            data=d;
            left=right=NULL;
        }
};
class Solution{
    public:
  		Node* insert(Node* root, int data){
            if(root==NULL){
                return new Node(data);
            }
            else{
                Node* cur;
                if(data<=root->data){
                    cur=insert(root->left,data);
                    root->left=cur;
                }
                else{
                   cur=insert(root->right,data);
                   root->right=cur;
                 }           
           return root;
           }
        }

    int height(Node * root){
        if(root == NULL) 
            return 0;
        else
        {
            return (max(height(root->left),height(root->right))+1);
        }
    }

    void printlevel(Node* root,int level)
{
    if (root==NULL)
    return ;
    if(level==0)
    cout<<root->data<<" ";
    else if(level>0)
    {
    printlevel(root->left,level-1);    
    printlevel(root->right,level-1);    
    }
}

	void levelOrder(Node * root){
      int h=height(root);
    int i;
    for(i=0;i<h;i++)
    {
    printlevel(root,i);
    }
	}

};//End of Solution
