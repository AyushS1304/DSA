// LeetCode 225: Implement Stack using Queues
// This implementation uses a single queue to simulate stack behavior.
// Time Complexity: O(n) for push, O(1) for pop and top
// Space Complexity: O(n) where n is the number of elements in the stack
//Optimized Approach using a single queue
class MyStack {
    Queue<Integer> queue;
    public MyStack() {
        queue = new LinkedList<>();
    }
    public void push(int x) {
        queue.add(x);
        int size = queue.size();
        while (size-- > 1) {
            queue.add(queue.remove());
        }
    }
    public int pop() {
        return queue.remove();
    }
    public int top() {
        return queue.peek();
    }
    public boolean empty() {
        return queue.isEmpty();
    }
}