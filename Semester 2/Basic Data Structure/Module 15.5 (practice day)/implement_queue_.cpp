//https://www.codingninjas.com/studio/problems/queue-using-array-or-singly-linked-list_2099908

#include <bits/stdc++.h> 
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

class Queue {
long long sz = 0;
Node *head = NULL;
Node *tail = NULL;
public:
    Queue() {
        
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {
        return head == NULL;
    }

    void enqueue(int data) {
        Node *newNode = new Node(data);
        if(head == NULL)
        {
            head = newNode;
            tail = newNode;
            sz++;
            return;
        }
        tail->next = newNode;
        tail = newNode;
        sz++;
    }

    int dequeue() {
        if (isEmpty()) return -1;
        Node *tmp = head;
        int val = tmp->data;
        head = head->next;
        if (head == NULL)
        {
            tail = NULL;
        }
        delete tmp;
        sz--;
        return val;

    }

    int front() {
        if (isEmpty())
            return -1;
        return head->data;
    }
};