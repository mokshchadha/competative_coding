#include<bits/stdc++.h>

using namespace std;

string keypad[] = {"", "", "ABC", "DEF","GHI", "JKL", "MNO", "PQRS", "TUV", "WXYZ"};

void modernKeyboard(string input, string output, int currentIdx=0){
    if(input[currentIdx] == '\0'){
        cout<<output<<endl;
        return;
    }

    //check the current index and print it n times 
    int current_digit = input[currentIdx] - '0'; // gives us the number in cpp

    string keypadValues = keypad[current_digit];

    for(char c:keypadValues) {
        modernKeyboard(input, output+c, currentIdx+1);
    }

}



int main(){
 #ifndef ONLINE_JUDGE
        freopen("input_file.txt", "r", stdin);
        freopen("output_file.txt", "w", stdout);
#endif

string n = "23";

string output;

modernKeyboard(n, output);

return 0; 

}