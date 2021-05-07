#include <iostream>
#include <string>
using namespace std;
 
void hallo(string a=""){
    if(a == ""){
    	return;
    }
    cout<<"Hallo "<<a<<" !"<<endl;
}
 
int main(){
    hallo();
    return 0;
}
