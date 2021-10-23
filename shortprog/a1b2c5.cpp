#include <iostream>
#include <string>
using namespace std;

int main() 
{
    string str;
    int counter = 0;
    char chr = '\0';
    string compStr = "\0", subStr = "\0";
    
    getline(cin, str);
    cout << "Entered string: \"" << str << "\"" << endl;
    
    chr = str[0];
    for(int i = 0; i <= str.size(); i++)
    {
        if(str[i] == chr)
        {
            counter++;
        }
        else
        {
            subStr = TO_STRING(counter);
            subStr.append(string(1, chr));
            
            if(compStr == "\0")
                compStr = subStr;
            else
                compStr.append(subStr);
                
            counter = 0;
            chr = str[i];
            counter++;
        }
    }
    
    cout << "\nAfter compression: " << compStr << endl;
    return 0;
}
