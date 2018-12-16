#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node* next;
    node* prev;
        };
 node* head;

node* getNewNode(int data ){
			node* newNode=new node();
			newNode->data=data;
			newNode->next=NULL;
			newNode->prev=NULL;

 return newNode;
}
void insert1(int x){
     node* newNode=getNewNode(x);
     if(head==NULL){
     	head=newNode;
     	return;
     }
     head->prev=newNode;
     newNode->next=head;
     head=newNode;
}
void print1(){
	node* temp=head;
  cout<<"Forward : ";
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
}
void reversePrint(){
	node* temp=head;
	if(temp==NULL)return;
	else{
		// go to the last node so that we can start using the prev pointer
		while(temp->next!=NULL){temp=temp->next;}
      cout<<"Reverse : ";
      while(temp!=NULL){cout<<temp->data<<" ";
         temp=temp->prev;}
   cout<<endl;
      }

}

int main(){
  head=NULL;
   insert1(2);print1();reversePrint();
   insert1(4);print1();reversePrint();
  insert1(6);print1();reversePrint();


 	return 0;
 }
