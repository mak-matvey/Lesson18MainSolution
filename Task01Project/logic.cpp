#include "logic.h"

string numberToWords(int n)
{

    if (n == 0) return "zero";

    string result;

    switch (n / 100)
    {
    case 1: result = "one hundred"; break;
    case 2: result = "two hundred"; break;
    case 3: result = "three hundred"; break;
    case 4: result = "four hundred"; break;
    case 5: result = "five hundred"; break;
    case 6: result = "six hundred"; break;
    case 7: result = "seven hundred"; break;
    case 8: result = "eight hundred"; break;
    case 9: result = "nine hundred"; break;
    }
    n %= 100;
    if (n == 0)
    {
        return result;
    }
    result += " ";

    if (n >= 20)
    {
        switch (n / 10)
        {
        case 2: result += "twenty"; break;
        case 3: result += "thirty"; break;
        case 4: result += "forty"; break;
        case 5: result += "fifty"; break;
        case 6: result += "sixty"; break;
        case 7: result += "seventy"; break;
        case 8: result += "eighty"; break;
        case 9: result += "ninety"; break;
        }
        n %= 10;
        if (n == 0) return result;
        result += " ";
    }

    else if (n >= 10) {
        switch (n) {
        case 10: return result + "ten";
        case 11: return result + "eleven";
        case 12: return result + "twelve";
        case 13: return result + "thirteen";
        case 14: return result + "fourteen";
        case 15: return result + "fifteen";
        case 16: return result + "sixteen";
        case 17: return result + "seventeen";
        case 18: return result + "eighteen";
        case 19: return result + "nineteen";
        }
    }

    if (n > 0)
    {
        switch (n) {
        case 1: result += "one"; break;
        case 2: result += "two"; break;
        case 3: result += "three"; break;
        case 4: result += "four"; break;
        case 5: result += "five"; break;
        case 6: result += "six"; break;
        case 7: result += "seven"; break;
        case 8: result += "eight"; break;
        case 9: result += "nine"; break;
        }
    }

    return result;
}