#pragma once

namespace emu
{
	using Int8  = signed   char;
	using UInt8 = unsigned char;

	using Int16  = signed   short;
	using UInt16 = unsigned short;

	using Int32  = signed   int;
	using UInt32 = unsigned int;

#if defined(_MSC_VER)
	using Int64  = signed   __int64;
	using UInt64 = unsigned __int64;
#else
	using Int64  = signed   long long;
	using UInt64 = unsigned long long;
#endif
}
