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
    ListNode* oddEvenList(ListNode* head) {
        if(!head || !head->next) return head;
        ListNode* temp1 = head, *temp2 = head->next;
        ListNode* temp=temp2;
        while(temp2 && temp2->next!=nullptr){
            temp1->next = temp1->next->next;
            temp1=temp1->next;
            temp2->next = temp1->next;
            temp2=temp2->next;
        }
        temp1->next = temp;
        return head;
        
    }
};