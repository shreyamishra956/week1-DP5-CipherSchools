#include<bits/stdc++.h>
using namespace std;

struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };

  ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* curr=head;
        ListNode* prev=NULL;
        ListNode* next=NULL;
        int temp=k, count=0;

        while(curr!=NULL && temp) {
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
            temp--;
        }

        ListNode* check=next;
        while(check!=NULL) {
            check=check->next;
            count++;
            if(count==k) break;
        }

        if(next!=NULL) {
            if(count==k) {
                head->next = reverseKGroup(next, k);
            }
            else head->next=next;
        }
        return prev;
    }