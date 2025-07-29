// LeetCode Problem: Design a stack that supports incrementing the bottom k elements by a given value.
// This implementation uses an array to represent the stack and provides methods to push, pop, and
//Time Complexity: O(1) for push and pop, O(k) for increment.
// Space Complexity: O(n) where n is the maximum size of the stack.
class CustomStack {
    private int[] stackArray;
    private int topIndex;
    public CustomStack(int maxSize) {
        stackArray = new int[maxSize];
        topIndex = -1;
    }
    public void push(int x) {
        if (topIndex < stackArray.length - 1) {
            stackArray[++topIndex] = x;
        }
    }
    public int pop() {
        if (topIndex >= 0) {
            return stackArray[topIndex--];
        }
        return -1;
    }
    public void increment(int k, int val) {
        int limit = Math.min(k, topIndex + 1);
        for (int i = 0; i < limit; i++) {
            stackArray[i] += val;
        }
    }
}