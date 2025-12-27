#include<bits/stdc++.h>

using namespace std;

string decode_string(string s,int n)
{
    string code = "";
    string demo = "";
    for(int i=0; i<n; i++){
        demo += s[i];
        int value = stoi(demo);
        if(value>=10 && i!=n-1){
            if(s[i+1] =='0'){
                if(s[i+2]!= '0'){
                    int val = value + 96;
                    code += (char) val;
                    i++;
                    demo = "";
                }
                else{
                    int val = (s[i-1] - '0') + 96;
                    code += (char) val;
                    demo = s[i];
                }
            }
            else{
                int val = (s[i-1] - '0') + 96;
                code += (char) val;
                demo = s[i];
            }
        }
        else if(i == n-1){
            if(value >= 1 && value<10){
                int val = value + 96;
                code += (char) val;
            }
            else if(value>=10){
                int val1 = (s[i-1] - '0') + 96;
                int val2 = (s[i] - '0') + 96;
                code += (char) val1;
                code += (char) val2;
            }
        }
    }
    return code;
}

int main()
{
    int testCase,n;
    cin>>testCase;
    string s;

    while(testCase--)
    {
        cin>>n;
        cin>>s;
        cout<<decode_string(s,n)<<endl;
    }
}