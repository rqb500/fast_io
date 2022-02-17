#include<string_view>
#include<fast_io.h>
#include<fast_io_device.h>
#include<fast_io_driver/timer.h>
#include<vector>

int main()
{
	constexpr std::size_t N(10000000);
	std::size_t lines{};
	{
		fast_io::timer t(u8"input");
		fast_io::u8ibuf_file ibf(u8"ibuf_white_hole_engine.txt");
		for(std::u8string_view line:line_scanner(ibf))
		{
			++lines;
		}
	}
	println(lines);
}
