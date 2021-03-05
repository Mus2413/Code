/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==NULL)
            return NULL;
        ListNode* start=head;
        int count=0;
        while(start!=NULL)
        {
            count++;
            start=start->next;
        }
        start=head;
        count=count-n+1;
        if(count==1)
        {
            if(head->next)
                return head->next;
            else
                return NULL;
        }
        int j=0;
        ListNode* prev;
        while(j<count)
        {
            j++;
            if(j==count)
            {
                 if(start->next!=NULL)
                     prev->next=start->next;
                else
                {
                    prev->next=NULL;
                }
                break;
            }
            prev=start;
            start=start->next;
        }
        return head;
    }
};