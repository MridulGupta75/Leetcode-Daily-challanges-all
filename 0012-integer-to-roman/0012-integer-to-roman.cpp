class Solution {
public:
    string intToRoman(int num) {
        string ones[]={"","I","II","III","IV","V","VI","VII","VIII","IX","X"};
        string thens[]={"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC","C"};
        string hrns[] = {"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"};
        string ths[]={"","M","MM","MMM"};
        return ths[num/1000]+hrns[(num%1000)/100]+thens[(num%100)/10]+ones[num%10];
    }
};