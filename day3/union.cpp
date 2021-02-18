#include<bits/stdc++.h>
using namespace std;
struct node{
	struct node*next;
	int data;
};

struct node * Union(struct node * L1, struct node * L2){
	struct node * output = NULL;
	struct node * outTail = NULL;
	while(L1&&L2){
		struct node * newNode = (struct node *) malloc(sizeof(struct node));
		newNode->next = NULL;
		if(L1->data<L2->data){
			newNode->data = L1->data;
			L1 = L1->next;
		}
		else if(L1->data>L2->data){
			newNode->data = L2->data;
			L2 = L2->next;
		}
		else{
			int data = L1->data;
			newNode->data = data;
			while(L1 && L2 && L1->data == data && L2->data == data){
				L1 = L1->next;
				L2 = L2->next;
			}
		}
		if(!output)
			output = outTail = newNode;
		else{
			outTail->next = newNode;
			outTail = outTail->next;
		}
	}
	while(L1){
		outTail->next = (struct node *) malloc(sizeof(struct node));
		outTail = outTail->next;
		outTail->data = L1->data;
		L1 = L1->next;
	}
	while(L2){
		outTail->next = (struct node *) malloc(sizeof(struct node));
		outTail = outTail->next;
		outTail->data = L2->data;
		L2 = L2->next;
	}
	outTail->next = NULL;
	return output;
}
int main()
{
//input here
}
