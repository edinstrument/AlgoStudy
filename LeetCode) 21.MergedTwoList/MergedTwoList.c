/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */



typedef struct ListNode* node;

struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2)
{
    node head = malloc(sizeof(struct ListNode)); // 새로 만든 노드의 머리 부분 주소 저장용
    head->next = NULL;
    node merged = head; // 직접 발로 뛸 포인터 머지드

    while (list1 != NULL && list2 != NULL)
    {
        if (list1->val < list2->val)
    {
        merged->next = list1;
        merged = merged->next;
        list1 = list1->next;
    }

    else /**리스트1 번호 >=리스트2 번호*/
    {
        merged->next = list2;
        merged = merged->next;
        list2 = list2->next;
    }
    
    }
    
    
    if (list1 != NULL && list2 == NULL)
    {
        merged->next = list1;
    }
    else if (list1 == NULL && list2 != NULL)
    {
        merged->next = list2;
    }

    node result = head->next;
    free(head);
    return result;
}
    
  


  








