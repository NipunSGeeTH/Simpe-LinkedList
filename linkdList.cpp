// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int value)
    {
        data = value;
    }
};

class LinkedList
{
private:
    Node *head = nullptr;

public:
    void push(int number){                                          // Add new number to list
        Node *node0 = new Node(number);
        node0->next = head;
        head = node0;
    }

    void print(){                                                   // print all numbers in linkedList
        if (not isEmpty())
        {
            Node *temp = head;
            while (temp != nullptr)
            {
                cout << temp->data << " ";
                temp = temp->next;
            }
            cout << "\n";
        }
        else
        {
            cout << "LinkedList is Empty, Nothing have to print \n";
        }
    }
    void pop(){                                              // remove last added element in linked list
        if (not isEmpty())
        {
            Node *temp = head;
            head = head->next;
            delete (temp);
        }
        else
        {
            cout << "Stack underflow Error \n";
        }
    }

    bool isEmpty(){                                   // Check linkedList is Empty?
        if ((head == nullptr))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main(){                                             // example linkedlist create
    LinkedList my1 = LinkedList();
    my1.print();
    my1.push(10);
    my1.pop();
    my1.print();
    cout << my1.isEmpty() << "\n";
    my1.push(12);
    my1.push(18);
    my1.push(22);
    my1.print();
    my1.pop();
    my1.print();

    return 0;
}
