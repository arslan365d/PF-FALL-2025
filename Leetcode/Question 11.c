//Problem Link : https://leetcode.com/problems/valid-palindrome
bool isPalindrome(char *s) {
    char cleaned[100001];
    char reverse[100001];
    int index = 0;
    for (int i = 0; s[i] != '\0'; i++) {
           if (!((s[i] >=32 && s[i] <=47) || (s[i] >=58 && s[i] <=64)  || (s[i] >= 91 && s[i] <= 96) || (s[i] >=123 && s[i] <=127)))
            cleaned[index++] = tolower(s[i]);
    }
    cleaned[index] = '\0';
    for (int i = 0; i < strlen(cleaned); i++) {
        reverse[i] = cleaned[strlen(cleaned) - i - 1];
    }
    reverse[strlen(cleaned)] = '\0';
    return strcmp(cleaned, reverse) == 0;
}
