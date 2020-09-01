#pragma once

class NestedClass1
{
public:
	class NestedClass2 {};
};

namespace NestedNS1
{
	class ClassInsideNS {};
	void FunctionInsideNS();

	namespace NestedNS2
	{
		class ClassInsideNestedNS2 {};
	}
}