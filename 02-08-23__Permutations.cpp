#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, x, c, n, d;
	string s;
	cin>>t;
	while(t--){
	    cin>>x;
	    cin>>s;
	    
	    c = 0, n = 0, d = 0;
	    for (int i = 0; i < 14; i++) {
	        if(s[i] == 'C'){
	            c++;
	        }
	        else if(s[i] == 'D'){
	            d++;
	        }
	        else if(s[i] == 'N'){
	            n++;
	        }
	    }
	    
	    if(c > n){
	        cout<<60*x<<endl;
	    }
	    else if(c == n){
	        cout<<55*x<<endl;
	    }
	    else{
	        cout<<40*x<<endl;
	    }
	}
	return 0;
}