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
        int count = 0;
        ListNode* t = head;
        while(t != nullptr){
            count++;
            t = t->next;
        }
        if(count==1) return true;
        //1. middle
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast->next != nullptr && fast->next->next != nullptr){
            slow = slow -> next;
            fast = fast -> next ->next;
        }
        //2. reverse
        ListNode* curr = slow -> next;
        ListNode* prev = nullptr;
        
        while(curr != nullptr){
            ListNode* nex = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = nex;
        }
        //3. compare
        ListNode* left = head;
        ListNode* right = prev;
        while(right!=nullptr){
            if(left->val != right -> val)
            return false;

            left = left->next;
            right = right->next;
        }
        return true;
    }
};