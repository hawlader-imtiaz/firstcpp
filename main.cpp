#include <iostream>
#include <cmath>

using namespace std;

int main()
{
   string color,PluralNoun,SportsPerson;

   cout << "enter a color:  ";
   getline (cin,color);
   cout << "enter a pluralNoun: ";
   getline (cin,PluralNoun);
   cout << "enter a SportsPerson: ";
   getline (cin,SportsPerson);

   cout <<" Roses are " << color << endl;
   cout << PluralNoun << " are blue " << endl;
   cout << "I love " << SportsPerson << endl;

    return 0;
}
