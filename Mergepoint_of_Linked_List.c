int findMergeNode(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) 
{
    SinglyLinkedListNode *temp1;
    SinglyLinkedListNode *temp2;
    temp1=head1;
    temp2=head2;
    while(temp2!=NULL)
    {
        while(temp1!=NULL)
        {
            if(temp1 == temp2)
            {
                 return(temp1->data);
            }
        temp1=temp1->next;
        }
        temp2=temp2->next;
        temp1=head1;
    }   
    return 1000;
}
