#include<bits/stdc++.h>
using namespace std;
//successflly ran on leetcode
if(!head || !head->next)
    return head;
ListNode *s = head, *f = head;
        while(f->next && f->next->next){
            s = s->next;
            f = f->next->next;
        }
        f = s->next;
        s->next = NULL;
        head = sortList(head);
        f = sortList(f);
        head = merge(head,f);
        return head;
    }

    ListNode* merge(ListNode* a, ListNode* b){
        ListNode* n = NULL;
        ListNode* temp = NULL;

        while(a && b){
            if(a->val < b->val){
                if(!n)  n = temp = a;
                else{
                    temp->next = a;
                    temp = temp->next;
                }
                a = a->next;
            }else{
                if(!n)  n = temp = b;
                else{
                    temp->next = b;
                    temp = temp->next;
                }
                b = b->next;
            }
        }
        if(a)   temp->next = a;
        if(b)   temp->next = b;
        return n;
    }
