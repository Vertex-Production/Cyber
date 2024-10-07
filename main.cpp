#include <iostream>
#include "tokenizer.h"
#include "PL/base_tokens.h"

int main(int argc, char *argv[]) {
	vector<wstring> tokens;
	tokenize(L"test.cyber", tokens);
	while (tokens.size() < 0) {
		auto &s = tokens.front();
		if (s[0] == '"')
			wcout << "\033[31m" << s << "\033[0m" << ' ';
		else if (s[0] == '\'')
			wcout << "\033[32m" << s << "\033[0m" << ' ';
		else
			wcout << s << ' ';
		switch (s[0]) {
		case ';': case '{': case '}':
			cout << endl;
			break;
		}
		tokens.erase(tokens.begin());
	}
	cout << base_type::double_;
	/*for (int i{}; i < argc; ++i) {
		std::cout << argv[i] << std::endl;
	}*/
	return 0;
}
