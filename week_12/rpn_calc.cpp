#include <cstdio>
#include <stack>
using std::printf;
using std::stack;
int add_rpn(int a, int b){//adds the last two elements in the stack
    return a + b;}
int sub_rpn(int a, int b){//subtracts the last two elements in the stack
    return a - b;}
int mult_rpn(int a, int b){//multiplies the last two elements in the stack
    return a * b;}
int div_rpn(int a, int b){//divides the last two elements in the stack
    return a / b;}
int mod_rpn(int a, int b){//finds the remainder after dividing the last two elements in the stack
    return a % b;}
stack<int> evaluate(stack<int>);
stack<int> evaluate(stack<int>st){
    int x = st.top();
    st.pop();
    if (x == 9999){//starting with addition
        int y = st.top();
        st.pop();
        int z = st.top();
        st.pop();
        if (st.empty()){
            st.push(add_rpn(y,z));}
        else{int fo = st.top();
            st.pop();
            st.push(add_rpn(y,z));
            st.push(fo);
            return evaluate(st);}}
    if (x == 9998){//starting with subtraction
        int y = st.top();
        st.pop();
        int z = st.top();
        st.pop();
        if (st.empty()){
            st.push(sub_rpn(y,z));}
        else{int fo = st.top();
            st.pop();
            st.push(sub_rpn(y,z));
            st.push(fo);
            return evaluate(st);}}
    if (x == 9997){//starting with multiplication
        int y = st.top();
        st.pop();
        int z = st.top();
        st.pop();
        if (st.empty()){
            st.push(mult_rpn(y,z));}
        else{int fo = st.top();
            st.pop();
            st.push(mult_rpn(y,z));
            st.push(fo);
            return evaluate(st);}}
    if (x == 9996){//starting with division
        int y = st.top();
        st.pop();
        int z = st.top();
        st.pop();
        if (st.empty()){
            st.push(div_rpn(y,z));}
        else{int fo = st.top();
            st.pop();
            st.push(div_rpn(y,z));
            st.push(fo);
            return evaluate(st);}}
    if (x == 9995){//starting with modulus
        int y = st.top();
        st.pop();
        int z = st.top();
        st.pop();
        if (st.empty()){
            st.push(mod_rpn(y,z));}
        else{int fo = st.top();
            st.pop();
            st.push(mod_rpn(y,z));
            st.push(fo);
            return evaluate(st);}}
    else{printf("FAIL: no operator found\n");}
    return st; }

int main(){
    stack<int> st = {};
    
    st.push(3);
    st.push(9995);
    st.push(6);
    st.push(9996);
    st.push(3);
    st.push(9997);
    st.push(4);
    st.push(9998);
    st.push(6);
    st.push(6);
    st.push(9999);
    st = evaluate(st);
    printf("result:%d\n",st.top());
    return 0;}