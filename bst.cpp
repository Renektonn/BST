#include <iostream>



struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
};

static TreeNode * root;

TreeNode * address(int key){
	
	TreeNode * current;
	current=root;
	
	while(current!=NULL and key!=current->val){
		
		
		if(key>current->val){
			current=current->right;
		}
		else
			if(key<current->val){
				current=current->left;	
			}
	}
	return current;
} 


bool search(int key){
	
	TreeNode * current;
	current=root;
	//root定非NULL 而current又等於root 故current非NULL 
	while(key!=current->val){
		
		
		if(key>current->val){
			current=current->right;
		}
		else
			if(key<current->val){
				current=current->left;	
			}
		
		if(current==NULL) return false;
			
		
	}
	return true;
	
}

void modify(int key){
	if(search(key)){ //如果有此鍵值，才修改 
		TreeNode * current=address(key);
		current->val=key;
	}
}

void del(int key){
	if(search(key)){ //如果有此鍵值，才刪除 
		
	} 
}


void inorder(){

}

void insert(int key){
  	
        
    //t
    TreeNode * current;
    current=root;
    
    //input is greater than current->val
    if(key>current->val){
        if(current->right!=NULL){
            current=current->right;
        }
        else{
        	current->right=new TreeNode;
        	current=current->right;
        	current->val=key;
        }
    }
    //input is less than current->val
    if(key<current->val){
        if(current->left!=NULL){
            current=current->left;
        }
        else{
        	current->left=new TreeNode;
        	current=current->left;
        	current->val=key;
        }  
    }
}


int main(){
	//init root
	TreeNode * root=new TreeNode;
	std::cin>>root->val;
	root->left=NULL;
	root->right=NULL;
	
	insert(2);
	insert(1);
	insert(3);
	
	
}








