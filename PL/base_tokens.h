#pragma once
#include "../global.h"

const wstring *base_tokens_str = new wstring[]{
	L"if", L"else", L"elif", L"while", L"for", L"switch",
	L"break", L"continue", L"return", L"goto", L"case", L"do",

	L"public", L"private", L"protected", L"internal", L"virtual", L"abstract",
	L"const", L"readonly", L"override", L"static",
	L"struct", L"class", L"interface", L"enum", L"namespace",

	L"using", L"import",
	L"base", L"default", L"this", L"void",
	L"lock", L"inline", L"async", L"await", L"new", L"delete",

	L"bool", L"char", L"string", L"true", L"false", L"null", L"object",
	L"byte", L"sbyte", L"short", L"ushort", L"int", L"uint", L"long", L"ulong",
	L"float", L"double",
	L"",
};
int findStringInArray(const wstring &target) {
	for (size_t i = 0; base_tokens_str[i].size() > 0; i++)
		if (base_tokens_str[i] == target) return i;
	return -1;
}
namespace base_operation {
	int if_ = findStringInArray(wstring(L"if"));
	int else_ = findStringInArray(wstring(L"else"));
	int elif_ = findStringInArray(wstring(L"elif"));
	int while_ = findStringInArray(wstring(L"while"));
	int for_ = findStringInArray(wstring(L"for"));
	int switch_ = findStringInArray(wstring(L"switch"));

	int break_ = findStringInArray(wstring(L"break"));
	int continue_ = findStringInArray(wstring(L"continue"));
	int return_ = findStringInArray(wstring(L"return"));
	int goto_ = findStringInArray(wstring(L"goto"));
	int case_ = findStringInArray(wstring(L"case"));
	int do_ = findStringInArray(wstring(L"do"));
}
namespace base_access {
	int public_ = findStringInArray(wstring(L"public"));
	int private_ = findStringInArray(wstring(L"private"));
	int protected_ = findStringInArray(wstring(L"protected"));
	int internal_ = findStringInArray(wstring(L"internal"));
	int virtual_ = findStringInArray(wstring(L"virtual"));
	int abstract_ = findStringInArray(wstring(L"abstract"));

	int const_ = findStringInArray(wstring(L"const"));
	int readonly_ = findStringInArray(wstring(L"readonly"));
	int override_ = findStringInArray(wstring(L"override"));
	int static_ = findStringInArray(wstring(L"static"));
}
namespace base_structure {
	int struct_ = findStringInArray(wstring(L"struct"));
	int class_ = findStringInArray(wstring(L"class"));
	int interface_ = findStringInArray(wstring(L"interface"));
	int enum_ = findStringInArray(wstring(L"enum"));
	int namespace_ = findStringInArray(wstring(L"namespace"));
}
namespace base_systems {
	int using_ = findStringInArray(wstring(L"using"));
	int import_ = findStringInArray(wstring(L"import"));
}
namespace base_other {
	int base_ = findStringInArray(wstring(L"base"));
	int default_ = findStringInArray(wstring(L"default"));
	int this_ = findStringInArray(wstring(L"this"));
	int void_ = findStringInArray(wstring(L"void"));

	int lock_ = findStringInArray(wstring(L"lock"));
	int inline_ = findStringInArray(wstring(L"inline"));
	int async_ = findStringInArray(wstring(L"async"));
	int await_ = findStringInArray(wstring(L"await"));

	int new_ = findStringInArray(wstring(L"new"));
	int delete_ = findStringInArray(wstring(L"delete"));
}
namespace base_type {
	int true_ = findStringInArray(wstring(L"true"));
	int false_ = findStringInArray(wstring(L"false"));
	int null_ = findStringInArray(wstring(L"null"));
	int object_ = findStringInArray(wstring(L"object"));

	int bool_ = findStringInArray(wstring(L"bool"));
	int char_ = findStringInArray(wstring(L"char"));
	int string_ = findStringInArray(wstring(L"string"));

	int byte_ = findStringInArray(wstring(L"byte"));
	int sbyte_ = findStringInArray(wstring(L"sbyte"));
	int short_ = findStringInArray(wstring(L"short"));
	int ushort_ = findStringInArray(wstring(L"ushort"));
	int int_ = findStringInArray(wstring(L"int"));
	int uint_ = findStringInArray(wstring(L"uint"));
	int long_ = findStringInArray(wstring(L"long"));
	int ulong_ = findStringInArray(wstring(L"ulong"));

	int float_ = findStringInArray(wstring(L"float"));
	int double_ = findStringInArray(wstring(L"double"));
}
