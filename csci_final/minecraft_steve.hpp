#include <cstdio>
#include <stack>
#include <vector>
using std::vector;
using std::stack;
using std::printf;

class Calc{
    private:
        struct clowns{
        int num;
        char op;
         clowns(int a, char b){
            num = a;
            op = b;
        }
    };
    stack<clowns> clown_bakery;
        int add(int , int);
        int sub(int , int);
        int mul(int , int);
        int div(int , int);
        int mod(int , int);
    public:
        //Calc(); // inititalizes values
        struct ice_cream{
            int flavor;
            char cone;
            ice_cream(int a, char b){
                flavor = a;
                cone = b;
            }
        };

//tool
vector<clowns> map_ice_clown(vector<ice_cream>);

//loads the stack
void german_village_clown_school(vector<ice_cream>);
stack<ice_cream> german_village_clown_school(vector<clowns>load_eq){
    clowns x = load_eq.back();
    load_eq.pop_back();
    if(x.op == '+'){
        clowns y = load_eq.back();
        load_eq.pop_back();
        clowns z = load_eq.back();
        load_eq.pop_back();
        if(load_eq.empty()){
            load_eq.emplace_back(add(y.num,z.num));
        }
        else{clowns fo = load_eq.back();
            load_eq.pop_back();
            load_eq.emplace_back(add(y.num,z.num));
            load_eq.emplace_back(fo);
            return german_village_clown_school(load_eq);}
    }

}


};