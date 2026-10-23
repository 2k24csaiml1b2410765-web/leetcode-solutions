/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        // ListNode* a=headA;
        // ListNode* b=headB;
        // while(a!=b){
        //     if(a==NULL){
        //         a=headB;
        //     }
        //     else{
        //         a=a->next;
        //     }
        //     if(b==NULL){
        //         b=headA;
        //     }
        //     else{
        //         b=b->next;
        //     }

        // }
        // return a;
        ListNode* a=headA;
        ListNode* b=headB;
        int m=0,n=0;
        while(a!=NULL){
            n++;
            a=a->next;
        }
        while(b!=NULL){
            m++;
            b=b->next;
        }
        a=headA;
        b=headB;
        if(n>m){
            for(int i=0;i<n-m;i++){
                a=a->next;
            }

        }
        else{
            for(int i=0;i<m-n;i++){
                b=b->next;
            }
        }
        while(a!=b){
            a=a->next;
            b=b->next;
        }
        return a;
    }
};