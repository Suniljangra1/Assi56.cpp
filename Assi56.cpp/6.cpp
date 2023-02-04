// given a single linked list and count the given number of occouracnes
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
    int counting(int key)
    {
        int count=0;
        node *temp = head;
        while(temp!=NULL)
        {
            if(temp->data==key)
            count++;
            temp= temp->next;
        }
        return count;
    }
};
int main()
{
    List l;
    l.insert(1);
    l.insert(2);
    l.insert(1);
    l.insert(2);
    l.insert(1);
    l.insert(3);
    l.insert(1);
    cout<<"occourence is -> "<<l.counting(1)<<endl;
    l.Print_();
}