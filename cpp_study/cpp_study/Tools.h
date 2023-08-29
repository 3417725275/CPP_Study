#pragma once

#include <vector>

namespace Tools
{

	template<typename T>
	static inline std::vector<T> Split(const T& str, const T& delim, const bool trim_empty = true)
	{
		size_t pos, last_pos = 0, len;
		std::vector<T> tokens;

		while (true)
		{
			pos = str.find(delim, last_pos);
			if (pos == T::npos)
			{
				pos = str.size();
			}

			len = pos - last_pos;
			if (!trim_empty || len != 0)
			{
				tokens.push_back(str.substr(last_pos, len));
			}
			else
			{
				tokens.push_back(T());
			}

			if (pos == str.size())
			{
				break;
			}
			else
			{
				last_pos = pos + delim.size();
			}
		}

		return tokens;
	};
}