/*std::next_permutation takes two iterators, 
one is the beginning of your string, the second is the end
If s is the last such permutation (i.e. "gfedcba" for input "abcdefg"), 
std::next_permutation returns false and thus you know you're done.
std::sort(s.begin(), s.end()); before permuting.
*/

#include <algorithm>
#include <iostream>
#include <string>

int main()
{
    std::string s("abc");
    do
    {
        std::cout << s << "\n";
    }
    while ( std::next_permutation(s.begin(), s.end()) );
}
