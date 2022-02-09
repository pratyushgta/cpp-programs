#include <iostream>
#include <string.h>
//#include <algorithm>
#include<bits/stdc++.h>


using namespace std;

string encrypt(string word) //function to encrypt an extracted word into numbers or symbols
{
    string encrypted_word="";
    char ch; //for storing letter extracted from the word
    char newch; //for storing the encrypted letter
   // transform(word.begin(), word.end(), word.begin(), ::tolower); //to convert the whole word to lower case

    for(int i=0;i<word.length();i++)
    {
        ch=word.at(i); //extracting a letter from the word
        newch=ch-64; //subtracting 40 ascii value from the extracted letter to convert it to a symbol or number
       
    }
    return encrypted_word; //return the encrypted word
}


int main()
{
    string str;
    int counter=0;

while(counter==0)
{
    cout<<"Enter your message: "<<endl;
    getline(cin,str);

    if(str=="e")
    {
        counter=1;
        break;
    }


    string line = str;
     
    //tokenizing the string sentence to separate the each word from it
    vector <string> tokens;
    stringstream check1(line);
     
    string x;
     
    // Tokenizing w.r.t. space ' '
    while(getline(check1, x, ' '))
    {
        tokens.push_back(x);
    }
    string newSentence=""; //to store the new sentence with encrypted words
    string newWord="";//to store the encrypted word
     
    // Printing the token vector
    for(int i = 0; i < tokens.size(); i++){
        newWord = encrypt(tokens[i]); //extracted word is fed to the encrypt(...) function
        newSentence+=newWord+" ";//encrypted word returned is added to the sentence
        newWord="";//re-initializing this variable
    }
    cout<<newSentence<<endl;
}
}