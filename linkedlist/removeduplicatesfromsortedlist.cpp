Node *removeDuplicates(Node *head)
{
    // your code goes here

    if (head == NULL)
    {

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