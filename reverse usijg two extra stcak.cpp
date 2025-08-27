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
       
       
       stack<int> gt;
       stack<int> rt;
       //emoty the stack into gt
       
       
       while(st.size()  > 0){
          gt.push(st.top());
          
          st.pop();
         }
         
         while(gt.size()  > 0){
          rt.push(gt.top());
          
          gt.pop();
         }
         
         while(rt.size()  > 0){
          st.push(rt.top());
          
          rt.pop();
         }
     cout<<endl;
     print(st);      
       
    return 0;
}
