# include <bits/stdc++.h>
using namespace std;

#define MAX 100000

// This function multiplies x
// with the number represented by res[].
// res_size is size of res[] or
// number of digits in the number
// represented by res[]. This function
// uses simple school mathematics
// for multiplication.
// This function may value of res_size
// and returns the new value of res_size
int multiply(int x, int res[], int res_size) {

// Initialize carry
    int carry = 0;

// One by one multiply n with
// individual digits of res[]
    for (int i = 0; i < res_size; i++) {
        int prod = res[i] * x + carry;

        // Store last digit of
        // 'prod' in res[]
        res[i] = prod % 10;

        // Put rest in carry
        carry = prod / 10;
    }

// Put carry in res and
// increase result size
    while (carry) {
        res[res_size] = carry % 10;
        carry = carry / 10;
        res_size++;
    }
    return res_size;
}

// This function finds
// power of a number x
string power(int x, int n)
{

//printing value "1" for power = 0
    if(n == 0 ) {

        return "1";
    }


    int res[MAX];
    int res_size = 0;
    int temp = x;

// Initialize result
    while (temp != 0) {
        res[res_size++] = temp % 10;
        temp = temp / 10;
    }

// Multiply x n times
// (x^n = x*x*x....n times)
    for (int i = 2; i <= n; i++)
        res_size = multiply(x, res, res_size);

    string str="";
    for (int i = res_size - 1; i >= 0; i--)
        str+= to_string(res[i]);
    return str;

}

bool isSmaller(string str1, string str2)
{
    // Calculate lengths of both string
    int n1 = str1.length(), n2 = str2.length();

    if (n1 < n2)
        return true;
    if (n2 < n1)
        return false;

    for (int i = 0; i < n1; i++)
        if (str1[i] < str2[i])
            return true;
        else if (str1[i] > str2[i])
            return false;

    return false;
}

// Function for find difference of larger numbers
string findDiff(string str1, string str2)
{
    // Before proceeding further, make sure str1
    // is not smaller
    if (isSmaller(str1, str2))
        swap(str1, str2);

    // Take an empty string for storing result
    string str = "";

    // Calculate length of both string
    int n1 = str1.length(), n2 = str2.length();

    // Reverse both of strings
    reverse(str1.begin(), str1.end());
    reverse(str2.begin(), str2.end());

    int carry = 0;

    // Run loop till small string length
    // and subtract digit of str1 to str2
    for (int i = 0; i < n2; i++) {
        // Do school mathematics, compute difference of
        // current digits

        int sub
            = ((str1[i] - '0') - (str2[i] - '0') - carry);

        // If subtraction is less then zero
        // we add then we add 10 into sub and
        // take carry as 1 for calculating next step
        if (sub < 0) {
            sub = sub + 10;
            carry = 1;
        }
        else
            carry = 0;

        str.push_back(sub + '0');
    }

    // subtract remaining digits of larger number
    for (int i = n2; i < n1; i++) {
        int sub = ((str1[i] - '0') - carry);

        // if the sub value is -ve, then make it positive
        if (sub < 0) {
            sub = sub + 10;
            carry = 1;
        }
        else
            carry = 0;

        str.push_back(sub + '0');
    }

    // reverse resultant string
    reverse(str.begin(), str.end());

    return str;
}

int main() {
    int a,b;
    cin>>a>>b;
    if(a==b) {
        cout<<"0"<<endl;
    } else {
        string ab = power(a,b);
        string ba = power(b,a);
        if(isSmaller(ab,ba)) {
            cout<<"-"<<findDiff(ab,ba)<<endl;
        } else {
            cout<<findDiff(ab,ba)<<endl;
        }

    }

}