#include <bits/stdc++.h>
using namespace std;
int main()
{
    int r=0;
    while(1)
    {r++;
        string s;
        cin>>s;
        if(s[0]=='-')
        break;
        stack <char> st;
        int i,j,k,l=s.size();
        for(i=0;i<l;i++)
        {
            if(s[i]=='{')
            st.push(s[i]);
            else
            {
                if(st.size())
                {
                    if(st.top()=='{')
                    {
                        st.pop();
                    }
                    else
                    st.push(s[i]);
                }
                else
                st.push(s[i]);
            }
        }
        int s1=0,s2=0;
        while(st.size())
        {
            if(st.top()=='}')
            s2++;
            else
            s1++;
            st.pop();
        }
        if(s1&&s2&&s1%2)
        {
            printf("%d. %d\n",r,(s1+s2)/2+1);
        }
        else
        {
            printf("%d. %d\n",r,(s1+s2)/2);
        }
    }
    return 0;

}