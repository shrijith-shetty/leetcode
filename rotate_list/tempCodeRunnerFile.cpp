
        {
            last = last->next;
            count++;
        }
        if(k>count)
            k %=count;
        ListNode* fast = head;
        ListNode* low = head;
        for(int i=0;i<k;i++)
        {