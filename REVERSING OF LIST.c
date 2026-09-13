//programm to reverse the list:
struct ListNode {
    int val,NULL;
    struct ListNode* next;
}
struct ListNode* reverseList(struct ListNode* head){
    struct ListNode *prev = NULL;
    struct ListNode *next_node = NULL;
    struct ListNode *curr = NULL;

    while (curr != NULL){
        next_node = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next_node;
    }
    return prev;
}
