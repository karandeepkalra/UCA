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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1==NULL&&list2==NULL)
        {
            return NULL;
        }
        if(list1==NULL&&list2!=NULL)
        {
            return list2;
        }
        if(list2==NULL&&list1!=NULL)
        {
            return list1;
        }
        ListNode*l3=new ListNode(-1);
        ListNode*temp=l3;
        ListNode*l1=list1;
        ListNode*l2=list2;
        while(l1!=NULL&&l2!=NULL)
        {
            if(l1->val==l2->val)
            {
                ListNode*a=new ListNode(l1->val);
                temp->next=a;
                l1=l1->next;
                temp=temp->next;
                ListNode*b=new ListNode(l2->val);
                temp->next=b;
                l2=l2->next;
                temp=temp->next;

            }
            else if(l1->val<l2->val)
            {
                ListNode*a=new ListNode(l1->val);
                temp->next=a;
                l1=l1->next;
                temp=temp->next;
            }
            else{
                ListNode*a=new ListNode(l2->val);
                temp->next=a;
                l2=l2->next;
                temp=temp->next;
            }
        }
        if(l1==NULL&&l2!=NULL)
        {
            temp->next=l2;
        }
        if(l2==NULL&&l1!=NULL)
        {
            temp->next=l1;
        }
        return l3->next;
    }
int main() {
    
    ListNode *l1=new ListNode(-1);
    ListNode *l2=new ListNode(-1);
    ListNode*h1=l1;
    ListNode*h2=l2;
    for(int i=0;i<5;i++)
    {
        int d;
        cin>>d;
        ListNode*t=new ListNode(d);
        h1->next=t;
        h1=h1->next;
    }
    for(int i=0;i<3;i++)
    {
        int d;
        cin>>d;
        ListNode*t=new ListNode(d);
        h2->next=t;
        h2=h2->next;
    }
    h1=l1->next;
    h2=l2->next;
    ListNode*l3=mergeTwoLists(h1,h2);
    ListNode* h=l3;
    while(h!=NULL)
    {
        cout<<h->val;
        h=h->next;
    }
    
}
