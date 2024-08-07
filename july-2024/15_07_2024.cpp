//intToRoman
#include <vector>
#include <string>
using namespace std;

string intToRoman(int num) {
    vector<pair<int, string>> valueSymbols = { {1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"},
        {100, "C"}, {90, "XC"}, {50, "L"}, {40, "XL"},
        {10, "X"}, {9, "IX"}, {5, "V"}, {4, "IV"},
        {1, "I"}
    };

    string romanNumeral = "";
    for (const auto& valueSymbol : valueSymbols) {
        while (num >= valueSymbol.first) {
            romanNumeral += valueSymbol.second;
            num -= valueSymbol.first;
        }
    }

    return romanNumeral;
}
