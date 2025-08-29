// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class Node{
public:
 int val;
 Node* next ;
 Node(int val ){
     this->val = val;
     this->next = NULL;
    }
};

class Stack {
public:
  Node* head;
  int s;
  
  Stack(){
     head = NULL;
     s = 0;
     
  }
  
  void push(int val){
       Node* temp = new Node(val);
       temp->next = head ;
       head = temp;
       s++;
       
  } 
  void pop(){
      if(head== NULL){
          cout<<"stack is empty" <<endl ;
      }
      head= head->next;
      s--;
      
    }
  
  int top(){
      return head->val;
    }
  int size(){
      return s;
    }
  
};


int main() {
    
    Stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    cout<<st.size()<<" ";
    st.pop();
    cout<<st.size()<<" ";
    
    
    
   
    

    return 0;
}
