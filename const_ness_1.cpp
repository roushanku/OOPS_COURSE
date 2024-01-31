// J.S.R -- *roush*
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
const int mod = 1000000007;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
typedef tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds; //find_by_order //order_of_key
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//patience Bro , thoda sa logic soch k try ur own test case
//hadbad m kaafi gadbad kie ho islie aaram s -> You will do best for Youself
//First, solve the problem. Then, write the code.

    //const int n;  (Error : constant must be initialized)

    const int n = 5;
    //n = 4;        (Error : constant can't be changed)

    int m = 3;
    int *p = &m;
    *p = 7;

    cout << m << endl; //Prints 7 : Since p stores the address of m, it can be used to change value of m

    //p = &n;       (Error : p can be used to change a constant value n, and it's not allowed)

    //NULL is a manifest constant in C/C++ set to 0

    // //Draw a mental line on * and read
    const int * p       = &m ; //pointer to a constant integer
    int * const p       = &m ; //constant pointer to an integer
    const int * const p = &m ; //constant pointer to a constant integer
return 0;
}