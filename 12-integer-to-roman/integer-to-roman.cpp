class Solution {
public:
    string intToRoman(int num) {
        string ans = "";

        int place = 0;

        string one = "";
        string ten = "";
        string hun = "";
        string tho = "";

        while(num > 0) {
            int rem = num % 10;
            num /= 10;

            if(place == 0) {
                if(rem == 1) one = "I";
                else if(rem == 2) one = "II";
                else if(rem == 3) one = "III";
                else if(rem == 4) one = "IV";
                else if(rem == 5) one = "V";
                else if(rem == 6) one = "VI";
                else if(rem == 7) one = "VII";
                else if(rem == 8) one = "VIII";
                else if(rem == 9) one = "IX";
            }

            else if(place == 1) {
                if(rem == 1) ten = "X";
                else if(rem == 2) ten = "XX";
                else if(rem == 3) ten = "XXX";
                else if(rem == 4) ten = "XL";
                else if(rem == 5) ten = "L";
                else if(rem == 6) ten = "LX";
                else if(rem == 7) ten = "LXX";
                else if(rem == 8) ten = "LXXX";
                else if(rem == 9) ten = "XC";
            }

            else if(place == 2) {
                if(rem == 1) hun = "C";
                else if(rem == 2) hun = "CC";
                else if(rem == 3) hun = "CCC";
                else if(rem == 4) hun = "CD";
                else if(rem == 5) hun = "D";
                else if(rem == 6) hun = "DC";
                else if(rem == 7) hun = "DCC";
                else if(rem == 8) hun = "DCCC";
                else if(rem == 9) hun = "CM";
            }

            else {
                for(int i = 0; i < rem; i++)
                    tho += "M";
            }

            place++;
        }

        ans = tho + hun + ten + one;

        return ans;
    }
};