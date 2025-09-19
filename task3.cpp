#include <iostream>
using namespace std;

void analyze_pointer(int* ptr);

int main(){

    int iValue = 5;

    analyze_pointer(&iValue);

    int* jValue = new int;
    *jValue = 7;

    analyze_pointer(jValue);
    
    delete jValue;

    return 0;
}


void analyze_pointer(int* ptr){
    
    cout << "Address of the pointer is " << ptr << endl;
    cout << "Value at address of the pointer is " << *ptr << endl;

}
