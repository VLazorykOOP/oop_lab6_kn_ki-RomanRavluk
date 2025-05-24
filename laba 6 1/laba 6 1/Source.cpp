#include <iostream> 
using namespace std;

// без віртуального спадкування

// Базовий клас A
class A {
protected:
    int a; // Елемент даних класу A
public:
    A() : a(1) {}           // Конструктор за замовчуванням
};

// Клас B успадковується від A
class B : protected A {
protected:
    int b; // Елемент даних класу B
public:
    B() : b(2) {}                           // Конструктор за замовчуванням
};

// Клас C успадковується від A
class C : protected A {
protected:
    int c; // Елемент даних класу C
public:
    C() : c(3) {}                           // Конструктор за замовчуванням
};

// Клас D успадковується від B
class D : protected B {
protected:
    int d; // Елемент даних класу D
public:
    D() : d(4) {}                                 // Конструктор за замовчуванням
};

// Клас E успадковується від C
class E : protected C {
protected:
    int e; // Елемент даних класу E
public:
    E() : e(5) {}                                  // Конструктор за замовчуванням
};

// Клас F успадковується від D та E
class F : protected D, protected E {
protected:
    int f; // Елемент даних класу F
public:
    F() : f(6) {}                                 // Конструктор за замовчуванням
};



// з віртуальним спадкуванням

// Клас BV успадковує A віртуально
class BV : virtual protected A {
protected:
    int b; // Елемент даних
public:
    BV() : b(2) {}
};

// Клас CV віртуально успадковує A
class CV : virtual protected A {
protected:
    int c;
public:
    CV() : c(3) {}
};

// Клас DV успадковується від BV
class DV : protected BV {
protected:
    int d;
public:
    DV() : d(4) {}
};

// Клас EV успадковується від CV
class EV : protected CV {
protected:
    int e;
public:
    EV() : e(5) {}
};

// Клас FV успадковується від DV та EV   .
class FV : protected DV, protected EV {
protected:
    int f;
public:
    FV() : f(6) {}
};


int main() {
    F obj1;    // Створюємо об’єкт класу F 
    FV obj2;   // Створюємо об’єкт класу FV 

    // Виводимо розміри класів без віртуального спадкування
    cout << " Без віртуального спадкування \n";
    cout << "Size of A: " << sizeof(A) << "\n";
    cout << "Size of B: " << sizeof(B) << "\n";
    cout << "Size of C: " << sizeof(C) << "\n";
    cout << "Size of D: " << sizeof(D) << "\n";
    cout << "Size of E: " << sizeof(E) << "\n";
    cout << "Size of F: " << sizeof(F) << "\n";

    // Виводимо розміри класів з віртуальним спадкуванням
    cout << " З віртуальним спадкуванням \n";
    cout << "Size of BV: " << sizeof(BV) << "\n";
    cout << "Size of CV: " << sizeof(CV) << "\n";
    cout << "Size of DV: " << sizeof(DV) << "\n";
    cout << "Size of EV: " << sizeof(EV) << "\n";
    cout << "Size of FV: " << sizeof(FV) << "\n";

    return 0;
}
