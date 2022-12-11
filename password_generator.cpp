/* create a functions for lowercase,
 * uppercase,numbers,symbol
 *
 * in lowercase function create an arrray 
 * which stores all the letters from a - z
 * and using rand get random letters from
 * them
 *
 * use the same function for uppercase,
 * numbers and symbols.
 *
 **/

#include <iostream>
#include <cstdlib>
#include <string>
#include <ctime>

using namespace std;


int randoma,randomb,randomc,randomd,randome,randomf,randomg,randomh,randomi,randomj,randomk,randoml;


char a,b,c,d,e,f,j,k,l;
int g,h,i;

class Password
{
  public:
void lowercase()
{
  char lower[] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
  

   a = lower[randoma];
   b = lower[randomb];
   c = lower[randomc];
}


void uppercase()
{
  
  char upper[] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};

   d = upper[randomd];
   e = upper[randome];
   f = upper[randomf];

}

void number()
{

   g = randomg;
   h = randomh;
   i = randomi;

}

void symbols()
{
 char symbols[] = {'@','#','$','&','-','+','/','!'};

 j = symbols[randomj];
  k = symbols[randomk];
  l = symbols[randoml];
}



};
int main()
{
srand(time(0));

//lowercase
randoma = (rand() % 25);
randomb = (rand() % 25);
randomc = (rand() % 25);
//uppercase
randomd = (rand() % 25);
randome = (rand() % 25);
randomf = (rand() % 25);
//numbers
randomg = 1 + (rand() % 9);
randomh = 1 + (rand() % 9);
randomi = 1 + (rand() % 9);
//symbols
randomj = (rand() % 7);
randomk = (rand() % 7);
randoml = (rand() % 7);

cout<<"It is a password generator";
Password pass;
pass.lowercase();
pass.uppercase();
pass.number();
pass.symbols();

cout<<"\nThe generated password is : "<<a<<b<<c<<d<<e<<f<<g<<h<<i<<j<<k<<l;




}










