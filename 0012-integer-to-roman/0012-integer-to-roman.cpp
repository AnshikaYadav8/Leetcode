class Solution {
public:
    string intToRoman(int num) {
    vector<pair<int, string>> values ={
            {1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"},
            {100, "C"}, {90, "XC"}, {50, "L"}, {40, "XL"},
            {10, "X"}, {9, "IX"}, {5, "V"}, {4, "IV"},
            {1, "I"}
        };
    string result ="";
    for(auto x : values) {  
            int val = x.first;
            string symbol = x.second;  
            while (num >= val) {  
                result += symbol;  
                num -= val;  
            }
        }
            return result;
        }
};