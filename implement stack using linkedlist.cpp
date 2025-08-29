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
          cout<<"stack is empty" <<endl
           return;
      }
      head= head->next;
      s--;
      
    }
  
  int top(){
   if(head== NULL){
          cout<<"stack is empty" <<endl ;
       return  -1;
      }

   
      return head->val;
    }
  int size(){
      return s;
    }

  void print(Node* temp){
      if(temp -> next  == NULL){
       cout<< temp->val <<" ";
      return ;
      }
      print(temp->next);
      cout<< temp->val << " ";
  }
  void display(){
   Node* temp = head;
   print(temp);

   cout<<endl;
  }

   void displayRev(){  //rit will reverse display the stack as we have considerd linkedlist as reverse stack
    Node* temp = head;
    while(temp!= NULL){

     cout<<temp->val<<' ';
     temp= temp->next;
    }
    cout<<endl;
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
