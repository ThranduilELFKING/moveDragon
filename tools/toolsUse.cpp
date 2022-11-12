#include "toolsUse.h"

bool MapAdd(map<string, string> &sourceMap, map<string,string> addMap)
{
	map<string,string>::iterator it = addMap.begin();
	for(; it != addMap.end(); ++it)
		sourceMap[it->first] = it->second;

	return true;	
}

long long GetCurrentTime()
{
   struct timeval tv;  
   gettimeofday(&tv,NULL);  
   return (long long)tv.tv_sec * 1000 + tv.tv_usec / 1000; 
}


string RemoveAllSign(string str,string sign)
{
    int str_len = sign.length();
    string tmp_str = str;
    int begin = 0;
    begin = tmp_str.find(sign,begin);
    while(begin != -1)
    {
        tmp_str.replace(begin,str_len,"");
        begin = tmp_str.find(sign,begin);
    }
    return tmp_str;
}

string ReplaceCharacter(char * src_char,char old_char,char new_char)
{
    char * head=src_char;
    while(*src_char!='\0')
    {
        if(*src_char==old_char) *src_char=new_char;
        src_char++;
    }
    string stmp = head;
    return stmp;
}

vector<string> split_string(string str_content,string mark)
{
    string::size_type pos;
    vector<string> result;
    result.clear();
    str_content += mark;
    int size = str_content.size();
    string tmpStr = "";
    for(int i=0; i<size; i++)
    {
        pos = str_content.find(mark,i);
        if(pos<size)
        {
            tmpStr = str_content.substr(i,pos-i);
            result.push_back(tmpStr);
            i = pos+mark.size()-1;
        }
    }
    return result;
}

map<int, string> split_string_order(string str_content,string mark)
{
    string::size_type pos;
    map<int, string> result;
    result.clear();
    str_content += mark;
    int size = str_content.size();
    string tmpStr = "";
    int icount = 0;
    for(int i=0; i<size; i++)
    {
        pos = str_content.find(mark,i);
        if(pos<size)
        {
            tmpStr = str_content.substr(i,pos-i);
            result[icount] = tmpStr;
            icount++;
            i = pos+mark.size()-1;
        }
    }
    return result;    
}

string get_file_content(string file_path)
{
    ifstream in(file_path.c_str());
    string line_content = "";
    string str_ret = "";
    if(in)
    {
        while(getline(in,line_content))
        {
            if(line_content != "")
            {
                str_ret += line_content;
            }
        }
    }
    else
    {
        printf("no such file exist!\n");
    }
    in.close();
    return str_ret;
}

string split_file_name (string filePathName)
{
  //std::cout << "Splitting: " << str << '\n';
  size_t found = filePathName.find_last_of("/\\");
  //std::cout << " path: " << str.substr(0,found) << '\n';
  string fileName = filePathName.substr(found+1);

  return fileName;
}

map<int, string> get_file_content_by_line(string file_path, int& max_line_size)
{
    map<int, string> map_ret;
    map_ret.clear();
    ifstream in(file_path.c_str());
    string line_content = "";
    max_line_size = 0;
    int tmp_size = 0;
    if(in)
    {
        int i = 0;
        while(getline(in,line_content))
        {
            map_ret[i] = line_content;  
            ++i;

            tmp_size = line_content.length();
            if(tmp_size > max_line_size)
                max_line_size = tmp_size;
        }
    }
    else
    {
        printf("no such file exist!\n");
    }
    in.close();
    return map_ret;
}

string strrev(string origin)
{
    string ret = origin;
    reverse(ret.begin(), ret.end());
    return ret;
    
    // const char* str = origin.c_str();
    // const size_t length = strlen(str);//求字符长度
    // char *temp = new char[length];//新建一个等长度的字符数组
    // strcpy(temp,str);//字符串拷贝
    // for (size_t i = 0; i <= length/2; ++i)//对字符数组中的字符反转,循环执行条件为标识小于或等于字符长度一半
    // {
    //     char c = temp[i];
    //     temp[i] = temp[length - i -1];
    //     temp[length - i -1] = c;
    // }

    // string str_ret = temp;
    // delete temp;
    // return str_ret;//返回反转后的字符
}

bool write_files(string file_path,vector<string> file_content)
{
    if(!file_content.empty())
    {
        FILE *file ;
        int length = 0 ;

        //打开文件
        if((file = fopen(file_path.c_str() , "w+")) == NULL)
        {
            perror("open") ;
            fclose(file) ; //进行文件的关闭
            return false;
        }

        int isize = file_content.size();
        for(int i=0; i<isize; i++)
        {
            string state = file_content[i] + "\n";
            length = strlen(state.c_str()) ;
            fwrite(state.c_str() , 1 , length , file ) ; //写入语句
        }

        fclose(file) ; //进行文件的关闭
    }
    else
    {
        //此时，即使生成文件，也是空，没有内容，无效
        return false;
    }

    return true;
}