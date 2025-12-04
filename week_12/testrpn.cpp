#include <cstdio>
#include <vector>
#include <stack>
using std::stack;
using std::vector;
using std::printf;

int addition_on_numbers(stack<int>st, int op){
    if(op==9999){
        printf("we see another addition");
        return 0;
    }
    else{
        printf("your result is %d", (op+st.top()));
        st.pop();
        return 0;
    }
}
void choice(stack<int> st, int op){
    if (op == 9999){
    int new_op = st.top();
    st.pop();
    addition_on_numbers(st,new_op);
    }
    else{
        printf("first number %d, second number %d", op,st.top());
    }
    return;
}
int main(){
    stack<int> st;
    st.push(8);
    st.push(9);
    st.push(9999);
    int op = st.top();
    st.pop();
    choice(st,op);
    return 0;
}