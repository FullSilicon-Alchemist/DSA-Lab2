#include <iostream>
#include <string>
using namespace std;

int main(){

    string* context = new string();
    cout << " Enter the string: ";
    getline(cin,*context);

    int size_string = context->length();
    
    for(int i = 0; i<(size_string/2);i++){
        char temp = (*context)[i];
        (*context)[i] = (*context)[size_string - i -1];
        (*context)[size_string - i -1] = temp;
    }

    cout << "Reversed_Sring: " << *context << endl;

    delete context;
    

    return 0;
}
