#include "toolsUse.h"

#include <cstring>
#include <map>
#include <string>


using namespace std;


int main()
{
	int max_pic_len = 0;
	//daemon
	map<int,string> file_content = get_file_content_by_line("meow.txt", max_pic_len);

	int isize = file_content.size();
	vector<string> reverse_str;
	reverse_str.clear();
	string str_rev = "";
	string str_line = "";
	for(int i = 0; i < isize ; ++i)
	{
		str_line = file_content[i];
		str_rev = strrev(str_line);
		reverse_str.push_back(str_rev);
	}

	write_files("reverse_meow.txt", reverse_str);

	return 0;
}