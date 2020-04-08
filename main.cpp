#include <iostream>
#include <regex>
#include <fstream>

using namespace std;

class kod_pocztowy
{

       ifstream pl1;
       ofstream pl2;

  public:

void otworz()
{
    pl1.open("pl1.txt");
    pl2.open("pl2.txt");
}





void sprawdz()
{
	bool czy_jest = true;
	string word;
	 regex kod("[0-9]{2}-[0-9]{3}");
	 while(!pl1.eof())
	 {
	 	pl1>>word;
	 	if(regex_match(word, kod))
	 	czy_jest = true;
	 	else 
	 	czy_jest = false;
	 
	 
	 	 if(czy_jest == true)
	 		pl2<<word<<" to kod pocztowy"<<endl;
	 	else
	 	pl2<<word<<" to nie jest kod pocztowy"<<endl;
}		

	

}




void zamknij()
{
    pl1.close();
    pl2.close();
}

};
int main()
{

kod_pocztowy k1;
k1.otworz();
k1.sprawdz();
k1.zamknij();

    return 0;
}

