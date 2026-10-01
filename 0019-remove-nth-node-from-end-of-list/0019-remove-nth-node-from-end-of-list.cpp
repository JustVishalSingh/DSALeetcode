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
        ListNode* temp=head;
        long long count=0;
        while(temp!=NULL){
            count++;
            temp=temp->next;
        }
        if(count==1){
            delete head;
            return NULL;
        }
        if(n==1){
            ListNode *temp1=head;
            while(temp1->next->next!=NULL){
                temp1=temp1->next;
            }
            delete temp1->next;
            temp1->next=NULL;
            return head;
        }
        if(count==n){
            head=head->next;
            delete temp;
            return head;
        }
        int pos=count-n;
        int cnt=0;
        ListNode *prev=NULL;
        ListNode *curr=head;
        while(cnt!=pos){
            cnt++;
            prev=curr;
            curr=curr->next;
        }
        prev->next=curr->next;
        delete curr;
        return head;
    }
};