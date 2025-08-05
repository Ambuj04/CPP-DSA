class Solution
{
public:
    int myAtoi(string s)
    {
        bool isneg = false;
        int len = s.length();
        int i = 0;
        long num = 0;
        int digit = 0;
        // step 1: remove white spaces
        while (i < len && s[i] == ' ')
        {
            i++;
        }
        // step 2: check sign of number
        if (s[i] == '-' || s[i] == '+')
        {
            if (s[i] == '-')
            {
                isneg = true;
            };
            i++;
        }
        // step 3: push the number and stop when NAN occur
        int start = i;
        for (int i = start; i < len; i++)
        {
            if (isdigit(s[i]))
            {
                digit = s[i] - '0';
                num = num * 10 + digit;
                // overlow condition
                if (!isneg && num > INT_MAX)
                    return INT_MAX;
                if (isneg && -num < INT_MIN)
                    return INT_MIN;
            }
            else
            {
                break;
            }
        }
        return isneg ? -num : num;
    }
};