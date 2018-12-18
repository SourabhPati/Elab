#include <iostream>
using namespace std;

void swap(char [],int,int);
void reverse(char []);
int getLength(char []);
int len;

int main()
{
	char word[1000];
  	cin.getline(word,1000);
  	len = getLength(word);
  	reverse(word);
  	cout<<word;
	return 0;
}

void reverse(char word[])
{
  for(int i=0,j=len-1;i<len/2;++i,--j)
    swap(word,i,j);
}

int getLength(char ar[])
{
  int len=0;
  while(ar[len] != '\0')
    ++len;
  return len;    
}

void swap(char str[],int i,int j)
{
  char temp = str[i];
  str[i] = str[j];
  str[j] = temp;
}