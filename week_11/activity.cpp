#include <cstdio>
#include <vector>
using std::vector;
using std::printf;

void print_queue(vector<int> q) {
    for(int i = 0; i<q.size(); i++) {
        printf("%d\n,",q.at(i));
    }
    return ;
}
vector<int> push_q(vector<int>q, int e){
     q.push_back(e);
     return q;

}
int pop_q(vector<int>q) {
    int r = q[0];
    q.erase(q.begin());
    printf("%d",r);
    return r;
}
int main() {
    vector<int> q={};

    q= push_q(q, 10);
    q= push_q(q, 20);
    q= push_q(q, 30);
    print_queue(q);
    int e = pop_q(q);
    printf("popped %d", e);
    return 0;
}