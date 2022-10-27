#include <iostream>

using namespace std;

struct node{
	int data;
	node* next = NULL;
};

	node* first = NULL;
	node* last = NULL;
	node* first1 = NULL;
	node* last1 = NULL;
	
	void insertAtEnd1();
	void insertAtEnd2();
	void intersection();
	void display1();
	void display2();
	
int main(){

	int exit = 0;

	do{
		cout<<"\n\n\t\t0 Exit";
		cout<<"\n\t\t1Insert Value at End in list 1";
		cout<<"\n\t\t2 Insert Value at End in list 2";
		cout<<"\n\t\t3 Display list 1";
		cout<<"\n\t\t4 Display list 2";
		cout<<"\n\t\t5 Istersection of two linked list";
		

		cout<<"\n\n\t\tEnter the command use want to excute: ";
		cin>>exit;

		switch(exit){
			case 1:
				{
					insertAtEnd1();
					display1();
					break;
				}
			case 2:
				{
					insertAtEnd2();
					display2();
					break;
				}
			case 3:
				{
					display1();
					break;
				}
			case 4:
				{
					display2();
					break;
				}
			case 5:
				{
					intersection();
					break;
				}
			default:{
				cout<<"------------------";
				break;
			}
			
		}
	}
		while(exit != 0);
		return 0;
}
	
	void insertAtEnd1(){
		node* curr = new node;
		cout<<"\n\n\t\tEnter data: ";
		cin>> curr->data;
		if(first == NULL){
			first = last = curr;
		}
		else{
			last->next = curr;
			last = curr;
		}
	}
	
	void insertAtEnd2(){
		node* curr = new node;
		cout<<"\n\n\t\tEnter data: ";
		cin>> curr->data;
		if(first1 == NULL){
			first1 = last1 = curr;
		}
		else{
			last1->next = curr;
			last1 = curr;
		}
	}
	
	void display1(){
		node *p = first;
		while(p != NULL){
			if(first == NULL){
				cout<<"\n\n\t\tNo Record to Show";
			}
			else{
				cout<<p->data<<"->";
				p = p -> next;
			}
		}
	}
	
	void display2(){
		node *p = first1;
		while(p != NULL){
			if(first1 == NULL){
				cout<<"\n\n\t\tNo Record to Show";
			}
			else{
				cout<<p->data<<"->";
				p = p -> next;
			}
		}
	}
	
	void intersection()
	{
	    //P1     
	    //1->2->3->4->5
	    //P2
	    //3->4->5->6->7
	    
	    node* p1 = first;   //1st linked list
		node* p2 = first1;  //2nd linked list
		
		while(p1 != NULL){
			while(p2 != NULL){
				if(p1->data == p2->data)
				{
					cout<<p1->data<<"->";
					p2 = p2 -> next;
				}
			}
			p2 = first1;
			p1 = p1 -> next;
		}
	}
	
	
