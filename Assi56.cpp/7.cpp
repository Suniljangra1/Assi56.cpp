// write a function that returns the vale at the n th node from the end of the linked list.
#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node *next;
    node()
    {
        data =0;
        next = NULL;
    }
};
class List
{
   node *head;
   void Reverse_Linkedlist()
   {
     node *s = head->next;
     node *temp = head;
     node *t = NULL;
     while(s!=NULL)
     {
        temp->next = t;
        t = temp;
        temp = s;
        s= s->next;
     }
     temp->next=t;
     head = temp;

   }
   public:
   List()
   {
     head = NULL;
   }
   void Print_()
    {
        node *temp = head;
        while(temp != NULL)
        {          
            cout<<temp->data<<" ->  ";
            temp = temp->next;
        }
            delete temp;
    }
   void insert(int value)
   {
     node *temp = new node();
     temp->data = value;
     if(head == NULL)
     {
        head = temp;
     }
     else{
        node *s = head;
        while(s->next!=NULL)
        {
            s = s->next;
        }
         s->next = temp;
     }
   }
   
   int find(int n)
   {
        Reverse_Linkedlist();
        node *teh = head;
        if(n==1)
        {
            return teh->data;
        }
        else {
            while(n > 1)
            {
                n--;
                if(teh!=NULL)
                teh = teh->next;
                else 
                cout<<"position not found ";
            }
            return teh->data;
        }
   }
};
int main()
{
    List l;
    l.insert(35);
    l.insert(15);
    l.insert(4);
    l.insert(20);
    l.Print_();
    cout<<"\nelement is -> "<<l.find(4);
}