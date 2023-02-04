// write a function to return if given character palindrome or not 
#include<iostream>
#include<stack>
using namespace std;
class node
{
    public:
    char data;
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
   void insert(char value)
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
  
   int palindrome()
   {
     stack<char> r;
     node *temp = head;
     while(temp!=NULL)
     {
        r.push(temp->data);
        temp= temp->next;
     }
     while(head!=NULL)
     {
        if(head->data ==  r.top())
        return true;
        r.pop();
        head = head->next;

     }
     return false;
   }
};
int main()
{
    List l;
    l.insert('r');
    l.insert('a');
    l.insert('d');
    l.insert('r');
    // l.insert('r');
    // l.Print_();
    if(l.palindrome())
    cout<<"yes";
    else
    cout<<"No";
}
