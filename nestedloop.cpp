/* here is a example of a pattern to understand the concept of nested loop
question:- we have to print the pattern 
                    ****
                    **** 
                    ****
                    ****
                    */
#include<bits/stdc++.h>
using namespace  std;

void pattern1(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << "*";
        }
        cout << endl;
    }
}
int main(){
    int t;
    cin >> t;
    for(int i=1;i<t;i++);
    int n;
    cin >> n;
     pattern1(n);

}