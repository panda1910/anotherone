#include<iostream>
using namespace std;

class ob{
private:
    int a;
public:
    ob() {a=0;}
    ob(int a){this->a = a;}
    friend ob operator+(int, ob&);
    friend ob operator+(ob&, int);
    ob operator-(){
        return -a;
    }
    void display(){cout << a << '\n';}
};

ob operator+(int x, ob &t){
    return x + t.a;
}

ob operator+(ob &t, int x){
    return x + t.a;
}

int main(){
    ob a(10), b;
    b = a+5;
    b.display();
    b = 5+a;
    b.display();
    b = -b;
    b.display();
    return 0;
}