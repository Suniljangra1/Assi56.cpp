// stack using single linked list
#include<iostream>
using namespace std;
class node
{
    public:
    int value;
    node *next;
    node()
    {
        value =0;
        next = NULL;
    }
};
class stack
{
    int top;
    node *head;
    public:
    stack()
    {
        top = 0;
        head = NULL;
    }
    void push(int v)
    {
        top++;
        node *temp = new node();
        temp->value =v;
        if(head == NULL)
        head = temp;
        else {
            node *s = head;
            while(s->next!=NULL)
            {
                s= s->next;
            }
            s->next = temp;
        }
    }
    int Empty()
    {
        if(top==-1)
        return 1;
        else
        return 0;
    }
    int Pop()
    {
        if(head == NULL)
        return -1;
        else {
            node *s= head;
            while(s->next->next!=NULL)
            {
                s = s->next;
            }
            top--;
            s= s->next;
            s->next = NULL;
            return s->value;
            delete s;

        }
    }
    void print()
    {
        node *s = head;
        while(s!= NULL)
        {
            cout<<s->value<<" -> ";
            s= s->next;
        }

    }
     void Reverse()
     {
        node *temp=head->next;
        node *s = head;
        node *t = NULL;
        while(temp!=NULL)
        {
            s->next = t;
            t = s;
            s = temp;
            temp = temp->next;

        }
        s->next = t;
        head = s;
     }
     int pop()
     {
        Reverse();
        node *temp = head;
        while(temp->next->next!=NULL)
        {
            temp = temp->next;
        }
        node *s=head;
        s = temp->next;
        temp->next = NULL;
        return s->value;
        delete s;
     }
    int get_size()
    {
        return top;
    }
};
int main()
{
    stack s;
    s.push(5);
    s.push(3);
    s.push(2);
    s.push(9);
    s.push(8);
    // s.Reverse();
    cout<<s.pop()<<endl;
    s.print();
}