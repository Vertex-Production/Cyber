#pragma once
#include "../global.h"
#include <vector>

struct Function;
struct Struct;
struct Class;
struct Namespace;

struct RawFunction {
	vector<vector<wstring> *> lines;
};
struct RawVariable {
	vector<wstring> value;
};
struct RawStruct {
	wstring name;
	Type type;
	vector<RawVariable*> variables;
	vector<RawFunction*> functions;
};
struct RawNamespace {
	vector<RawStruct*> structures;
	vector<RawFunction*> functions;
};
struct RawCode {
	vector<wstring> usings, imports;
	vector<RawNamespace *> namespaces;
};
