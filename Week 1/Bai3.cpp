#include <iostream>
using namespace std;
int main(){
    cout << "Nhap so N: ";
    int n;
    int s=1;
    cin >> n;
    for(int i=1;i<=n;i++){
        s =s*i;
    }
    cout << s;
}
//Độ phức tạp thời gian: T(n) = O(n)
//Bộ nhớ: M(n) = O(1)

