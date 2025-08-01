# 📌 Tree (Binary Tree)

## For traversing the Binary Tree we have to use recursion

Here is a visualization for In-order Traversing and print in Binary Tree. Do the others Traversing visualization base it.

![Project Screenshot](asset/Untitled-2025-05-16-1832%20(1).png)



Topic: Tree
Conceptual Session - [Week 5-1]

1) What is Tree?
Ans: 
    A tree is a hierarchical data structure. 
    Each node can have zero or more child nodes
    There is a unique path (acyclic) from the root to every other node in the tree.

2)Key characteristics of a tree include.
Ans:
    Root: The topmost node in the tree from which all other nodes are derived. It serves as the starting point for traversing the tree.

    Edge: An edge represents the link or connection between two nodes. 

    Nodes: Each element in the tree is called a node. Nodes can be connected to other nodes through edges.

    Parent and Child Nodes: A node that is connected to another node is referred to as the parent node, and the connected node is called its child node.

    Leaf Nodes/External Node: A node which don't have any child

    Branch/Internal Nodes: Internal nodes are nodes that have at least one child node. They are not leaf nodes.

    Path: A path in a tree refers to a sequence of nodes connected by edges, starting from a specific node and leading to a destination node.

    Depth: The depth of a binary tree is the number of edges on the longest path from the root node to a leaf node. 
    Height: The height of a tree is the maximum depth of any node in the tree.

        Depth: Root to x (destination node) Node
        Height: From x (destination) to root node 

    Subtree: A subtree is a smaller tree within a larger tree. 

    Sibling Nodes: Sibling nodes are nodes that have the same parent
    Cousing Nodes: Cousin nodes in a tree refer to nodes that are at the same level or depth but do not share the same parent.

    Ancestor : In a tree data structure, an ancestor of a node is any node that lies on the path from the root to that specific node.
    Descendant : In a tree data structure, a descendant of a node is any node that is reachable by following a path from that specific node.

    Diameter: The diameter of a tree is the longest path between any two nodes in the tree.
    (Number of node including two nodes)

    Degree: The degree of a node in a tree refers to the number of edges connected to that node. It represents the count of immediate connections a node has with other nodes in the tree.

3) What is Binary Tree?
Ans:
    A binary tree is a hierarchical data structure in which each node has at most two children, referred to as the left child and the right child. 

4) Variant of Binary Tree.
Ans:
    1) Perfect Binary Tree - All level are filled.
    2) Complete Binary Tree - A complete binary tree is a binary tree in which every level is completely filled, except for the last level, which may be filled from left to right.
    3) Full Binary Tree - Every Node has exactly 0 or 2 child

5) Tricks of Binary Tree:
    1) Number of Nodes:
    For a Perfect binary tree: Number of nodes = 2^(height + 1) - 1 

    2) Number of Edge:
    For a Perfect binary tree: Number of edges = 2^(height + 1) - 2
   