#include<bits/stdc++.h>
using namespace std;
//verified this function , following code passes all test cases
ListNode* mergeKLists(vector<ListNode*>& lists)
{
ListNode* merge = nullptr;
ListNode* begining = nullptr;
while (true)
{
        int nSourceIdx = -1;
        int nMinVal;
        for (unsigned i = 0; i < lists.size (); ++i)
            {
                if (nullptr == lists [i]) {continue;}
                if (-1 == nSourceIdx || nMinVal > lists [i]->val)
                {
                    nSourceIdx = i;
                    nMinVal = lists [i]->val;
                }
            }

        if (-1 == nSourceIdx) {break;}
        if (nullptr == merge)
        {
            begining = merge = lists [nSourceIdx];
        }
        else
        {
        merge->next = lists [nSourceIdx];
        merge = merge->next;
        }
        lists [nSourceIdx] = lists [nSourceIdx]->;
        }next
    return begining;
}
