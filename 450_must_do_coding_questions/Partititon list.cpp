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
    ListNode* partition(ListNode* head, int x) {
         ListNode *head1=NULL,*tail1=NULL;
        ListNode *head2=NULL, *tail2=NULL;
        
        while(head){
            if(head->val<x){
                if(head1==NULL){
                    head1=tail1=new ListNode(head->val);
                }
                else{
                    tail1->next=new ListNode(head->val);
                    tail1=tail1->next;
                }  
            }
            else{
                
                if(head2==NULL){
                    head2=tail2=new ListNode(head->val);
                }
                else{
                    tail2->next=new ListNode(head->val);
                    tail2=tail2->next;
                }
            }
            head=head->next;
        }
        if(head1==NULL)
            return head2;
        if(head2==NULL)
            return head1;
        tail1->next=head2;
        return head1;
    }
};