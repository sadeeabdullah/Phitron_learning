#include <bits/stdc++.h>
using namespace std;

// insert in max heap function
void insertInMaxHeap(vector<int> &a, int val)
{
    a.push_back(val);

    int currIdx = a.size() - 1;

    while (true)
    {
        int parentIdx = (currIdx - 1) / 2;
        if (a[currIdx] < a[parentIdx])
            swap(a[currIdx], a[parentIdx]);
        else
            break;

        currIdx = parentIdx;
    }
}

// function print heap
void printHeap(vector<int> a)
{
    for (int val : a)
        cout << val << " ";

    cout << endl;
}

// delete heap function
void deleteHeap(vector<int> &a)
{
    a[0] = a.back();
    cout << a[0] << endl;

    // remove the last element in vector
    a.pop_back();

    int curr_idx = 0;
    while (true)
    {
        int leftIdx = curr_idx * 2 + 1;
        int rightIdx = curr_idx * 2 + 2;

        int leftVal = INT_MAX, rightVal = INT_MAX;

        if (leftIdx < a.size())
            leftVal = a[leftIdx];

        if (rightIdx < a.size())
            rightVal = a[rightIdx];

        // compare and swap
        if (leftVal <= rightVal && leftVal < a[curr_idx])
        {
            swap(a[curr_idx], a[leftIdx]);
            curr_idx = leftIdx;
        }
        else if (leftVal > rightVal && rightVal < a[curr_idx])
        {
            swap(a[curr_idx], a[rightIdx]);
            curr_idx = leftIdx;
        }
        else
            break;
    }
}
int main()
{
    int n;
    cin >> n;
    vector<int> a;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        insertInMaxHeap(a, val);
    }

    printHeap(a);
    deleteHeap(a);
    printHeap(a);

    return 0;
}