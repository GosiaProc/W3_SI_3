#include<iostream>
#include<string>
#include<typeinfo>

char table[26][26] = {
{'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'},
{'B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','A'},
{'C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','A','B'},
{'D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','A','B','C'},
{'E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','A','B','C','D'},
{'F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','A','B','C','D','E'},
{'G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','A','B','C','D','E','F'},
{'H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','A','B','C','D','E','F','G'},
{'I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','A','B','C','D','E','F','G','H'},
{'J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','A','B','C','D','E','F','G','H','I'},
{'K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','A','B','C','D','E','F','G','H','I','J'},
{'L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','A','B','C','D','E','F','G','H','I','J','K'},
{'M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','A','B','C','D','E','F','G','H','I','J','K','L'},
{'N','O','P','Q','R','S','T','U','V','W','X','Y','Z','A','B','C','D','E','F','G','H','I','J','K','L','M'},
{'O','P','Q','R','S','T','U','V','W','X','Y','Z','A','B','C','D','E','F','G','H','I','J','K','L','M','N'},
{'P','Q','R','S','T','U','V','W','X','Y','Z','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O'},
{'Q','R','S','T','U','V','W','X','Y','Z','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P'},
{'R','S','T','U','V','W','X','Y','Z','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q'},
{'S','T','U','V','W','X','Y','Z','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R'},
{'T','U','V','W','X','Y','Z','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S'},
{'U','V','W','X','Y','Z','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T'},
{'V','W','X','Y','Z','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U'},
{'W','X','Y','Z','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V'},
{'X','Y','Z','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W'},
{'Y','Z','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X'},
{'Z','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y'}
};
/*
int foundIndexX();
int foundIndexY();
*/
int main(){

	std::string plaintext = "GEEKSFORGEEKS";
	std::string keyword = "AYUSH";
	//ABD
	
	std::string chipertext = plaintext;
	/*
	std::cout << "Enter text:";
	std::cin >> plaintext;
	std::cout << "Enter keyword:";
	std::cin >> keyword;
	*/
	

	//FUNKCJA POKAZUJE KLUCZ DO SZYFROWANIA
std::string key = "";
	for (int i = 0; i < plaintext.length(); i++)
	{
		key.push_back(keyword[i % keyword.length()]);
		std::cout << key[i];
	}

	for (int j = 0; j < plaintext.length(); j++)
	{
		int index = plaintext[j] - 'A';
		int keyindex = key[j] - 'A';
		std::cout << "INDEX:" << index << "\n";

		std::cout << "KEYWORD:" << keyindex << "\n";
		
		chipertext[j] = table[index][keyindex];
	}
	std::cout << chipertext;
	/*
	

	for (int i = 0; i < plaintext.length(); i++)
	{
		
		for (int k = 0; k <= 25; k++)
		{
			if (key[i] == table[0][k])
				std::cout << k << "\n" << "\n" << "\n";
		}
	}
	
	for (int i = 0; i < plaintext.length(); i++)
	{
	//	table[foundIndexX][foundIndexY] = chipertext[i];
	}

		

		*/
	return 0;
}

/*
//FUNKCJA PRZYPISUJĄCA LITERZE Z PODANEGO SŁOWA INDEKS x
int foundIndexX() {

}
	

//FUNKCJA PRZYPISUJĄCA LITERZE Z PODANEGO SŁOWA INDEKS y
int foundIndexY() {

}
*/