#include <iostream>
#include<cstring>
#include<algorithm>
using namespace std;

string hugePlus(string a, string b){
    //（0，length）低到高
    string res = "";
    unsigned i = 0;
    int lowBit=0;
    for(; i < a.length() && i < b.length(); i++){
        int tmp = a[i] - '0' + b[i] -'0' + lowBit;
        lowBit = tmp / 10;
        res.append(1, char(tmp % 10 + '0'));
    }
    while(i < a.length()){
        int tmp = a[i] - '0'  + lowBit;
        lowBit = tmp / 10;
        res.append(1, char(tmp % 10 + '0'));
        i++;
    }
    while(i < b.length()){
        int tmp = b[i] - '0'  + lowBit;
        lowBit = tmp / 10;
        res.append(1, char(tmp % 10 + '0'));
        i++;
    }
    if(1 == lowBit)
        res.append(1, '1');
    
    return res;
}

string singleBitHugeTime(string a, int b){
    string res = "";
    for(int i = 0; i < b; i++)
        res = hugePlus(res, a);
    return res;
}

string HugeTime(string a, string b){
    cout << a << endl;
    cout << b << endl;
    string res = "";
    for(unsigned i = 0; i < b.length(); i++){
        string tmp = singleBitHugeTime(a, b[i] - '0');
        for(int j = 0; j < i; j++)
            tmp.insert(0,"0");
        res = hugePlus(res, tmp);
    }
    return res;
}

int main() {
    
    string a = "123456789";
    string b = "987654321";
    cout << resverseHugeTime(a, b));
    
    return 0;
}
