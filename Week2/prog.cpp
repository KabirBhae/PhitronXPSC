#include <bits/stdc++.h>
#include <iostream>

using namespace std;

bool isVowel(char c){
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') return true;
    return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n,k;
        cin>>n>>k;
        string str;
        cin>>str;
        int vowel_count = 0, int answer = 0;

        for (int i = 0; i < str.size(); i++)
        {
            if(isVowel(str[i])){
                vowel_count++;
                if(vowel_count == k){
                    answer+=1;
                    vowel_count = 0;
                }
            }
        }
        

    }

    return 0;
}
