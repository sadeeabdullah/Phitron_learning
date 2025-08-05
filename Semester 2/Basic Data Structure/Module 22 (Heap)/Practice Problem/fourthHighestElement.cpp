// https://www.naukri.com/code360/problems/fourth-largest-element-in-the-array_1792782?leftPanelTabValue=PROBLEM

#include <bits/stdc++.h>
using namespace std;


// function for inserting

void insert(vector<int> &heap, int val)
{
    heap.push_back(val);
    int crnIdx = heap.size() - 1;

    while (true)
    {
        int parentIdx  = (crnIdx - 1) / 2;

        if (heap[crnIdx] > heap[parentIdx])
        {
            swap(heap[crnIdx], heap[parentIdx]);
            //then move to the parent to check again
            crnIdx = parentIdx;
        }
        else
            break;
    }
}

//function for deleting from the max heap
void deleteMaxHeap(vector<int> &heap)
{
    // setted the last value to the root or the max value
    heap[0] = heap[heap.size() - 1];

    heap.pop_back(); // removed the last value;

    // now we have to maintain max heap condition

    int parentIdx = 0;
    while (true)
    {
        int leftIdx = parentIdx *2 + 1;
        int rightIdx = parentIdx *2 + 2;
        int largestIdx = parentIdx;

        if (leftIdx < heap.size() && heap[leftIdx] > heap[largestIdx])
            largestIdx = leftIdx;

        if (rightIdx < heap.size() && heap[rightIdx] > heap[largestIdx])
            largestIdx = rightIdx;

        if (largestIdx == parentIdx)
            break;

        swap(heap[parentIdx], heap[largestIdx]);
        parentIdx = largestIdx;

    }
}

int getFourthLargest(int arr[], int n)
{
     if (n < 4)
        return INT_MIN; 
    // lets make a heap
    vector<int> heap;

    // for loop to get insert the value into the heap vector
    for (int i = 0; i < n; i++)
        insert(heap, arr[i]);
    
    deleteMaxHeap(heap);
    deleteMaxHeap(heap);
    deleteMaxHeap(heap);

    return heap.front();
}