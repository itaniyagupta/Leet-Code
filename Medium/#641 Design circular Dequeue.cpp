class MyCircularDeque {
public:
    
    int *data; 
    int front; 
    int rear; 
    int size;
    int capacity;
    
    /** Initialize your data structure here. Set the size of the deque to be k. */
    
    MyCircularDeque(int k) {
     data = new int[k];
     front = k-1;
     rear = 0;
     size = 0;
     capacity = k;
        
    }
    
    /** Adds an item at the front of Deque. Return true if the operation is successful. */
    bool insertFront(int value) {
        if(isFull())
        {
        return false;
        }
        data[front] = value;
       front = (front - 1 + capacity) % capacity;
        size++;
        return true;
    }
    
    /** Adds an item at the rear of Deque. Return true if the operation is successful. */
    bool insertLast(int value) {
         if(isFull())
        {
        return false;
        }
        data[rear] = value;
      rear = (rear + 1) % capacity;
        size++;
        return true;
    }
    
    /** Deletes an item from the front of Deque. Return true if the operation is successful. */
    bool deleteFront() {
         if(isEmpty()){
        return false;
        }
        front =  (front + 1) %  capacity;
        size--;
       return true;
    }
    
    /** Deletes an item from the rear of Deque. Return true if the operation is successful. */
    bool deleteLast() {
         if(isEmpty()){
        return false;
        }
       rear = (rear - 1 + capacity) % capacity;
        size--;
       return true;
    }
    
    /** Get the front item from the deque. */
    int getFront() {
        if(isEmpty()){
         return -1;
         }
    return data[( front + 1) % capacity];
    }
    
    /** Get the last item from the deque. */
    int getRear() {
         if(isEmpty()){
         return -1;
        } 
    return data[(rear - 1 + capacity) % capacity];
    }
    
    /** Checks whether the circular deque is empty or not. */
    bool isEmpty() {
         return size == 0;
    }
    
    /** Checks whether the circular deque is full or not. */
    bool isFull() {
     if(size == capacity){
          return true;
      }
       return false; 
    }
};
