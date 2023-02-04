//  given a linklist check in list loop are available or not 
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
   void find_cycle()
   {
     node *slow = head;
     node *fast = head;
     while(slow!=NULL && fast->next!=NULL)
     {
         slow = slow->next;
         fast = fast->next->next;
         
         if(slow == fast){    //matching address
            cout<<"\nExit a cycle true";
            break;
         }
            else {
            cout<<"\nNot exit any cycle false ";
            break;
            }
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
    l.Print_();
    l.find_cycle();

}