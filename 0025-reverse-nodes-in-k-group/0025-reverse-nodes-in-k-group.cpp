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
    ListNode* kthNode(ListNode* head, int k) {
        ListNode* kNode = head;
        for (int i = 1; i < k; i++) {
            if (kNode == NULL)
                return NULL;
            kNode = kNode->next;
        }
        return kNode;
    }

    ListNode* reverselist(ListNode* head) {
        ListNode* prev = NULL;
        ListNode* curr = head;
        while (curr != NULL) {
            ListNode* nxt = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nxt;
        }
        return prev;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        if (head == NULL || k == 1)
            return head;
        ListNode* temp = head;
        ListNode* kNode;
        ListNode* prevNode = NULL;
        while (temp != NULL) {
            kNode = kthNode(temp, k);
            if (kNode == NULL) {
                if (prevNode)
                    prevNode->next = temp;
                break;
            }
            ListNode* nxtg = kNode->next;
            kNode->next = NULL;
            kNode = reverselist(temp);
            if (temp == head) {
                head = kNode;
            } else {
                prevNode->next = kNode;
            }
            prevNode = temp;
            temp = nxtg;
        }
        return head;
    }
};