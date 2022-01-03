#include <bits/stdc++.h>
using namespace std;

string encode(string src);    
 
int main() {
	
	int T;
	cin>>T;
	while(T--)
	{
		string str;
		cin>>str;
		
		cout<<encode(str)<<endl;
	}
	return 0;
}// } Driver Code Ends


/*You are required to complete this function */

string encode(string src)
{     
  //Your code here
        int n=src.size();
        string s="";
        for(int i=0;i<n;)
        {
            char x=src[i];
            int k=0;
            while(src[i]==x){
                i++;k++;
            }
            s+=(x+to_string(k));
        }
        return s;
}     
 
