#include<iostream>
#include<algorithm>
#include<queue>
#include<cmath>
#include<map>
#include<set>
#include<string>
#include<sstream>
#include<valarray>
using namespace std;

#define endl '\n'
#define IO_optimization ios_base::sync_with_stdio(0),cin.tie(0)

class Int:public valarray<int>{
public:
    Int(int _a=0):valarray<int>(valarray<int>(_a,1)){}
    friend istream & operator>>(istream &in,Int &a){
		int temp;
		in>>temp;
		a=temp;
		return in;
	}
    operator int(){return sum();}
    bool operator!()const{return !sum();}
    Int operator--(){*this-=1;return *this;}
    Int operator++(){*this+=1;return *this;}
    Int operator--(int){*this-=1;return int(*this)+1;}
    Int operator++(int){*this+=1;return int(*this)-1;}
    template<typename T>Int operator%(T& o)const{int b = int(o);return (sum()%b+b)%b;}
    template<typename T>auto operator<(T& o)const{return sum() < int(o);}
    template<typename T>auto operator>(T& o)const{return sum() > int(o);}
    template<typename T>auto operator<=(T& o)const{return sum() <= int(o);}
    template<typename T>auto operator>=(T& o)const{return sum() >= int(o);}
    template<typename T>auto operator==(T& o)const{return sum() == int(o);}
    template<typename T>auto operator!=(T& o)const{return sum() != int(o);}
};
ostream & operator<<(ostream &out,const valarray<int> &x){
    out<<x.sum();
    return out;
}
#define int Int

int32_t main(){
    int a,b;
    cin>>a>>b;
    cout<< (a<=b) <<endl;
    return 0;
}
