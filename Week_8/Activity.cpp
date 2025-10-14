#include <iostream>

int main() {
    //define numbers
    int a = 50;
    int b = 25;
    int c = 30;
    int n = a+b;
    for(int i=0;i<3;i=i+1){
        n=n-c;

        printf("hello there again i= %d\n", n);
    }
    return 0;
}
