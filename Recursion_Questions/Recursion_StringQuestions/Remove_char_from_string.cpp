#include <iostream>
#include <cstring>
using namespace std;

int remove(char *str, int len, int pos, int count)
{


  if (pos == len - 1)
  {
    return count;
  }

  if (str[pos] == 'a')
  {
    pos++;
  }

  else
  {
    count++;
    pos++;

  }
  
    str[count] = str[pos];
  // cout << str[pos];

  return remove(str, len, pos, count);
}
int main()
{

  char str[] = "aaaaaaadddd";

  int len = strlen(str);
  cout << len;
  int coutn = remove(str, strlen(str), 0, 0);
  cout << endl<< coutn;

  for (int i = 0; i <  coutn+1; i++)
  {

    cout << str[i] ;
  }
  return 0;
}