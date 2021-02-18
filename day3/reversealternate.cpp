#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* next;

    // Constructor
    Node(int data)
    {
        this->data = data;
        this->next = nullptr;
    }
};
void push(Node* &headRef, int data)
{
    Node* node = new Node(data);
    node->next = headRef;
    headRef = node;
}
void printList(Node* head)
{

    while (head) {
        cout << head->data << " —> ";
        head = head->next;
    }

    cout << "null" << '\n';
}
Node* reverse(Node*& curr, int k)
{
    // maintain a `prev` pointer
    Node* prev = nullptr;
    while (curr && k--)
    {
        Node* next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}
Node* skipKNodes(Node*& curr, int k)
{
    Node* prev = nullptr;

    while (curr && k--) {
        prev = curr;
        curr = curr->next;
    }

    return prev;
}

Node* reverseAlternatingKNodes(Node* head, int k)
{
    Node* prev = nullptr;
    Node* curr = head;

    while (curr)
    {
        // curr would be the last node in the reversed sublist
        Node* lastNode = curr;

        Node* frontNode = reverse(curr, k);

        if (!prev) {
            head = frontNode;
        }
        else {
            prev->next = frontNode;
        }

        lastNode->next = curr;

        prev = skipKNodes(curr, k);
    }

    return head;
}
int main()
{
Node* head = nullptr;
    int n = 10;
    while (n) {
        push(head, n--);
    }

    int k = 2;

    head = reverseAlternatingKNodes(head, k);
    printList(head);

    return 0;
}
}
