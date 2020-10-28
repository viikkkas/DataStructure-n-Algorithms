#include<iostream>
using namespace std;

void convert(string s, int numRows)
{
  if(numRows==1)
  {
    cout<<s;
    return;
  }
  bool down = true;
  int row = 0;
  string res[numRows];
  int size = s.length();
  for(int i=0; i<size; i++)
  {
    res[row].push_back(s[i]);
    
    if(row == numRows-1)
      down = false;
    else if(row==0)
      down = true;
    
    down ? row++ : row--;
  }
  
  for(int i=0; i<numRows; i++)
    cout<<res[i];
}

int main()
{
  string s;
  cin>>s;
  int numRows;
  cin>>numRows;
  convert(s,numRows);
  return 0;
}
