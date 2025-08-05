class Solution
{
public:
    int compress(vector<char> &chars)
    {
        int write = 0;
        int n = chars.size();
        int read = 0;
        while (read < chars.size())
        {
            int count = 0;
            char character = chars[read];
            while (read < n && chars[read] == character)
            {
                count++;
                read++;
            }
            // write
            //  Write the character
            chars[write++] = character;
            if (count > 1)
            {
                string numbers = to_string(count);
                for (char ch : numbers)
                {
                    chars[write++] = ch;
                }
            }
        };
        return write;
    }
};