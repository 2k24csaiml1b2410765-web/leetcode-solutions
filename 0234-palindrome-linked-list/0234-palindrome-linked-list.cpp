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
    bool isPalindrome(ListNode* head) {
        ListNode* temp=head;
        
        vector<int>l1;
        while(temp!=nullptr){
            l1.push_back(temp->val);
            temp=temp->next;
        }
        int i=0;
        int j=l1.size()-1;
        while(i<j){
            if(l1[i]!=l1[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};