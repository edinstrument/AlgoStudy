/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */



struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    int val;
    struct ListNode* next;
}
typedef struct ListNode* node;



int main(void)
{
    node tmp = NULL;

    while(node list1->val < node list2->val)
    {
        tmp = list1->next;
        list1->next = list2;
        list1 = temp;
    }

    while(list1->val > list2->val)
    {
        tmp = list2->next;
        list2->next = list1;
        list2 = temp;
    }
    

}

