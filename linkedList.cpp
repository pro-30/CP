#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node* link;
        };

node* head;// here unlike tree we make the root a seperate variable which doesn't hold any data only the link to the first element
      // it s outside the main so that it can be used in all the function.it is the identity of our list

void insert1(int data ){
	node* newNode=new node();
	newNode->data=data;
	//node->link=NULL;//if the list is empty before inserting
      // empty or not empty doesn't matter this will always work
       newNode->link=head;//currently the head is storing the element to first element so if this new element is to be the new first element it must point
   	                            // to the second element so here it takes the adress of that element from the head and stores it in its tail.
           head=newNode;
           //inserting at begining so now this is the first element and head will point to this
           // we simply equated them because head does not have any data and both are pointer to node type
}
void insert2(int data,int n ){
     node* newNode=new node();
     newNode->data=data;
     newNode->link=NULL;
     if(n==1){newNode->link=head;// we took the adress of previous first element from head
            head=newNode; return ;}//gave head the adress of the new first element }
     node* temp =head;//to find the 2 elements between which we have ti insert our new element we traverse the list from head to (n-1)th element
                   //i.e. index=(n-2) cuz we are starting from head , not from the first element


     for(int i=0;i<n-2;i++){ //normally we would have done i<n but since it started from head so it become n-1 and since its zero base indexing and positions are 1 based so it becomes n-2
     	temp=temp->link ;
     } // our iteration stops b/w n-1 and nth element
         //[n-2]->    [n-1]  ->   [n]  -> [n+1]
        //                [newNode]
      // so we will take the link from [n-1] where our iteration stopped and give it the newnode and then give [n-1] the link to our newNode;
     newNode->link=temp->link;//
     temp->link=newNode;

}

void insert3(int data){

node* newNode=new node() ;
 newNode->data=data;
 newNode->link=NULL;
  node* temp=head;
  while(true){
  	    if(temp->link==NULL){  temp->link=newNode; break; }
  	temp=temp->link ;
   }
  //cout<<"DATA inserted succesfully"<<endl;

}
void delete1(int n){
   node* temp=head;
   if(n==1){
   	head=temp->link;
   	delete(temp);
    return ;
   }
   //for traversing upto the position whose next node is to be deletd;
   for(int i=0;i<n-2;i++){temp=temp->link;}// we reahced to [n-1]th node the next node is to be delete so we will copy the link from next node and give it to the [n-1]th node and we are done;

   	node* deletethis=temp->link;//copied the link of [n]th node from [n-1]th node .basically now delete this is our nth node which is supposed to be deleted;
   temp->link=deletethis->link;//gave the link to [n+1]th node to[n-1]th node;
   delete(deletethis);




}
void Reverse(){
   node* current=head;//for iteration
   node* previous=NULL;
   node* next;
   	while(current!=NULL){
   		next=current->link;//storing the place where we have to iterate to next
   		current->link=previous;//reversing process. pointing the current node backward
   		previous=current; //now thinking of the next iteration, this current will be our new previous ,so we passed its adress to previous
   		current=next;// iterating forward.
   	}
   	head=previous;//our new head

   };



void print(){
	node* temp=head;
	cout<<"LIST IS : ";
	     while(temp!=NULL){
	     	 cout<<temp->data<<"->";
	     	  temp=temp->link;
	     	}

  cout<<endl;
}
void print_in_reverse(node* p){

     if(p==NULL)return;
 	print_in_reverse(p->link);
 	cout<<p->data<<" ";
 }



int main(){

head=NULL;//empty list
   insert1(1);
   insert1(23);
  insert2(2,1);
  insert2(3,2);
  insert2(4,1);
  insert2(5,2);
  print();
  insert3(100);
  insert3(4);
  insert3(5);
  insert3(130);
  print();

   cout<<"enter a position to delete node from ";
   int x;
   cin>>x;
   delete1(x);
   print();
//for reverse
insert3(2);
insert3(4);
insert3(6);
insert3(8);
print();
Reverse();
print();
print_in_reverse(head);
	return 0;
}
