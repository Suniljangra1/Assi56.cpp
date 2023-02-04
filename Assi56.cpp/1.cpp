// search a  element in link list
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
   void search(int v)
   {
      node *s = head;
      while(s!=NULL)
      {
        if(s->data==v)
        {
            cout<<"\nelement founded ";
            return;
        }
        s = s->next;
      }
      cout<<"\nElement not founded ";
   }
};
int main()
{
    List l;
    l.insert(9);
    l.insert(18);
    l.insert(5);
    l.insert(64);
    l.insert(43);
    l.insert(14);
    l.search(14);

    return 0;
}