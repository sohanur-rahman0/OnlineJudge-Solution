#include<bits/stdc++.h>///did not solve yet
using namespace std;
#define ll long long int

const int MAX_CHAR = 26;
const int MAX_FACT = 20;
ll fact[MAX_FACT];


void precomputeFactorials()
{
    fact[0] = 1;
    for (int i = 1; i < MAX_FACT; i++)
        fact[i] = fact[i - 1] * i;
}

// function for nth permutation
void nPermute(char str[], int n)
{
    precomputeFactorials();

    // length of given string
    int len = strlen(str);

    int freq[MAX_CHAR] = { 0 };
    for (int i = 0; i < len; i++)
        freq[str[i] - 'a']++;


    char out[MAX_CHAR];


    int sum = 0;
    int k = 0;

    while (sum != n) {

        sum = 0;

        for (int i = 0; i < MAX_CHAR; i++) {
            if (freq[i] == 0)
                continue;

            freq[i]--;

            int xsum = fact[len - 1 - k];
            for (int j = 0; j < MAX_CHAR; j++)
                xsum /= fact[freq[j]];
            sum += xsum;

            if (sum >= n) {
                out[k++] = i + 'a';
                n -= (sum - xsum);
                break;
            }

            if (sum < n)
                freq[i]++;
        }
    }


    for (int i=MAX_CHAR-1; k < len && i >= 0; i--)
        if (freq[i]) {
            out[k++] = i + 'a';
            freq[i++]--;
        }


    out[k] = '\0';
    cout << out;
}

int main()
{

    return 0;
}
