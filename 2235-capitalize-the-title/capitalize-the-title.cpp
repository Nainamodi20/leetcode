class Solution {
public:
    string capitalizeTitle(string title) {
        int n = title.size();
        for (int i = 0; i < n; i++) {
            title[i] = tolower(title[i]);
            if (i == 0 || title[i - 1] == ' ') {
                int j = i;
                while (j < n && title[j] != ' ') {
                    j++;
                }
                if (j - i >= 3) {
                    title[i] = toupper(title[i]);
                }
            }
        }
        return title;
    }
};