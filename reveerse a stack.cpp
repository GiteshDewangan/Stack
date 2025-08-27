// Online C++ compiler to run C++ program online
#include <iostream>
#include<stack> 
using namespace std;

//reverse print the stack element
int main() {
    stack<int> st;
    st.push(10);
    st.push(20);
       st.push(30);
       st.push(40);
       st.push(50);
       st.push(60);
       
       
     stack<int> temp;
     while(st.size()> 0){
        cout<<st.top() << " ";
        int x = st.top();
        st.pop();
        temp.push(x);
        
     }
     
     while(temp.size()> 0){
         int x= temp.top();
         temp.pop();
         st.push(x);
         
     }
    

    return 0;
}
