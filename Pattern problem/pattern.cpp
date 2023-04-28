#1
Input: N = 6
Output:
* * * * * *
* * * * * *
* * * * * *
* * * * * *
* * * * * *
* * * * * *

#include <iostream>

using namespace std;

int main()
{
    int n = 6;
    for(int i =0; i<n; i++)
    {  for(int j=0; j<n; j++)
        {
        cout<<"*";
        }
    cout<<endl;
    }    
    return 0;
}




#2
Input Format: N = 6
Result:
* 
* * 
* * *
* * * *
* * * * *
* * * * * *

#include <iostream>

using namespace std;

int main()
{
    int n = 6;
    for(int i =0; i<n; i++)
    {  for(int j=0; j<=i; j++)
        {
        cout<<"*";
        }
    cout<<endl;
    }    
    return 0;
}




#3
Input Format: N = 6
Result:
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
1 2 3 4 5 6
  
#include <iostream>

using namespace std;

int main()
{
    int n = 6;
    for(int i =1; i<=n; i++)
    {  for(int j=1; j<=i; j++)
        {
        cout<<j;
        }
    cout<<endl;
    }    
    return 0;
}




#4
Input Format: N = 6
Result:
1
2 2
3 3 3
4 4 4 4
5 5 5 5 5
6 6 6 6 6 6
  
#include <iostream>

using namespace std;

int main()
{
    int n = 6;
    for(int i =1; i<=n; i++)
    {  for(int j=1; j<=i; j++)
        {
        cout<<i;
        }
    cout<<endl;
    }    
    return 0;
}



#5
Input Format: N = 6
Result:
* * * * * *
* * * * * 
* * * * 
* * * 
* * 
* 
  
#include <iostream>

using namespace std;

int main()
{
    int n = 6;
    for(int i =0; i<n; i++)
    {  for(int j=n; j>i; j--)
        {
        cout<<"*";
        }
    cout<<endl;
    }    
    return 0;
}




#6
Input Format: N = 6
Result:
1 2 3 4 5 6
1 2 3 4 5
1 2 3 4
1 2 3
1 2 
1
  
#include <iostream>

using namespace std;

int main()
{
    int n = 6;
    for(int i =n; i>0; i--)
    {  for(int j=1; j<=i; j++)
        {
        cout<<j;
        }
    cout<<endl;
    }    
    return 0;
}




#7
Input Format: N = 6
Result:
     *     
    ***    
   *****   
  *******  
 ********* 
***********

#include <iostream>

using namespace std;

int main()
{
    int n = 6;
    for(int i =0; i<n; i++)
    {  for(int j=n; j>i; j--)
        {
        cout<<" ";
        }
        for(int k=0; k<2*i+1; k++)
        {
            cout<<"*";
        }
    cout<<endl;
    }    
    return 0;
}

#8
Input Format: N = 6
Result:     
***********
 *********
  *******
   ***** 
    ***    
     *

#include <iostream>                 //My-way

using namespace std;

int main()
{
    int n = 6;
    for(int i =0; i<n; i++)
    {  for(int j=0; j<i; j++)
        {
        cout<<" ";
        }
        for(int k=n*2-1; k>=2*i+1; k--)
        {
            cout<<"*";
        }
    cout<<endl;
    }    
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

void pattern8(int N)
{
    for (int i = 0; i < N; i++)
    {
        for (int j =0; j<i; j++)
        {
            cout <<" ";
        }
       
        for(int j=0;j< 2*N -(2*i +1);j++){
            
            cout<<"*";
        }
        
         for (int j =0; j<i; j++)
        {
            cout <<" ";
        }
        
        cout << endl;
    }
}

int main()
{   
    int N = 5;

    pattern8(N);

    return 0;
}
