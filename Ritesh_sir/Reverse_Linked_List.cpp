#include<iostream>
#include<vector>
using namespace std;

 struct ListNode
 {
      int val;
      ListNode *next;
     ListNode(int val)
     {
         this->val=val;
         next=NULL;
     }
 };
  typedef struct ListNode ListNode;
ListNode* reverse(ListNode* &head)
{
    if(head==NULL||head->next==NULL)
    {
        return head;
    }
    ListNode*ans=reverse(head->next);
    head->next->next=head;
    head->next=NULL;
    return ans;
}
int main() {
    
    ListNode *l1=new ListNode(-1);
    ListNode*h1=l1;
    for(int i=0;i<5;i++)
    {
        int d;
        cin>>d;
        ListNode*t=new ListNode(d);
        h1->next=t;
        h1=h1->next;
    }
    h1=l1;
    h1=reverse(h1->next);
    
    while(h1!=NULL)
    {
        cout<<h1->val;
        h1=h1->next;
    }
    
}
