// Read 2 strings input and str. Print YES if the given str is a prefix for the string.
// Otherwise, print NO
#include<iostream>
using namespace std;

string input,str;

int mainA1()
{
    cout<<"Input a string: ";
    cin >> input ;
    cout<<"\n Type the sub string to find which is a prefix: ";
    cin>> str;
    bool is_prefix=1; /** we will say that it's prefix at the beginning **/
    int n=str.size();
    /**
        check if str is eqaul
        to the first n letter of input
    **/
    for (int i=0;i<n;i++)
    {
        if (input[i]!=str[i])
        {
            is_prefix=0;
            break;
        }
    }

    cout<<"\nIs the substring prefix of the string? :";
    if (is_prefix)
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}


//Read 2 strings input and str. Print YES if the given str is a suffix for the string.
//Otherwise, print NO

//string input,str;

int mainA2()
{
    cout<<"Input a string: ";
    cin >> input ;
    cout<<"\n Type the sub string to find which is a suffix: ";
    cin>> str;

    bool is_suffix=1; /** we will say that it's suffix at the beginning **/
    int n=str.size();
    /**
        check if str is equal
        to the last n letter of input
    **/
    int in=0; /** index of str **/
    for (int i=input.size()-n;i<input.size();i++)
    {
        if (input[i]==str[in])/** careful, str[in] not str[i] **/
        {
            in++;
        }
        else if (input[i]!=str[in])/** careful, str[in] not str[i] **/
        {
            is_suffix=0;
            break;
        }
    }
    cout<<"\nIs the substring suffix of the string? :";
    if (is_suffix)
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}

//Read 2 strings input and str. Print YES if the given str is a substring for the
//string. Otherwise, print NO


int mainA3()
{
    cout<<"Input a string: ";
    cin >> input ;
    cout<<"\n Type the sub string to find which is a suffix: ";
    cin>> str;

    bool is_substring=0; /** we will say that it's not a substring at the beginning **/


    int in=0;
    for (int i=0;i<input.size();i++)
    {
        if (input[i]==str[in])/** characters are equal (possible match) **/
        {
            in++; /** increase index **/
            if (in==str.size())
            {
                is_substring=1;
                break;/** found a solution, no need to stay in the loop **/
            }
        }
        else
        {
            /**
                if the characters are different and we have not broken
                the loop yet (no solution so far)
                make in=0 to look for possible match
            **/
            in=0;
        }
    }

    cout<<"\nIs "<<str<<" sub-string of the string? : ";
    if (is_substring)
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}

//Read 2 strings input and str. Print YES if the given str is a subsequence for
//the string. Otherwise, print NO


int mainA4()
{
    cout<<"Input a string: ";
    cin >> input ;
    cout<<"\n Type the sub string to find which is a suffix: ";
    cin>> str;


    int in=0;/** index of str **/

    for (int i=0;i<input.size();i++)
    {
        if (input[i]==str[in])/** if there is a match just increase the index **/
        {
            in++;
            if (in==str.size())break;/** reached the end of str **/
        }
    }

    cout<<"\nIs "<<str<<" sub-sequence of the string? : ";
    if (in==str.size())/** have we reached the end of str ? if so then it is a subsequence **/
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}


// Covert to number

int mainA5()
{
    int ans=0;
    string str;

    cin >> str;
    /**
        how to convert str to int ?
        say we have a string "123"
        now, make ans=1 which is the first character of str
        the second character is 2
        we need to put 2 in the ans properly (so we get ans=12 for now)
        simply, if we multiply ans by 10
        ans*=10 => ans=10
        then add 2 => ans+=2 => ans=12
        repeat same process for every character
    **/
    for (int i=0;i<str.size();i++)
    {
        ans*=10;// when i=0 ans is 0 too, so ans*=10 keeps ans=0

        ans+=str[i]-'0';/** when i=0 ans will be the first character of str **/
    }
    cout << ans << " " << ans*3 << endl;
    return 0;
}

/*
Read a string, then divide it to consecutive groups of same letter. Print each
group

Input ⇒ outputs.
“111222aabbb” ⇒ 111 222 aa bbb
HHHH ⇒ HHHH
*/

int mainA6()
{
    string input;
    cin >> input;
    int len = input.size();
    /**
        we sure that first character in string
        is found in first group
    **/
    cout << input[0];
    for(int i = 1 ; i < len ; i++){
        /**
            if the current character is equal previous character
            then they are in same group
            otherwise they are in Different groups
        */
        if(input[i-1] != input[i])/// print space between the different groups
            cout << ' ';
        cout << input[i];
    }
    return 0;
}

