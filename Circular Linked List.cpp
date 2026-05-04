#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node* next;
};

int main()
{
    Node* head = NULL, * temp = NULL, * newNode;

    int arr[4] = { 10, 20, 30, 40 };


    for (int i = 0; i < 4; i++)
    {
        newNode = new Node();
        newNode->data = arr[i];
        newNode->next = NULL;

        if (head == NULL)
        {
            head = newNode;
            temp = newNode;
        }
        else
        {
            temp->next = newNode;
            temp = newNode;
        }
    }

    temp->next = head;


    Node* ptr = head;

    cout << "Circular Linked List: ";

    if (head != NULL)
    {
        do
        {
            cout << ptr->data << " ";
            ptr = ptr->next;
        } while (ptr != head);
    }

    return 0;
}