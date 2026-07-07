#include <iostream>
using namespace std;

void pt1(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void pt2(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void pt3(int n)
{
    for (int i = 0; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}
void pt4(int n)
{
    for (int i = 0; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}
void pt5(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void pt6(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}
void pt7(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i - 1; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= (2 * (n - i) + 1); j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void pt8(int n)
{
    int i, j;
    // Simple Logic print diamond + inverted Diamond

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (j = 1; j <= 2 * i - 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    for (i = 2; i <= n; i++)
    {
        for (j = 1; j <= i - 1; j++)
        {
            cout << " ";
        }
        for (j = 1; j <= 2 * (n - i) + 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void pt9(int n)
{
    int i, j;
    // Simple Logic print diamond + inverted Diamond

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void pt10(int n)
{

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << ((i + j) % 2 == 0 ? 1 : 0);
        }
        cout << endl;
    }
}

void pt11(int n)
{
    int space = 2*(n-1);

    for (int i = 1; i <= n; i++)
    {
        //number 
        for (int j = 1; j <= i; j++)
        {   
            cout << j;
        }

        //space 
        for(int j = 1;j<=space;j++){
            cout <<  " ";
        }

         //number 
        for (int j = i; j >= 1; j--)
        {   
            cout << j;
        }
        cout << endl;
        space -= 2;
    }
}


void pt12(int n)
{
    int count = 1;
    for(int i =1;i<=n;i++){
        for(int j = 1;j<=i;j++){
            cout << count << " ";
            count++;
        }
        cout <<endl;
    }
}

void pt13(int n)
{

    for (int i = 0; i <= n; i++)
    {
        for (char ch = 'A'; ch <= 'A'+i;ch++)
        {
          cout << ch << " ";
        }
        cout << endl;
    }
}


void pt14(int n)
{

    for (int i = 0; i <= n; i++)
    {
        for (char ch = 'A'; ch <= 'A'+ n-i;ch++)
        {
          cout << ch << " ";
        }
        cout << endl;
    }
}

void pt15(int n)
{

    for (int i = 0; i <= n; i++)
    {
        char ch = 'A' + i;
        
        for(int j = 0;j<=i;j++)
        {
          cout << ch << " ";
        }
        cout << endl;
    }
}

void pt16(int n)
{

    
    for (int i = 0; i <= n; i++)
    {
        //space 
        for (int j = 1; j <= n-i+1; j++)
        {
            cout << " ";
        }

        // characters
        char ch = 'A';
        int breakpoint = (2*i+1) / 2;
        for (int j = 1; j <=2*i+ 1; j++)
        {
            cout << ch;
            if(j<= breakpoint) ch++;
            else ch--;
        }

         //space 
        for (int j =0; j <=n-i+1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

void pt17(int n){
    for (int i = 1; i <= n; i++)
    {
        char start = 'A' + (n - i);
        
        for(char ch = start;ch <='A' + n - 1;ch++)
        {
          cout << ch << " ";
        }
        cout << endl;
    }
}
void pt18(int n){
    int inis = 0;
   for (int i = 0; i <= n; i++)
    {
        // stars
        for (int j = 1; j <= n-i; j++)
        {
            cout << "*";
        }

        //spaces
       for (int j = 0; j < inis; j++)
        {
            cout << " ";
        }

        // stars
        for (int j = 1; j <= n-i; j++)
        {
            cout << "*";
        }
        inis += 2;
        cout << endl;
    }

    inis =  8;
     for (int i = 1; i <= n; i++)
    {
        // stars
        for (int j = 1; j <=i; j++)
        {
            cout << "*";
        }

        //spaces
       for (int j = 0; j < inis; j++)
        {
            cout << " ";
        }

        // stars
        for (int j = 1; j <=i; j++)
        {
            cout << "*";
        }
        inis -= 2;
        cout << endl;
    }
}

void pt19(int n){

    int spaces = 2*n-2;

    for(int i=1;i<=2*n-1;i++){

        int stars = i;

        if(i > n)
            stars = 2*n-i;


        for(int j=1;j<=stars;j++){
            cout<<"*";
        }


        for(int j=1;j<=spaces;j++){
            cout<<" ";
        }


        for(int j=1;j<=stars;j++){
            cout<<"*";
        }


        cout<<endl;


        if(i<n)
            spaces-=2;
        else
            spaces+=2;
    }
}

void pt20(int n){
   for (int i = 0; i < n; i++)
    {
        // stars
        for (int j = 0; j <n; j++)
        {
            if(i ==0 || j==0 || i == n-1 || j == n-1){
                cout << "*";
            }
            else cout << " ";
        }

        cout << endl;
    }

  
}
int main()
{
    int t;
    if (!(cin >> t))
        return 0;

    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        pt20(n);
    }
    return 0;
}