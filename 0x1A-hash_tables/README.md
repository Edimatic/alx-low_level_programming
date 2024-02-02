			=================================
				C - Hash tables
			================================

In C, a hash table is a data structure that allows for efficient data retrieval based on a key-value pair. It uses a hash function to map keys to indices in an array. This mapping allows for quick insertion, deletion, and lookup operations.

Here are the main components of a hash table in C:

Hash Function:
A hash function takes a key as input and produces an index or hash code. The goal is to distribute the keys uniformly across the array to minimize collisions.


Array:
The hash table is typically implemented as an array of buckets or slots. Each bucket may contain a linked list or another data structure to handle collisions.


Collision Handling:
Collisions occur when two keys hash to the same index. Different strategies can be used to handle collisions, such as chaining (using linked lists at each index) or open addressing (probing to find the next available slot).


Key-Value Pairs
Data is stored in the hash table as key-value pairs. The key is used to compute the hash, and the corresponding value is stored at the hashed index.
