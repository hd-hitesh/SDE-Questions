#include<iostream>

#include<cstring>

#include<stack>



using namespace std;

char str[100000000];



int main()
{
    
 int t;
    
 cin>>t;
   

   while(t--)
    
    {
 
     cin>>str;

      stack<char> s;

      int len=strlen(str);

      for(int i=len-1;i>=0;i--)
  
       if(str[i]=='*')
  
         {
    
          if(!s.empty())
	
             s.pop();
    
          if(!s.empty())
	
             s.pop();
  
         }

       else
	
       s.push(str[i]);


        if(s.empty())
	
         cout<<"YES\n";


        else
	
         cout<<"NO\n";
    
    }


return 0;

}

/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int q;
    cin>>q;
    while(q--)
    {
        string str;
        cin>>str;
        int ask=0,flag=0;
        for(int i=0;i<str.length();++i)
        {
            if(str[i]=='*')
            {
                ask+=2;
            }
            else{
                ask--;
            }
            if(ask<0)
            {
                flag=1;
                cout<<"NO"<<endl;
                break;
            }
        }
        if(flag==0)
        {
            cout<<"YES"<<endl;
        }
        
    }
    return 0;
}
*/