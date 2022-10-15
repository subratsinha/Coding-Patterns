class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head || !head->next) return head;
        ListNode* p = head;
        ListNode* q = NULL;
        while(k>200){
            k=k/10;
        }
        while(k!=0){
            while(p->next!=NULL){
            q=p;
            p=p->next;
            }
            p->next = head;
            q->next = NULL;
            head = p;
            k--;
            p= head;
            q=NULL;
        }
        return head;
    }
};
