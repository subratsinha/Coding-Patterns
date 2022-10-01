class Solution 
{
public:
    int pointer = 0;
    ListNode* removeNthFromEnd(ListNode* head, int n) 
    {
        if(head == NULL)
        {
            return NULL;
        }
        head->next = removeNthFromEnd(head->next,  n);
        pointer = pointer + 1;
        return pointer == n ? head->next : head;
    }
};
