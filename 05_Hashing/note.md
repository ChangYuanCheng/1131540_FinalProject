# Hashing

## 1. Definition
Hashing is a technique to map keys to indices in a table using a hash function.

## 2. Basic Concepts
- **Hash Function**: converts a key to an index
- **Collision**: two keys map to the same index
- **Collision Resolution**: methods like linear probing, chaining

## 3. Implementation
This example uses **open addressing** with linear probing.

## 4. Time Complexity
- Search: O(1) on average
- Insert: O(1) on average
- Delete: O(1) on average

## 5. Applications
- Dictionary / Symbol table
- Caches
- Unique data storage

## 6. Reflection
Hashing provides very fast access but requires careful collision handling.
