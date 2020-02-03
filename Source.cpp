#include <iostream>
#include "MorseCodeConverter.h"

int main() {

	auto converter = std::make_unique<MorseCodeConverter>();
	std::string morsecode{ ".... . ._.. ._.. ___ _._.__" };
	std::string text{ "Panzerkampfwagen VI" };

	std::string decoded = converter->CodeToText(morsecode);
	std::cout << "morsecode:\t" << morsecode << "\ndecoded:\t" << decoded;

	std::cout << "\n\n";

	std::string coded = converter->TextToCode(text);
	std::cout << "text:\t\t" << text << "\nmorsecoded:\t" << coded;

	std::cout << '\n';
	system("pause");
	return 0;
}