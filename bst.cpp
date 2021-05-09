#include <iostream>

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
};


void delete(){

}



void search(){

}

void inorder(){

}

void insert(){
  //init root
        TreeNode * root=new TreeNode;
        cin>>root->val;
        root->left=NULL;
        root->right=NULL;
        
        //t
        TreeNode * current;
        current=root;
        
        int temp;
        cin>>temp;
        //input is greater than current->val
        if(temp>current->val){
          if(current->right!=NULL){
              current=current->right;
          }
          else{
            current->right=new TreeNode;
            current=current->right;
            current.val=temp;
          }
        }
        //input is less than current->val
        if(temp<current->val){
          if(current->left!=NULL){
              current=current->left;
          }
          else{
            current->left=new TreeNode;
            current=current->left;
            current.val=temp;
          }  
        }
}
