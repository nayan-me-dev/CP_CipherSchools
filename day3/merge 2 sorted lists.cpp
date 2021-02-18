#include<bits/stdc++.h>
using namespace std;
//folowing function passes all cases in leet code
ListNode* mergeTwoLists(ListNode* head_A, ListNode* head_B)
    {
         if(head_A == NULL){
            return head_B;
        }
        if(head_B == NULL){
            return head_A;
        }
        ListNode* curr = head_A->val<head_B->val ? head_A : head_B;
        ListNode* currOppo = head_A->val < head_B->val ? head_B : head_A;
        while(curr){
            while((curr->next)&&(curr->next->val < currOppo->val)){
                curr = curr->next;
            }
            if(curr->next == NULL){
                break;
            }
            ListNode* tmp = curr->next;
            curr->next = currOppo;
            curr = currOppo;
            currOppo = tmp;
        }
        curr->next = currOppo;
        return  head_A->val<head_B->val ? head_A : head_B;

    }
