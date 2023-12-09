Node *removeDuplicates(Node *head)
{
    // your code goes here

    if (head == NULL)
    {
1233 445
        return NULL;
    }

    Node *temp = head;

    while (temp != NULL)
    {

        if ((temp->next != NULL) && temp->data == temp->next->data)
        {

            temp->next = temp->next->next;
        }
        else
        {
            temp = temp->next;
        }
    }
    return head;