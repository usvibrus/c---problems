class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* d = new ListNode();
        ListNode* temp2 = d;
        while(l1 && l2){
            
            if(l1->val>l2->val){
                temp2->next=l2;
                l2=l2->next;
            }
            else {
                temp2->next=l1;
                l1=l1->next;
            }
            temp2=temp2->next;
        }
        
        while(l2!=NULL){
            temp2->next=l2;
            temp2=temp2->next;
            l2=l2->next;
        }
        while(l1!=NULL){
            temp2->next=l1;
            temp2=temp2->next;
            l1=l1->next;
        }
        
        ListNode* result= d->next;
        delete d;
        return result;
    }
};