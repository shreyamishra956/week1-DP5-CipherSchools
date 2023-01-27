#include<bits/stdc++.h>
using namespace std;

struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };

  ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* tail = new ListNode(0);
        ListNode* ptr = tail;
 
        int carry = 0;
        while (l1 != NULL || l2 != NULL || carry > 0) {
            int v1 = 0, v2 = 0;
            if (l1 != NULL) {
                v1 = l1->val;
                l1 = l1->next;
            }
 
            if (l2 != NULL) {
                v2 = l2->val;
                l2 = l2->next;
            }
 
            int v = v1 + v2 + carry;
            carry = v / 10;
            v = v % 10;
 
            ListNode* node = new ListNode(v);
            tail->next = node;
            tail = tail->next;
        }
 
        return ptr->next;
    }

    int main() {
        
    }