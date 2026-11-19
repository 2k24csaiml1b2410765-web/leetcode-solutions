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
    ListNode* swapNodes(ListNode* head, int k) {
        int length=0;
        ListNode* temp=head;
        while(temp!=nullptr){
            length++;
            temp=temp->next;
        }
        temp=head;
        int ct=0;
        ListNode* first=nullptr;
        ListNode* second=nullptr;
        while(temp!=nullptr){
            ct++;
            if(ct==k){
                first=temp;
            }
            if(ct==(length-k+1)){
                second=temp;
            }
            if(first!=nullptr && second!=nullptr){
                break;
            }
            temp=temp->next;


        }
        int temp1=first->val;
        first->val=second->val;
        second->val=temp1;

        return head;
    }
};