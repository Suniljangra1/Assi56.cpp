// write a function swap element pairwise 
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
   void swap()
   {
        node *s,*temp = head;
       
        while(temp!=NULL)
        {
            s = temp;
            temp=temp->next;
            cout<<temp->data<<" -> ";
             cout<<s->data<<" -> ";
            if(temp->next==NULL)
            cout<<" NULL ";
            temp=temp->next;
        }
        
    
   }
};
int main()
{
    List l;
    l.insert(1);
    l.insert(2);
    l.insert(3);
    l.insert(4);
    l.insert(5);
    l.insert(6);
    l.swap();
    // l.Print_();

}
