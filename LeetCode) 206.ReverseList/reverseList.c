
struct ListNode {
int val;
struct ListNode *next;
};
 
struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode* Temp = NULL;
    struct ListNode* pre = NULL;
    struct ListNode* live = head;
    while (live != NULL)
    {
        Temp = live->next;
        live->next = pre;
        pre = live;
        live = Temp;
    }
    return pre;
}
