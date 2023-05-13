
class Solution
{

    ListNode *reverse(ListNode *slow)
    {

        ListNode *prev = NULL;

        ListNode *curr = slow;
        ListNode *next;
        while (curr != NULL)
        {

            next = curr->next;
            curr->next = prev;

            prev = curr;
            curr = next;
        }

        return prev;
    }




public:


    bool isPalindrome(ListNode *head)
    {

        if (head == NULL || head->next == NULL)
        {
            return true;
        }

        ListNode *slow = head;
        ListNode *fast = head->next;


        while (fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
        }

//calculated mid 




        ListNode *mid = reverse(slow->next);

        ListNode *temp = head;
        while (mid != NULL)
        {

            if (mid->val != temp->val)
            {
                return false;
            }

            temp = temp->next;
            mid = mid->next;
        }

        return true;
    }
};