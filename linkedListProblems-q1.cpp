#include<bits/stdc++.h>
using namespace std;

struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };

  ListNode* deleteDuplicates(ListNode* head) {
        ListNode *curr=head;
        while(curr!=NULL && curr->next!=NULL) {
            if(curr->val==curr->next->val) {
                ListNode *del=curr->next;
                curr->next=curr->next->next;
                delete(del);
            }
            else {
                curr=curr->next;
            }
        }
        return head;
    }

int main() {
    
}