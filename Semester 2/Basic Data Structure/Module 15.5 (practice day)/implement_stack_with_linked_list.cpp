/****************************************************************

    Following is the class structure of the Node class:

        class Node
        {
        public:
            int data;
            Node *next;
            Node()
            {
                this->data = 0;
                next = NULL;
            }
            Node(int data)
            {
                this->data = data;
                this->next = NULL;
            }
            Node(int data, Node* next)
            {
                this->data = data;
                this->next = next;
            }
        };


*****************************************************************/

class Stack
{
    long long sz = 0;
    Node *head = NULL;

public:
    Stack()
    {
        //Write your code here
    }

    int getSize()
    {
        return sz;
    }

    bool isEmpty()
    {
        return sz == 0;
    }

    void push(int data)
    {
        //creating new node to insert it in the linked list
        Node *newNode = new Node(data);

        newNode->next = head;
        head = newNode;
        sz++;
    }

    void pop()
    {
        // as it is a  linked list it will pop the value from the top
        if (!isEmpty())
        {
            Node *tmp = head;
            head = head->next;
            delete tmp;
            sz--;
        }
    }

        int getTop()
{
    if (isEmpty())
        return -1; // or INT_MIN, or handle as needed
    return head->data;
}

    
};