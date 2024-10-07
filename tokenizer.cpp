#include "tokenizer.h"
#include <fstream>

void tokenize(const wstring &filename, vector<wstring> &tokens) {
	wifstream file(filename);

	wstring currentToken;
	wstring line;
	bool readString = false, readChar = false, endReadChar = false, readSlash = false, lastEndCode = false;
	while (getline(file, line)) {
		for (char ch : line) {
			if (readString) {
				if (readSlash) {
					if (ch == '\\') {
						currentToken += '\\';
						readSlash = false;
						continue;
					}
					else if (ch == '"') {
						currentToken += '"';
						readSlash = false;
						continue;
					}
				}
				else {
					if (ch == '"') {
						currentToken += '"';
						tokens.push_back(currentToken);
						currentToken.clear();
						readString = false;
						continue;
					}
					else if (ch == '\\') {
						currentToken += '\\';
						readSlash = true;
						continue;
					}
				}
				currentToken += ch;
				continue;
			}
			else if (readChar) {
				if (endReadChar) {
					readChar = false;
					currentToken += '\'';
					tokens.push_back(currentToken);
					currentToken.clear();
					continue;
				}
				else if (readSlash) {
					if (ch == '\\') {
						currentToken += '\\';
						readSlash = false;
						endReadChar = true;
						continue;
					}
					else if (ch == '\'') {
						currentToken += '\'';
						readSlash = false;
						endReadChar = true;
						continue;
					}
				}
				else if (ch == '\\') {
					currentToken += '\\';
					readSlash = true;
					endReadChar = true;
					continue;
				}
				currentToken += ch;
				endReadChar = true;
				continue;
			}
			else if (ch == '"') {
				readString = true;
				currentToken += ch;
				continue;
			}
			else if (ch == '\'') {
				readChar = true;
				currentToken += ch;
				continue;
			}
			else if (std::isalpha(ch) || std::isdigit(ch) || ch == '_') {
				currentToken += ch;
				continue;
			}
			else {
				if (!currentToken.empty()) {
					tokens.push_back(currentToken);
					currentToken.clear();
				}
				if (!std::isspace(ch)) {
					if (ch == ';') {
						if (lastEndCode) continue;
						lastEndCode = true;
					}
					else
						lastEndCode = false;
					tokens.push_back(wstring(1, ch));
					continue;
				}
			}
		}
		if (!currentToken.empty()) {
			tokens.push_back(currentToken);
		}
	}
}
