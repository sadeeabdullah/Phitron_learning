# Heap

Heap is a special type of binary tree that is **complete** and commonly implemented using an **array**. Unlike a Binary Search Tree (BST), a Heap does **not** follow the BST property. It is mainly used to quickly access the **maximum or minimum element** of a dataset.

Heap has two main types: **Max Heap** and **Min Heap**.

---

## Max Heap

- In a Max Heap, the value of each parent node is **greater than or equal to** its children.
- The **maximum value is always at the root** of the heap.
- It allows quick access to the **largest element**.

---

## Min Heap

- In a Min Heap, the value of each parent node is **less than or equal to** its children.
- The **minimum value is always at the root** of the heap.
- It allows quick access to the **smallest element**.

---

## Time Complexity

| Operation       | Time Complexity |
|----------------|-----------------|
| Insert         | O(log n)        |
| Get Max/Min    | O(1)            |
| Delete Max/Min | O(log n)        |

---

## Summary

- Heap is stored in an array but behaves like a complete binary tree.
- It is **not** a Binary Search Tree.
- Max Heap gives the **maximum** value in `O(1)` time.
- Min Heap gives the **minimum** value in `O(1)` time.

