// Palindromo.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include "pch.h"
#include <iostream>

bool IsAlmostpalindrome(std::string word) {

	int trocas = 0;

	for (int i = 0, j = word.length(); i != j; i++, j--) {
		if (word[i] != word[j - 1])
		{
			trocas++;
		}
	}
	if (trocas == 0) {
		return true;
	}
	if (trocas == 1) {
		return true;
	}
	return false;
}

int main()
{
    std::cout << IsAlmostpalindrome("abccfg") << "\n";
}

