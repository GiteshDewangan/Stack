// Online C++ compiler to run C++ program online
#include <iostream>
#include<stack> 
using namespace std;

void print(stack <int> st){
    stack<int> temp;
    while(st.size()> 0){
        
        int x = st.top();
        st.pop();
        temp.push(x);
        
     }
     
     while(temp.size()> 0){
         cout<<temp.top() << " ";
         int x= temp.top();
         temp.pop();
         st.push(x);
         
     }
}


    
void pushAtBottom(stack<int>& st , int n ){
    stack<int> temp ;
    while(st.size()>0){
        temp.push(st.top());
        st.pop();
    
    }
    
    st.push(n);
    
    while(temp.size()>0){
        st.push(temp.top());
        temp.pop();
    
    }
    
}
void reverse(stack<int>& st){
    if(st.size()==1) return ;
    int top = st.top();
    st.pop();
    reverse(st);
    pushAtBottom(st,top);
    
    
}

//  reverse using two stack
int main() {
    stack<int> st; 
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);
    print(st);
    
    cout<<endl;
    reverse(st);
    print(st);
    
    
       
    return 0;
}
