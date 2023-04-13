/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
int Solution::solve(ListNode* A, int B)
{
    int n=0;
    struct ListNode* temp=A;
    while(temp!=NULL) 
    {
        temp=temp->next;
        n++;
    }
    int traverse=(n/2)-B;
    if(traverse==0) 
    {
        return A->val;
    }
    else if(traverse>0)
     {
        struct ListNode* temp=A;
        while(traverse--)
        {
            temp=temp->next;
        }
        return temp->val;
    }
    return -1;
}

