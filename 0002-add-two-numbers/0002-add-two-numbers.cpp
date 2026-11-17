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

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry=0;
        ListNode* sum=nullptr;
        while(l1!=nullptr||l2!=nullptr||carry!=0){
            int val1=0;
            int val2=0;
            if(l1!=nullptr){
            val1=l1->val;
            l1=l1->next;
            }
            if(l2!=nullptr){
            val2=l2->val;
            l2=l2->next;
            }
            int total=val1+val2+carry;
            carry=total/10;
            ListNode* node=new ListNode(total%10);
            node->next=sum;
            sum=node;

        }
        return reverse(sum);
    }

    ListNode* reverse(ListNode* l){
    ListNode* curr=l;
    ListNode* prev=nullptr;
    while(curr!=nullptr){
        ListNode* next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;
}
}; 