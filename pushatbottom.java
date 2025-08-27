import java.util.*;

public class Main {

    // print stack without modifying
    static void print(Stack<Integer> st) {
        Stack<Integer> temp = new Stack<>();
        
        while (!st.isEmpty()) {
            int x = st.peek();
            st.pop();
            temp.push(x);
        }
        
        while (!temp.isEmpty()) {
            System.out.print(temp.peek() + " ");
            int x = temp.peek();
            temp.pop();
            st.push(x);
        }
        System.out.println();
    }

    // push element at bottom
    static void pushAtBottom(Stack<Integer> st, int n) {
        Stack<Integer> temp = new Stack<>();
        
        while (!st.isEmpty()) {
            temp.push(st.peek());
            st.pop();
        }
        
        st.push(n);
        
        while (!temp.isEmpty()) {
            st.push(temp.peek());
            temp.pop();
        }
    }

    public static void main(String[] args) {
        Stack<Integer> st = new Stack<>();
        
        st.push(10);
        st.push(20);
        st.push(30);
        st.push(40);
        st.push(50);
        st.push(60);
        
        print(st);
        
        pushAtBottom(st, 80);  // ye original stack change karega
        print(st);
    }
}
