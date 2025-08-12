# What is a Linked List.

-------------------------

A linked list contains data and one pointer that points to the next node.  
The elements of a linked list are called nodes.

      avantages?
      1. Dynamic Data Structure (allocates needed memory while running)
      2. Insertion and Deletion of Nodes is easy. O(1) 
      3. No/Low memory waste
  
      disadvantages?
      1. Greater memory usage (additional pointer)
      2. No random access of elements (no index [i])
      3. Accessing/searching elements is more time consuming. O(n)


      uses?
      1. implement Stacks/Queues
      2. GPS navigation
      3. music playlist


Adding/Deleting an element can be fast,
but accessing an element can take some time, because you need to
traverse the list in order to find it.
Its better than arrays, because it doesnt have a fixed size.
No need to shift elements for adding/deleting.



TIME COMPLEXITY:  

* accessing:                      O(n)
* inserting(w node reference):    O(1)
* nserting (without ref):         O(n)
* deletion(w node reference):     O(1)
* deletion (without ref):         O(n)





