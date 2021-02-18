#include<bits/stdc++.h>
using namespace std;
struct node{
	struct node*next;
	int data;
};
struct node * intersection(struct node * L1, struct node* L2){
	if(L1 == NULL || L2 == NULL)
		return NULL;
	struct node * output = NULL;
	struct node * outTail = NULL;
	while(L1&&L2){
		if(L1->data<L2->data){
			L1 = L1->next;
		}
		else if(L2->data<L1->data){
			L2 = L2->next;
		}
		else{
			int data = L1->data;
			struct node * newNode = (struct node *) malloc(sizeof(struct node));
			newNode->data = data;
			newNode->next = NULL;
			if(output == NULL){
				outTail = output = newNode;
			}
			else{
				outTail->next = newNode;
				outTail = outTail->next;
			}
			while(L1 && L2 && L1->data == data && L2->data == data){
				L1 = L1->next;
				L2 = L2->next;
			}
		}
	}
	return output;
}
int main()
{
//input here
}
