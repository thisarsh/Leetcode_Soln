class Solution {
public:
    int numberOfSubstrings(string s) {
        long long n = s.size();
        long long a = 0, b = 0, c = 0, count = 0, i = 0, j = 0;
       for(j=0; j<n; j++){

            if (s[j] == 'a')
                a++;
            else if (s[j] == 'b')
                b++;
            else if (s[j] == 'c')
                c++;
           
            while (a && b && c ) {
                count += n - j;
                if (s[i] == 'a')
                    a--;
                else if (s[i] == 'b')
                    b--;
                else if (s[i] == 'c')
                    c--;
                i++;
            }
           
        }

        return count;
    }
};