/* 2557
#include <iostream>

using namespace std;

int main() {
    cout << "Hello World!" << endl;
    return 0;
}
*/

/* 1000
#include <iostream>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    cout << a + b << endl;
    return 0;
}
*/

/* 2558
#include <iostream>

using namespace std;

int main() {
    int a,b;
    cin >> a ;
    cin >> b ;
    cout << a+b << endl;
    return 0;

}
*/

/* 10950
#include <iostream>

using namespace std;

int main() {
    int n, a, b;
    cin >> n;
    int arr[n]={};
    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        arr[i] = a+b;
    }
    for (int i =0;i<n;i++){
        cout << arr[i] << endl;
    }
    return 0;
}
*/

/* 10951
#include <iostream>

using namespace std;

int main(){
    int a,b;
    while(cin >> a >> b){
        cout << a+b << endl;
    }
    return 0;
}
cin은 더이상 입력받을 것이 없으면 false, 있으면 true를 반환하는 함수.
*/

/* 10952
#include <iostream>

using namespace std;

int main() {
    int a,b;
    while (cin >> a >> b && (a!=0 || b!=0)){
        cout << a+b << endl;
    }
    return 0;
}
*/

/* 10953
cin은 ',' 처리 못한다. char comma 만들어서 해당 변수에 담아주는 방식으로 처리할 수 있다.
#include <iostream>

using namespace std;

int main() {
    int n, a, b;
    cin >> n;
    char comma;
    int arr[n] = {};
    for (int i = 0; i < n; i++) {
        cin >> a >> comma >> b;
        arr[i] = a+b;
    }
    for (int i = 0; i < n; i++) {
        cout << arr[i] << endl;
    }
    return 0;
}
*/

/* 11021
작은따옴표: char
큰따옴표: string
담을 수 있다.
#include <iostream>

using namespace std;

int main() {
    int n,a,b;
    cin >> n;
    int arr[n]={};
    for (int i = 0;i<n;i++){
        cin >> a >> b;
        arr[i] = a+b;
    }
    for (int i =0;i<n;i++){
        cout << "Case #" << i+1 << ": "<< arr[i] << endl;
    }
    return 0;

}
*/

/* 11022
#include <iostream>

using namespace std;

int main() {
    int n,a,b;
    cin >> n;
    int arr[n][2]={};
    for (int i =0;i<n;i++){
        cin >> a>> b;
        arr[i][0] = a;
        arr[i][1] = b;
    }
    for (int i =0;i<n;i++){
        cout <<"Case #" << i+1 << ": " << arr[i][0] << " + " << arr[i][1] << " = " <<
arr[i][0]+arr[i][1] << endl;
    }
    return 0;
}
*/

/* 1008
cout.precision: 소수점 아리 10째자리까지 표기
(double)(a/b): a/b 계산 후 double 처리하므로 틀림
#include <iostream>

using namespace std;

int main() {
    double a,b;
    cin >> a >> b;
    cout.precision(10);
    cout << (double)a/b;
    return 0;
}
*/

/* 1001
#include <iostream>

using namespace std;

int main() {
    int a,b;
    cin >> a >> b;
    cout << a-b;
    return 0;
}
*/

/* 1330
==는 문자열! "==" 주의
#include <iostream>

using namespace std;

int main() {

    int a,b;
    cin >> a >> b;
    int comp = a-b;
    if (comp > 0) cout << '>' ;
    else if (comp == 0) cout << "==";
    else if (comp < 0) cout << '<';
    return 0;
}
*/

/* 2438
#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i = 0;i<n;i++){
        cout << string(i+1,'*')<< endl;
    }
    return 0;
}
*/

/* 2739
#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 1;i<=9;i++){
        cout << n << " * " << i << " = " << n*i << endl;
    }
    return 0;
}
*/

/* 10869
#include <iostream>

using namespace std;

int main() {
    int a,b;
    cin >> a >> b;
    cout << a+b << endl;
    cout << a-b << endl;
    cout << a*b << endl;
    cout << a/b << endl;
    cout << a%b << endl;
    return 0;
}
*/

/* 11654
#include <iostream>

using namespace std;

int main() {

    char c;
    cin >> c;
    cout << (int)c;
    return 0;
}
*/

/* 25083
" 출력: \"
\ 출력: \\
#include <iostream>

using namespace std;

int main() {
    cout << "         ,r'\"7" << endl;
    cout << "r`-_   ,'  ,/" << endl;
    cout << " \\. \". L_r'" << endl;
    cout << "   `~\\/" << endl;
    cout << "      |" << endl;
    cout << "      |" << endl;
    return 0;

}
*/

/* 27866
#include <iostream>

using namespace std;

int main() {
    string s;
    int i;
    cin >> s >> i;
    cout << s[i-1];
    return 0;
}
*/
/* 11720
stoi: string to int
하지만 stoi는 "문자열"을 받는다
문자 하나에 대해서: a[i] - '0' 이용
#include <iostream>

using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;
    int cnt = 0;
    for (int i =0;i<n;i++){
        cnt += s[i] - '0';
    }
    cout << cnt;
    return 0;
}
*/
/* 11718
getline(cin,line): 한 줄을 cin으로 받아 line에 넣겠다 & EOF시 false 반환
#include <iostream>

using namespace std;

int main() {
    string line;
    while(getline(cin,line)){
        cout << line << endl;
    }
    return 0;
}
*/
/* 11719
#include <iostream>

using namespace std;

int main() {
    string s;
    while (getline(cin,s)){
        cout << s << endl;
    }
    return 0;
}
*/

/* 4153
pow함수: cmath 헤더 내 존재
#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int a,b,c;
    while(cin >> a >> b>>c){
        if(a==0&&b==0&&c==0){
            break;
        }
        if(pow(a,2)+pow(b,2)==pow(c,2)||pow(b,2)+pow(c,2)==pow(a,2)||pow(c,2)+pow(a,2)==pow(b,2)){
            cout << "right" << endl;
        } else {
            cout << "wrong" << endl;
        }
    }
    return 0;
}
*/
/* 30802
#include <iostream>

using namespace std;

int main() {
    int n;
    int arr[6] = {};
    int t, p;
    cin >> n;
    for (int i = 0; i < 6; i++) {
        cin >> arr[i];
    }
    cin >> t >> p;
    int cnt = 0;
    for (int i =0;i<6;i++){
        cnt += arr[i]%t == 0 ? arr[i]/t : arr[i]/t+1;
    }
    cout << cnt << endl;
    cout << n/p << ' ' << n%p << endl;
    return 0;
}
*/