
    #include <bits/stdc++.h>
    using namespace std;
    
    int main()
    {
        int k,n,t[50],l,i;
        cin >>n;
        cin >>k;
        l=0;
        for(i=0;i<n;i++){
            cin >>t[i];
        }
        for(i=0;i<n;i++){
            if(t[k-1]<=t[i]&&t[i]!=0){
                l++;
                }
        }
        cout <<l;
        return 0;
    }
