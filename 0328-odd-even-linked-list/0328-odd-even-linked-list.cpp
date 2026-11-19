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
        int ct=1;
        vector<int>odd;
        vector<int>even;
        ListNode* temp=head;
        while(temp!=nullptr){
            if(ct%2!=0){
                odd.push_back(temp->val);

            }
            else{
                even.push_back(temp->val);
            }
            ct++;
            temp=temp->next;
        }
        temp=head;
        for(int i=0;i<odd.size();i++){
            temp->val=odd[i];
            temp=temp->next;
        }
        for(int j=0;j<even.size();j++){
            temp->val=even[j];
            temp=temp->next;
        }        
        return head;

        
    }
};