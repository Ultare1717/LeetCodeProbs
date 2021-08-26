#include <iostream>
#include<vector>
#include<unordered_map>
using namespace std;


struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2)
    {
       int sum = 0;
       ListNode* l3 = new ListNode();
       ListNode* head = l3;
       
        while(l1!=NULL || l2!=NULL)
        {
            if(l1!=NULL)
            {
                sum = sum + l1->val;
                l1 = l1->next;
            }
            
            if(l2!=NULL)
            {
                sum = sum + l2->val;
                l2 = l2->next;
            }
            if(sum>=10)
            {
              l3->val = sum-10;
              sum = 1;
            } 
            else
            {
              l3->val = sum;
              sum = 0;
                
            }
            if(l1==NULL && l2==NULL && sum==0)
                l3->next = NULL;
            else if(l1==NULL && l2==NULL && sum==1)
                l3->next = new ListNode(sum);
            else
                l3->next = new ListNode();
            l3 = l3->next;

        }
     return head;
    }