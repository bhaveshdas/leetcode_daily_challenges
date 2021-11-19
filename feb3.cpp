//Linked List Cycle

//Solution

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* hare = head , *turtle = head;
        if( head == NULL)
            return 0;
        while( hare != NULL && hare -> next != NULL )
        {
          
            hare = hare -> next -> next;
            turtle = turtle -> next;
              if( hare == turtle)
                return 1;
        }
        return 0;
    }
};
