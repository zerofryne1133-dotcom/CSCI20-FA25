#include <cstdio>
#include <vector>
using std::vector;
using std::printf;
void print_stack(vector<int> s){
    for(int i = 0; i<=s.size() - 1;i+=1){
        printf("%d\n",s.at(i));}
return;}
vector<int> push_s(vector<int> s, int e){
    s.push_back(e);
    return s;}
int pop_s(vector<int> s){
    int t= s[2];
    s.erase(s.end());
    printf("popped %d\n",t);
    return t;}
int main() {
    vector<int> s={};
    s= push_s(s,15);
    s= push_s(s,30);
    s= push_s(s,45);
    print_stack(s);
    int e = pop_s(s);
    return 0;}