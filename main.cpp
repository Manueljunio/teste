#include <iostream>
#include <map>

using namespace std;

int main() {
    map<int,int> teste;
    for(int i=0;i<=10;i++) teste[i]=i;
    for(int i=0;i<=10;i++) cout << teste.at(i) << " "; 
    return 0;
}
