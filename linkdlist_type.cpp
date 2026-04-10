#include <iostream>
using namespace std;

// Define a 'Node' - think of this as a single "box" in our chain
struct Node
{
    int data;   // The actual value we want to store (like a number)
    Node *next; // A "pointer" or arrow that points to the next box in the chain
};

int main()
{
    // 1. Create three separate boxes (nodes) in memory
    // 'new' tells the computer to set aside space for these boxes
    Node *node1 = new Node();
    Node *node2 = new Node();
    Node *node3 = new Node();

    // 2. Put values inside each box
    node1->data = 10;
    node2->data = 20;
    node3->data = 30;

    // 3. Connect the boxes together to form a "Linked List"
    node1->next = node2; // Box 1 points to Box 2
    node2->next = node3; // Box 2 points to Box 3

    // 4. Mark the end of the chain
    // We set this to NULL so we know there are no more boxes after this
    node3->next = NULL;

    return 0;
}
