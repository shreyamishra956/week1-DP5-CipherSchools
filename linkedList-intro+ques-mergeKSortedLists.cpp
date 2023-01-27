#include<bits/stdc++.h>
using namespace std;

struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };

ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1 == NULL) return list2;
        if(list2 == NULL) return list1;

        ListNode *head=NULL;
        ListNode *tail=NULL;
        if(list1->val <= list2->val) {
            head=tail=list1;
            list1=list1->next;
        }
        else {
            head=tail=list2;
            list2=list2->next;
        }

        while(list1 != NULL && list2 != NULL) {
            if(list1->val <= list2->val) {
                tail->next=list1;
                tail=list1;
                list1=list1->next;
            }
            else {
                tail->next=list2;
                tail=list2;
                list2=list2->next;
            }
        }

        if(list1 == NULL) {
            tail->next=list2;
        }
        else {
            tail->next=list1;
        }
        return head;
    }

    ListNode* mergeKLists(vector<ListNode*>& lists) {
        int k=lists.size();
        if(k==0) return NULL;
        if(k==1) return lists[0];

        ListNode* comb=mergeTwoLists(lists[0], lists[1]);
        for(int i=2; i<k; i++) {
            comb=mergeTwoLists(comb, lists[i]);
        }
        return comb;
    }

int main() {
    
}