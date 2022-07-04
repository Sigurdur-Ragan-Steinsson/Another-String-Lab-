#include <string>
#include <iostream>

using namespace std;

int main()
{
    string sentence;
    getline(cin, sentence);
    // manipulate the sentence here
    // https://www.w3schools.com/cpp/cpp_strings_access.asp
    for(int i = 0; i < sentence.length(); i++){
      while((sentence[i] == ' ') && (sentence[i+1] == ' ')){
        sentence.erase(i,1);
      }
    }

    cout << sentence << "\n";

}