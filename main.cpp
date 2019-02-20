#include <iostream>
using std::cout;
using std::cin;
using std::endl;

void sortDescending(int&,int&,int&);
void swap(int&,int&);

/***********
 * main function.
 * Takes 3 numbers as input and sorts them and then displays them.
 */
int main()
{
  int numA, numB, numC;
  cout<<"Enter any three numbers: ";
  cin>>numA>>numB>>numC;

  sortDescending(numA, numB, numC);
  
  cout<<"From greatest to least, they are: ";
  cout<<numA<<","<<numB<<","<<numC<<endl;
  return 0;
}

/***********
 * Sorts the numbers from greatest to smallest.
 **********/
void sortDescending(int &first, int &second, int &third)
{
  if( first < third )
  {
    swap(first,third);
  }
  if( first < second )
  {
    swap(first,second);
  }
  if( second < third )
  {
    swap(second,third);
  }
}

/***********
 * Swaps numbers.
 * Sets first number to temp and them replaces first with the second and then sets
 * the second equal to temp.
 **********/
void swap(int &first, int &second)
{
  int temp = first;
  first = second;
  second = temp;
}
