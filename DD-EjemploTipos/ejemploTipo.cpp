#include <cassert>
#include <string>
using namespace std;

int main(){
    //----------------------------------------------------
    //Tipo de dato INT
    //----------------------------------------------------
    assert(1+1 == 2);
    assert(2*4 != 9);
    assert(-2 == 8 / -4);
    assert(3 > 2);
    assert(-1 < 3);
    assert(1 == 11 % 2);
    //----------------------------------------------------
    //Tipo de dato BOOL
    //----------------------------------------------------
    assert(true);
    assert(false == false);
    assert(not true == false);
    assert(not false);
    assert(false or true);
    assert(true and true);
    assert((false or true) and false == false);
    //----------------------------------------------------
    //Tipo de dato CHAR
    //----------------------------------------------------
    assert('a' == 'a');
    assert(not('@' == '%'));
    assert('A' == 65);
    assert('B' == 'A' + 1 );
    assert( 1 == 'B' - 'A' );
    assert('a' != 'A');
    assert('H' > 'A' );
    assert('A' + 'B' == 131);
    assert('9' != '2' + '7'); 
    //----------------------------------------------------
    //Tipo de dato STRING
    //----------------------------------------------------
    assert("hola" == "hola");
    assert(not("hola" == "chau"));
    assert("sun"s == "su"s + "n"s);
    assert("leandro"s == "le"s + "an"s + "dro"s);
    assert("trabajo"s.length() == 7 );
    assert("a" < "b");                              // Evalua el valor en codigo de ASCII
    assert("armario" < "bueno");                    // Solo evalua el valor en codigo ASCII del primer caracter y no el largo del string    
    {
        {
            char s [] = "hola";
            char t [] = "hola";
            assert(s != t);            
        }

        {
            std::string s {"hola"};
            std::string t {"hola"};
            assert(s == t);
        } 

    }
    //----------------------------------------------------
    //Tipo de dato UNSIGNED
    //----------------------------------------------------
    assert(1u == 1u);
    assert(not(1u == 4u));
    assert(400u > 300u);
    assert(678u < 1000u);
    assert(1000u + 1u == 1001u);
    //----------------------------------------------------
    //Tipo de dato DOUBLE
    //----------------------------------------------------
    assert(2.0 == 1.0 + 1.0);
    assert(1.0/10.0 == 0.1);
    assert(1 == 1.0);
    assert(2.0 == 1 + 1.0);
    assert(12.4 > 9.8);
    //assert(1.0 == 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1) no puede ser representado con presicion con double, porque es un valor periodico
    assert(0.0 == 0. and .0 == 0.0 and 0.0 == 0.0f and 0.0 == 0e1);

}