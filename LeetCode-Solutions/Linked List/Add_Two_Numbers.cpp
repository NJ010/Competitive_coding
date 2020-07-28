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
   void AddNumber(ListNode* l1, ListNode* l2,int carry){
        if(l1->next==nullptr && l2->next==nullptr){
            int a=l1->val;
       int b=l2->val;
       if(a+b+carry>9){
           l1->val=(a+b+carry)%10;
           ListNode* node=new ListNode(1);
           l1->next=node;
       }
       else{
           l1->val=a+b+carry;
           carry=0;
       }
            return; 
        }
       
       else if(l1->next==nullptr && l2->next!=nullptr){
            ListNode* node=new ListNode(0);
           l1->next=node;
            
       }
       else if(l2->next==nullptr && l1->next!=nullptr){
           ListNode* node=new ListNode(0);
           l2->next=node;
           
           
       }
       
       int a=l1->val;
       int b=l2->val;
       if(a+b+carry>9){
           l1->val=(a+b+carry)%10;
           carry=1;
       }
       else{
           l1->val=a+b+carry;
           carry=0;
       }
       AddNumber(l1->next,l2->next,carry);
       return;
       
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
      AddNumber(l1,l2,0);
      return l1;  
    }
};