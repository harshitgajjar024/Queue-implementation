 Queue-Implementation

## Overview

This repository contains two implementations of a Queue:
1. **Queue Implementation Using Array**
2. **Queue Implementation Using C++ STL (Standard Template Library)**

A queue is a linear data structure that follows the First-In-First-Out (FIFO) principle, meaning the element inserted first will be the first to be removed. Queues are commonly used in many real-life applications like scheduling tasks, handling requests in web servers, or managing processes in operating systems.

## Queue Implementations

### 1. Queue Implementation Using Array

**Description:**

In this approach, a queue is manually implemented using an array. We maintain two pointers, `front` and `rear`, to keep track of the first and last elements in the queue, respectively. The queue supports the following operations:
- `Enqueue`: Adds an element to the rear of the queue.
- `Dequeue`: Removes the element from the front of the queue.
- `Display`: Displays the elements currently in the queue.
- `isFull` and `isEmpty`: Checks if the queue is full or empty.

**Algorithm:**

1. **Enqueue Operation:**
   - Check if the queue is full by checking if `rear == size - 1`.
   - If not full, increment `rear` and insert the new element at `arr[rear]`.
   - If the queue is initially empty (`front == -1`), set `front = 0`.

2. **Dequeue Operation:**
   - Check if the queue is empty by checking if `front == -1` or `front > rear`.
   - If not empty, remove the element at `arr[front]` and increment `front`.
   - If after removal, `front` exceeds `rear`, reset both `front` and `rear` to -1.

3. **Display Operation:**
   - Traverse the queue from `front` to `rear` and print each element.

**Time Complexity:**
- Enqueue: O(1)
- Dequeue: O(1)
- Display: O(n)

### 2. Queue Implementation Using C++ STL

**Description:**

The C++ Standard Template Library (STL) provides a built-in `queue` class which simplifies queue operations. This implementation handles everything internally, allowing us to focus on high-level operations. The `queue` class provides the following member functions:
- `push`: Adds an element to the rear of the queue.
- `pop`: Removes an element from the front.
- `front`: Returns the element at the front of the queue.
- `back`: Returns the element at the rear of the queue.
- `empty`: Checks if the queue is empty.

**Algorithm:**

1. **Enqueue Operation (push):**
   - Use `q.push(value)` to insert an element at the rear of the queue.

2. **Dequeue Operation (pop):**
   - Use `q.pop()` to remove the front element from the queue.

3. **Access Front and Rear:**
   - Use `q.front()` to get the element at the front.
   - Use `q.back()` to get the element at the rear.

4. **Check If Queue is Empty:**
   - Use `q.empty()` to check if the queue has no elements.

**Time Complexity:**
- Enqueue: O(1)
- Dequeue: O(1)
- Access front/back: O(1)
