void PushAtBottomRec(stack<int>& st, int n ){
    if (st.size()==0) {
        st.push(n);
        return;
    }
    int x = st.top();
    
    st.pop();
    PushAtBottomRec(st,n);
    st.push(x);

    
}
