#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main() {
   
    int count=0;
    string s;
    bool answer = true;
    
    cin>>s;
    
    /**method 1**/
    
    int freq[26];
    int no_of_odd_freq = 0;
    
    //initialize freq of each character to 0
    for(int i=0;i<26;i++)
        freq[i]=0;
    
    //calculate frequency of each character in the string
    for(int i=0;i<s.size();i++){
        freq[s[i]-'a']++;
    }
    
    //check if number of odd frequencies > 1
    for(int i=0;i<26;i++){
        if(freq[i]%2==1){
            no_of_odd_freq++;
            if(no_of_odd_freq > 1){
                answer = false;
                break;
            }
        }
    }
    
    if(answer)
        cout<<s<<" can be rearranged to form a palindrome"<<endl;
    else
        cout<<s<<" cannot be rearranged to form a palindrome"<<endl;
    
    /**
    
    // Method 2 
    int ans = true;
    
     //calculate frequency of each character in the string
    unordered_map<char, int> frequency;
    for(int i=0;i<s.size();i++){
        if(frequency.find(s[i]) == frequency.end()){
            frequency[s[i]]=1; //first time encountered, so frequncy of that char is 1
        }else{
            frequency[s[i]]++; //increment the existing frequency of that character
        }
    }
    
    //check if number of odd frequencies > 1
    int no_of_odd_frequency = 0;
    unordered_map<char, int>:: iterator p; 
    for(p = frequency.begin(); p!=frequency.end();p++){
        if(p->second%2==1){
            no_of_odd_frequency++;
            if(no_of_odd_frequency>1){
                ans = false;
                break;
            }
        }
    }
    
    if(ans)
        cout<<s<<" can be rearranged to form a palindrome"<<endl;
    else
        cout<<s<<" cannot be rearranged to form a palindrome"<<endl;
    
    
    **/
    
    return 0;
}
