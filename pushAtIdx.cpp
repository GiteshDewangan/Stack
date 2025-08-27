
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
    
void pushAtIdx(stack<int>& st , int n , int idx){
    stack<int> temp ;
    while(st.size()>idx){
        temp.push(st.top());
        st.pop();
    
    }
    
    st.push(n);
    
    while(temp.size()>0){
        st.push(temp.top());
        temp.pop();
    
    }
    
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
    pushAtIdx(st, 80 , 2);
    print(st);      
       
    return 0;
}
