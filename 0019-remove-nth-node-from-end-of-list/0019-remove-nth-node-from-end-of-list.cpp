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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* m = head;
        int size =0;
        while( m!= NULL){
            size++;
            m=m->next;
        }
        if( n ==size){
            return head -> next;
        }
        int pos = size-n ;
        int cnt=1;
        ListNode* temp = head;
        while(cnt<pos && temp!=NULL){
           cnt++;
           temp=temp->next;
        }
        temp->next = temp->next->next;
        return head;
    }
};