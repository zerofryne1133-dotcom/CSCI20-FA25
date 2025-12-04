#include <cstdio>
#include <vector>

struct cart_point {
    int x;
    int y;
};
void print_cart(cart_point point) {
    printf("(%d,%d)", point.x,point.y);
    return ;
}

int main() {
    cart_point point_a = cart_point {5,2};
    print_cart(point_a);
    int a = 1;
    int b = 1;
    int c = 10;
    bool check = true;
    std::vector<int> s = {};
    while(check){
        s.push_back(c);
        printf("c is equal to %d\n", c);
        if(a<c) {c= c-a;}
        else {check = false;}
        for(int i=0;i<s.size();i++){
            printf("%d,",s[i]);
        }
        

    }
    return 0;
}