class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *ptr1=headA;
        ListNode *res=NULL;
        bool flag=false;
        while(ptr1){
            ListNode *ptr2=headB;
            while(ptr2 && !flag){
                if(ptr1==ptr2){
                    res=ptr1;
                    flag=true;
                    break;
                }
                ptr2= ptr2->next;
            }
            ptr1= ptr1->next;
        }
        return res;
    }
};