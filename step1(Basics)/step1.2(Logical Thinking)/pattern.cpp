#include<bits/stdc++.h>
using namespace std;

void p1(int n) {
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            cout<<" * ";
        }
        cout<<'\n';
        cout<<'\n';
    }
    cout<<'\n';
}

void p2(int n) {
    for(int i=0;i<n;i++) {
        for(int j=0;j<=i;j++) {
            cout<<" * ";
        }
        cout<<'\n';
        cout<<'\n';
    }
    cout<<'\n';
}

void p3(int n) {
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=i;j++) {
            cout<<' '<<j<<' ';
        }
        cout<<'\n';
        cout<<'\n';
    }
    cout<<'\n';
}

void p4(int n) {
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=i;j++) {
            cout<<' '<<i<<' ';
        }
        cout<<'\n';
        cout<<'\n';
    }
    cout<<'\n';
}

void p5(int n) {
    for(int i=n;i>=1;i--) {
        for(int j=1;j<=i;j++) {
            cout<<" * ";
        }
        cout<<'\n';
        cout<<'\n';
    }
    cout<<'\n';
}

void p6(int n) {
    for(int i=n;i>=1;i--) {
        for(int j=1;j<=i;j++) {
            cout<<' '<<j<<' ';
        }
        cout<<'\n';
        cout<<'\n';
    }
    cout<<'\n';
}

void p7(int n) {
    for(int i=0;i<n;i++) {

        for(int j=0;j<n-i-1;j++) {
            cout<<' ';
        }

        for(int j=0;j<2*i+1;j++) {
            cout<<'*';
        }
        cout<<'\n';
    }
    cout<<'\n';
}

void p8(int n) {
    for(int i=0;i<n;i++) {

        for(int j=0;j<i;j++)
            cout<<' ';
        for(int j=0;j<2*n-(2*i+1);j++)
            cout<<'*';
        cout<<'\n';
    }
    cout<<'\n';
}

void p9(int n) {
    for(int i=0;i<n;i++) {
        for(int j=0;j<n-i-1;j++) {
            cout<<' ';
        }
        for(int j=0;j<2*i+1;j++) {
            cout<<'*';
        }
        cout<<'\n';
    }
    for(int i=0;i<n;i++) {
        for(int j=0;j<i;j++) {
            cout<<' ';
        }
        for(int j=0;j<2*n-(2*i+1);j++) {
            cout<<'*';
        }
        cout<<'\n';
    }
    cout<<'\n';
}

void p10(int n) {
    for(int i=0;i<n;i++) {
        for(int j=0;j<=i;j++) {
            cout<<'*';
        }
        cout<<'\n';
    }
    for(int i=0;i<n;i++) {
        for(int j=0;j<n-i-1;j++) {
            cout<<'*';
        }
        cout<<'\n';
    }
    cout<<'\n';
}

void p11(int n) {
    int start=1;
    for(int i=1;i<=n;i++) {
        if(i%2==0)
            start=0;
        else
            start=1;
        for(int j=1;j<=i;j++) {
            cout<<start;
            start=1-start;
        }
        cout<<'\n';
    }
}

void p12(int n) {
    int s=2*(n-1);
    for(int i=0;i<n;i++) {
        for(int j=0;j<=i;j++) {
            cout<<' '<<j+1<<' ';
        }
        for(int j=0;j<s;j++) {
            cout<<' '<<' '<<' ';
        }
        for(int j=i+1;j>=1;j--) {
            cout<<' '<<j<<' ';
        }
       s-=2;
       cout<<'\n';
    }
}

void p13(int n) {
    int num=1;
    for(int i=0;i<n;i++) {
        for(int j=0;j<=i;j++) {
            cout<<' '<<num<<' ';
            num++;
        }
        cout<<'\n';
    }
}

void p14(int n) {
    for(int i=0;i<n;i++) {
        char val='A';
        for(int j=0;j<=i;j++) {
            cout<<val;
            val++;
        }
        cout<<'\n';
    }
}

void p15(int n) {
    for(int i=0;i<n;i++) {
        char val='A';
        for(int j=0;j<n-i;j++) {
            cout<<val;
            val++;
        }
        cout<<'\n';
    }
}

void p16(int n) {
    char val='A';
    for(int i=0;i<n;i++) {
        for(int j=0;j<=i;j++) {
            cout<<val;
        }
        cout<<'\n';
        val++;
    }
}

void p17(int n) {
    for(int i=0;i<n;i++) {
        for(int j=1;j<n-i;j++) {
            cout<<' ';
        }
        char val='A';
        for(int j=0;j<=i;j++) {
            cout<<val;
            val++;
        }
        val='A'+i-1;
        for(int j=0;j<i;j++) {
            cout<<val;
            val--;
        }
        cout<<'\n';
    }
}

void p18(int n) {
    for(int i=0;i<n;i++) {
        for(char ch=('A'+n-1)-i;ch<=('A'+n-1);ch++) {
            cout<<ch;
        }
        cout<<'\n';
    }
}

void p19(int n) {
    for(int i=0;i<n;i++) {
        for(int j=0;j<n-i;j++) {
            cout<<'*';
        }
        for(int j=0;j<2*i;j++) {
            cout<<' ';
        }
        for(int j=0;j<n-i;j++) {
            cout<<'*';
        }
        cout<<'\n';
    }
    for(int i=0;i<n;i++) {
        for(int j=0;j<=i;j++) {
            cout<<'*';
        }
        for(int j=0;j<2*n-2*i-2;j++) {
            cout<<' ';
        }
        for(int j=0;j<=i;j++) {
            cout<<'*';
        }
      cout<<'\n';
    }
}

void p20(int n) {
    for(int i=0;i<n;i++) {
        for(int j=0;j<=i;j++) {
            cout<<'*';
        }
        for(int j=0;j<2*n-2*i-2;j++) {
            cout<<' ';
        }
        for(int j=0;j<=i;j++) {
            cout<<'*';
        }
        cout<<'\n';
    }
    for(int i=0;i<n;i++) {
        for(int j=0;j<n-i;j++) {
            cout<<'*';
        }
        for(int j=0;j<2*i;j++) {
            cout<<' ';
        }
        for(int j=0;j<n-i;j++) {
            cout<<'*';
        }
      cout<<'\n';
    }
}

void p21(int n) {
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            if(i==0 || j==0 || i==n-1 || j==n-1){
                cout<<'*';
            }
            else {
                cout<<' ';
            }
        }
        cout<<'\n';
    }
}

void p22(int n) {
    for(int i=0;i<2*n-1;i++) {
        for(int j=0;j<2*n-1;j++) {
            int top=i;
            int bottom=(2*n-2)-i;
            int left=j;
            int right=(2*n-2)-j;

            cout<<(n-min(min(top,bottom),min(left,right)))<<' ';
        }
        cout<<'\n';
    }
}

int main() {
    cout<<"<---Patterns using CPP!--->\n";
    int n;
    cout<<"enter size of pattern: \n";
    cin>>n;
    cout<<'\n';
    p22(n);
    return 0;
}
