// remove duplicate element in linkedlist 
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
   
   void Find_Duplicate()
   {
       node *temp;
       node *s=head; 
       while(s->next!=NULL)
       { 
             if(s->data == s->next->data)
                {
                    temp = s->next;
                    s->next = s->next->next;
                }
               else
                s = s->next;
       }
   }
};
int main()
{
    List l;
    l.insert(11);
    l.insert(11);
    l.insert(11);
    l.insert(21);
    l.insert(43);
    l.insert(43);
    l.insert(60);
    l.Find_Duplicate();
    l.Print_();

}
