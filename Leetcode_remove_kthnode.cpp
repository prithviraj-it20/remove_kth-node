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
        typedef struct ListNode node;
        node*s=head;
        node*f=head;
        if(f==NULL) return NULL;
        n=n+1;
        while(--n){
            if(f->next==NULL) return head->next;
            f=f->next;
        }
        while(f->next){
            f=f->next;
            s=s->next;
        }
        s->next=s->next->next;
        return head;
    }
};
