void DisplayRevRecursion(stack<int>& st){
    if (st.size()==0) return ;
    int x = st.top();
    cout<<x<<" ";
    st.pop();
    DisplayRevRecursion(st);
    st.push(x);
    
    
}
