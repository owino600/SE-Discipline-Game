## ARRAYS
- Arrays are fundamental data structures that stores elements of the same data type in contiguous memory locations. That is, they offer a straightforward way to organize and access data.
Key points about arrays
## Indexing:
- Elements in arrays are accessed through their indices. E.g.  array [0] access the first element in a zero-indexed array followed by array [1] and so on.
## Fixed size:
- Arrays have sizes that are fixed determined by the time of creation. Once created their sizes usually cannot be changed without creating a new array and copying elements.
## Operations:
- common operations in arrays include insertion, deletion, searching and sorting. Efficiency of this operations can vary depending on the type of array, programming language and the algorithm used.
## Operation variation in arrays
## Insertion and appending:
# Appending:
- Adding elements at the end of the array (in python- append () and java add ()) is typically fast and efficient, often with a constant time complexity.
# Insertion in the middle:
- inserting elements in the middle of a dynamic array can be slower, especially if it requires shifting a portion of the array to make space for the new element. In worst case, it might take linear time complexity O(n).
# Deletion: 
#Deletion at the end:
- Removing the last element of a dynamic array is usually efficient and often happens in constant time.
# Deletion in the middle:
- in a dynamic array it involves shifting elements to close the gap, resulting in a time complexity of O(n) in the worst case.
## Data structures in arrays
## Common data structures that can be implemented using arrays ae:
## Stack using arrays:
- A stack is a (LIFO) data structure. It can be implemented using array by restricting operations to one end of the array. (usually the end of the array acts as the top of the stack)
Pushing elements into the stack is the same as appending elements to the array, and popping elements off the stack is similar to removing elements from the end of the array.
Pop() (deletion)
 
Push() (appending)
 
- Stacks can be applied in function call in programming languages
- Undo functionality in software applications
- Express evaluation and syntax parsing
## Queue using arrays:
- A queue is a (FIFO) data structure.
- An array can represent a queue by maintaining two indices: one for the front and another for the rear.
- Enqueue involves adding elements to the rear of the array, while dequeue happens from the front.

 
insert 11 to the queue. Then queue status will be:
 
insert 22 to the queue. Then the queue status is:
 
Again insert another element 33 to the queue.
 
Now, delete an element. The element deleted is the element at the front of the queue. So the status of the queue is
 
insert another element, say 66 to the queue
 
- Can be applied in job scheduling in operating systems
- Printer job queues
- Breadth-First Search algorithm in graph traversal.
## Heap using arrays:
- A head is a tree-based data structure but is commonly implemented using arrays.
- It utilizes the property that the children of a node at index “I” can be found at indices “2i + 1 and 2i + 2” to represent a binary heap using an array.
## LINKED LISTS
- These are fundamental data structure that consists of a sequence of elements, where each element points to the next one, forming a chain-like structure.
- Linked list offers advantages such as dynamic memory allocation, efficient insertion and deletion, and flexibility in managing memory compare to arrays.
- However, they also have drawbacks like increased memory overhead due to pointers, lack of constant-time random access, and slower traversal compared to arrays.
- Linked lists are widely used in various applications, especially when the frequent insertion and deletion of elements are anticipated, or when the size of the data structure is not known in advanced.
## Singly linked list:
- This is a type of linked list where each node contains data and a reference to the next node in the sequence.
- The last node usually points to NULL to indicate the end of the list.
## Operations
The operations in linked list include:
1.	Insertion (at the beginning or end)
2.	Deletion
3.	Traversal
4.	Searching
- It is efficient for insertion and deletion but doesn’t allow for efficient random access, as it requires traversal from the head to the desired position.
## Doubly linked list:
- In addition to the data and a pointer to the next node, each node in a doubly linked list contains a reference to the previous node.
- Allows traversal in both forward and backward directions, enabling efficient deletion and insertion at both ends better support for reversal traversal.
 

