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
    int getDecimalValue(ListNode* head) {
      if(head==NULL)
      {
          return NULL;
      }
        int sum=0;
       return  summingup(head ,sum);
        
    }
    
    int summingup(ListNode * head ,int & sum)
    {
        if(head==NULL)
        {
            return NULL;
        }
        sum=(sum*2)+(head->val);
        
        summingup(head->next,sum);
        return sum;
        
        
    }
    
};