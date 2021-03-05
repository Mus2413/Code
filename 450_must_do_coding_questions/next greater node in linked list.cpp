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
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int> ans;
        if(head==NULL)
            return ans;
        ListNode* start=head,*t1=NULL,*t2=NULL;
        while(start!=NULL)
        {
            t2=start->next;
            start->next=t1;
            t1=start;
            start=t2;
        }
        start=t1;
        stack<int>st;
        while(start!=NULL)
        {
            if(st.size()==0)
            {
                ans.push_back(0);
            }
            else if(start->val<st.top())
            {
                ans.push_back(st.top());
            }
            else
            {
                while(!st.empty() && st.top()<=start->val)
                {
                    st.pop();
                }
                if(st.empty())
                {
                    ans.push_back(0);
                }
                else
                {
                    ans.push_back(st.top());
                }
            }
            st.push(start->val);
            start=start->next;
        }
        reverse(ans.begin(),ans.end());
        return ans;
        
    }
};