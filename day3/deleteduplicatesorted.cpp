#include<bits.stdc++.h>
using namespace std;
//function passes the test cases in leet code
ListNode* deleteDuplicates(ListNode* head) {
     if(head==NULL || head->next==NULL) return head;
        ListNode *current = head;
    if(current->next->val!=current->val)
    {
    current->next = deleteDuplicates(current->next);
    return current;
        }
    ListNode *itr = current->next;
    while(itr!=NULL && itr->val==current->val)
        itr = itr->next;
    return deleteDuplicates(itr);
}
