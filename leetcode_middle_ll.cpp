
 //* Definition for singly-linked list.
  struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
 };
 
#include <cmath>
#include <iostream>
using namespace std;


class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        double count = 0 , mid = 0 , ind = 0;
        ListNode* node = head;
        while(node!=NULL){            
            node = node-> next;
            count++;
        }
        mid = (floor(count/2));
        while(head!=NULL){
            if (ind == mid){
                break;
            }
            head = head-> next;
            ind++;
        }
    return head;
        
    }
};
