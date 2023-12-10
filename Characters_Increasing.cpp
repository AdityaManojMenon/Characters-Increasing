//working file
#include <iostream>

using std :: cin;
using std :: cout;
using std :: endl;
using std :: noskipws;

int main()
{
  char ch_before,ch_current;
  
  ch_before = '\0';


  while(cin>>noskipws>>ch_current)
  {
    if(ch_before == '\0')
    {
      cout<<ch_current;
      
    }
    else
    {
      if(ch_current == '\n')
      {
        cout<<ch_current;
      }
      else
      {
        if(ch_current > ch_before)
        {
          cout<<ch_current;
        }
        else
        {
          cout<<"_";
        } 
      }
        
    }
    
    ch_before = ch_current;
  }
  return 0;
}
