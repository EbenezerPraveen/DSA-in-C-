#include <iostream>
using namespace std;

// Working :-
// accept character input from the user 
// check if character is any of vowels , in both lower and upper case
// if yes then print Vowel, or else print Consonant

bool isVowel(char c){
    c= toupper(c);
    return (c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
}

int main(){
    char c;
    cout<<"Enter a character : "<<endl;
    cin>>c;

    if(!isalpha(c)){
        cout<<"Non alphabet";
    }else if(isVowel(c)){
        cout<<c<<" is vowel.";
    }else{
        cout<<c<<" is a consonant";
    }

    return 0;
}