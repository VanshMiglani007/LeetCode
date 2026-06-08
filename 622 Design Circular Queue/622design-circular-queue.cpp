class MyCircularQueue {
public:
    queue<int>q;
    int capacity;
    MyCircularQueue(int k) {
        capacity =k;
    }
    
    bool enQueue(int value) {
        if(q.size()==capacity){
            return false;
        }
        else{
            q.push(value);
            return true;
        }
    }
    
    bool deQueue() {
        if(q.empty()){
            return false;
        }
        else {
            q.pop();
            return true;
        }
    }
    
    int Front() {
        if(!q.empty()){
            return q.front();
        }
        else return -1;
    }
    
    int Rear() {
        if(!q.empty()){
            return q.back();
        }
        else return -1;
    }
    
    bool isEmpty() {
        return q.empty();
    }
    
    bool isFull() {
        return q.size()==capacity;
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */