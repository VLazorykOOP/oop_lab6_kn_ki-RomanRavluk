#include <iostream> 
using namespace std;

// ��� ����������� �����������

// ������� ���� A
class A {
protected:
    int a; // ������� ����� ����� A
public:
    A() : a(1) {}           // ����������� �� �������������
};

// ���� B ������������� �� A
class B : protected A {
protected:
    int b; // ������� ����� ����� B
public:
    B() : b(2) {}                           // ����������� �� �������������
};

// ���� C ������������� �� A
class C : protected A {
protected:
    int c; // ������� ����� ����� C
public:
    C() : c(3) {}                           // ����������� �� �������������
};

// ���� D ������������� �� B
class D : protected B {
protected:
    int d; // ������� ����� ����� D
public:
    D() : d(4) {}                                 // ����������� �� �������������
};

// ���� E ������������� �� C
class E : protected C {
protected:
    int e; // ������� ����� ����� E
public:
    E() : e(5) {}                                  // ����������� �� �������������
};

// ���� F ������������� �� D �� E
class F : protected D, protected E {
protected:
    int f; // ������� ����� ����� F
public:
    F() : f(6) {}                                 // ����������� �� �������������
};



// � ���������� ������������

// ���� BV ��������� A ���������
class BV : virtual protected A {
protected:
    int b; // ������� �����
public:
    BV() : b(2) {}
};

// ���� CV ��������� ��������� A
class CV : virtual protected A {
protected:
    int c;
public:
    CV() : c(3) {}
};

// ���� DV ������������� �� BV
class DV : protected BV {
protected:
    int d;
public:
    DV() : d(4) {}
};

// ���� EV ������������� �� CV
class EV : protected CV {
protected:
    int e;
public:
    EV() : e(5) {}
};

// ���� FV ������������� �� DV �� EV   .
class FV : protected DV, protected EV {
protected:
    int f;
public:
    FV() : f(6) {}
};


int main() {
    F obj1;    // ��������� �ᒺ�� ����� F 
    FV obj2;   // ��������� �ᒺ�� ����� FV 

    // �������� ������ ����� ��� ����������� �����������
    cout << " ��� ����������� ����������� \n";
    cout << "Size of A: " << sizeof(A) << "\n";
    cout << "Size of B: " << sizeof(B) << "\n";
    cout << "Size of C: " << sizeof(C) << "\n";
    cout << "Size of D: " << sizeof(D) << "\n";
    cout << "Size of E: " << sizeof(E) << "\n";
    cout << "Size of F: " << sizeof(F) << "\n";

    // �������� ������ ����� � ���������� ������������
    cout << " � ���������� ������������ \n";
    cout << "Size of BV: " << sizeof(BV) << "\n";
    cout << "Size of CV: " << sizeof(CV) << "\n";
    cout << "Size of DV: " << sizeof(DV) << "\n";
    cout << "Size of EV: " << sizeof(EV) << "\n";
    cout << "Size of FV: " << sizeof(FV) << "\n";

    return 0;
}
