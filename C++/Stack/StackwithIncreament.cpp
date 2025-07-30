//Time Complexity: O(1) for push and pop, O(k) for increment.
// Space Complexity: O(n) where n is the maximum size of the stack.
class CustomStack {
private:
    vector<int> st;
    int top;

public:
    CustomStack(int maxSize) {
        st.resize(maxSize);
        top = -1;
    }

    void push(int x) {
        if (top < (int)(st.size() - 1)) {  // (int) is necessary as top is negative and st.size give in size_t datatype which is unsigned so we have to convert it to int , whereas if top is positive there is no need logically

            st[++top] = x;
        }
    }

    int pop() {
        if (top >= 0) {
            return st[top--];
        }
        return -1;
    }

    void increment(int k, int val) {
        int limit = min(k, top + 1);
        for (int i = 0; i < limit; i++) {
            st[i] += val;
        }
    }
};