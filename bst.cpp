#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#define pb push_back
#define mp make_pair
#define ll long long

using namespace std;

 struct bstnode{
       int data;
       bstnode* left;
       bstnode* right;
   };
//A function to create new node (1st step)
 bstnode* getNewNode(int data){
 	bstnode* newNode=new bstnode();//new node is create whose memory adress is stored in pointer to bstnode type variable named newnode
    newNode->data=data;// new node is of type pointer to bstnode which have 3 feilds data,left child,right child. here we are filling that data feild with the given data
    newNode->left=newNode->right=NULL;//it is a newly created note which have no child yet
    // or use  (*newnode).data=data;
   return newNode;//return the adress of newly created node
 }

 //(2nd step) A function for insertion need the identity of the tree in which we need to insert the element and the data which is to be inserted
 bstnode* insert( bstnode* root,int data){//here root is a local variable
                    //empty tree then make a node which will be the root node
                      if(root==NULL){ root=getNewNode(data);
                      	            }
                      else if(data < root->data){
                      	      root->left=insert(root->left,data);
                      	  }
                      else{ root->right=insert(root->right,data);}
  return root;
 }
 //(3rd step) searching for a element in our binary search  tree

  bool search(bstnode* root , int data){
  	if(root==NULL)return false;
  	if(root->data== data)return true;
  	else if( root->data>data){
  		return search( root->left,data);
  	}
  	else{return search(root->right,data);}
  }
// recursive approach for finding minimum element in our bst
int findmin(bstnode* root ){

     if(root==NULL){ cout<<"EMPTY TREE";return -1;}

      else if(root->left==NULL){ return root->data;}

      findmin(root->left);
    }

/*iterative approach
   int findmin( bstnode* root){
    if(root==NULL){ cout<<"Empty Tree"<<endl; return -1 ;}
    //bstnode*  current=root; we can use the root directly as it is a local variable for this function
    while( root->left!= NULL){
       root=root->left;
    }
    return root->data;
   }*/

//height of node:  Number of edges in path from that node to farthest level leaf node. so height of tree is maximum of such heights which is possible if node is the root node.
 //depth of a node:number of edges in path from root to that  node.
 //height is distance from leaf whereas depth is distance from root
  int findHeight(bstnode* root){
                if(root==NULL){return -1;} //as by convention height of an empty tree is -1 and height of a leaf node is 0
               /*else{ int leftHeight=findHeight(root->left);
                      int rightHeight=findHeight(root->right);
                      return (max(leftHeight,rightHeight) +1 );
                     }*/
                return(max(findHeight(root->left),findHeight(root->right))+1);//recursion at its very best

  }

  void preorder(bstnode* root ){
              if(root==NULL){return;}
              cout<<root->data<<" ";
              preorder(root->left);
              preorder(root->right);
            }

 void inorder(bstnode* root){
           if(root==NULL){return ;}
           inorder(root->left);
           cout<<root->data<<" ";
           inorder(root->right);
 }
 void postorder(bstnode* root){
        if(root==NULL){return ;}
        postorder(root->left);
        postorder(root->right);
        cout<<root->data<<" ";
 }
 void levelOrder(bstnode* root){
        if(root==NULL)return;
        queue<bstnode* >q;
        q.push(root);
        while(!q.empty()){
          bstnode* current=q.front();
          cout<<current->data<<" ";
          if(current->left != NULL){q.push(current->left);}
          if(current->right !=NULL){q.push(current->right);}
         q.pop();//remove the element that got printed
        }

 }


 /*bstnode* getSuccessor(bstnode* root,int data){
 	 //search the node
      bstnode* current=serach(bstnode* root ,data);
      if(current==NULL)return NULL;
      //case 1 right subtree is present
      if(current->right!=NULL){
      	return findmin(current->right)
      }
      //case 2:no right sub tree
 }*/
int main(){
    int t;
    cin>>t;
    while(t--){
   bstnode* root; // a pointer to root node. this is the identity of a tree
   root=NULL; //means tree is empty.null pointer.
   /* Let us create following BST
              50
            /    \
          30      70
         /  \    /  \
       20   40  60   80 */

   root = insert(root, 50);
    insert(root, 30);
    insert(root, 20);
    insert(root, 40);
    insert(root, 70);
    insert(root, 60);
    insert(root, 80);
  int number;
  cout<<"Enter the number to be searched"<<endl;
  cin>>number;
if(search(root,number)==true)cout<<"found"<<endl;
else cout<<"Not present"<<endl;

     cout<<"minimum element of the tree is : " <<findmin(root)<<endl;
     cout<<"Height of the tree is : "<< findHeight(root)<<endl;


     cout<<endl;
     preorder(root);
     cout<<endl;
     inorder(root);
     cout<<endl;
     postorder(root);
    }
	return 0;

}
