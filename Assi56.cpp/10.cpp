// find middle
// 
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
   int Middle()
   {
     node *temp= head;
     int element=0;
     while(temp!=NULL)
     {
        temp = temp->next;
        element++;
     }
     int n=element/2;
     node *s = head;
     while(n)
     {
        n--;
        if(s->next!=NULL)
        s= s->next;
     }
     return s->data;
   }
};
int main()
{
    List l;
    l.insert(35);
    l.insert(15);
    l.insert(4);
    l.insert(20);
    l.insert(65);
    cout<<l.Middle()<<endl;
    l.Print_();
   
}