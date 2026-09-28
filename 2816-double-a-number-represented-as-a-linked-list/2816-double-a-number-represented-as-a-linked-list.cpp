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
 ListNode* reverse(ListNode* head){
    ListNode* temp=head;
    ListNode* prev=nullptr;
    while(temp){
        ListNode* front=temp->next;
        temp->next=prev;
        prev=temp;
        temp=front;
    }
    return prev;
 }
class Solution {
public:
    ListNode* doubleIt(ListNode* head) {
        ListNode* carry=new ListNode(0);
        head=reverse(head);
        ListNode* curr=head;
        ListNode* temp=nullptr;
        while(curr!=nullptr){
        int data=curr->val*2+carry->val;
        curr->val=data%10;
        data=data/10;
        carry->val=data;
        temp=curr;
        curr=curr->next;
        }
        if(carry->val){
        temp->next=carry;
        }
        head=reverse(head);
        return head;

    }
};