#include <cassert>
#include <iostream>
#include <string>
using namespace std;

int main(){
    //Tipo de dato int
    assert(1+1 == 2);
    assert(2*4 != 9);
    //Tipo de dato bool
    assert(true);
    assert(false == false);
    assert(not true == false);
    assert(not false);
    assert(false or true);
    assert(true and true);
    assert((false or true) and false == false);
    //Tipo de dato char
    assert('a' == 'a');
    assert(not('@' == '%'));
    //Tipo de dato string
    assert("hola" == "hola");
    assert(not("hola" == "chau"));
    assert("sun"s == "su"s + "n"s);
    //Tipo de dato unsigned
    assert(1 == 1);
    assert(not(1 == 4));
    //Tipo de dato double
    assert(2.0 == 1.0 + 1.0);
    assert(1.0/10.0 == 0.1);
    assert(1 == 1.0);
    assert(2.0 == 1 + 1.0);
    //assert(1.0 == 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1);
}