#ifndef TOOLSUSE_H_
#define TOOLSUSE_H_

#include <algorithm>
#include <cstring>
#include <fstream>
#include <iostream>
#include <map>
#include <sstream>
#include <string>
#include <sys/time.h>
#include <vector>


using namespace std;

template <class T>
bool PrintTMap(T paramVal, bool need_first)
{
    if(paramVal.empty())
        return false;

    typename T::iterator it = paramVal.begin();
    for(; it != paramVal.end(); ++it)
    {
        if(need_first)
            cout << it->first <<" : "<< it->second <<endl;
        else
            cout << it->second << endl;
    }

    return true;    
}

template <class T>
bool PrintTVec(vector<T> paramVal)
{
    if(paramVal.empty())
        return false;

    typename vector<T>::iterator it = paramVal.begin();
    for(; it != paramVal.end(); ++it)
    {
        cout << *it <<endl;
    }

    return true; 	
}

template <class T>
string AnyTransStr(T num)
{
    stringstream ss;
    string strTmp = "";
    ss << num;
    ss >> strTmp;
    return strTmp;  
}


template <class T>
bool StrTransAny(const string& strNum, T& tNum)
{
    stringstream ss;
    ss << strNum;
    ss >> tNum;
    return true;  
}


template <class T>
bool vector_find(vector<T>& origin, T& name)
{
    typename vector<T>::iterator it = origin.begin();
    T tmp = "";
    for(; it != origin.end(); ++it)
    {
        tmp = *it;
        if(tmp == name)
            return true;
    }
    return false;
}


bool MapAdd(map<string, string> &sourceMap, map<string,string> addMap);
long long GetCurrentTime();


string RemoveAllSign(string str,string sign);
string ReplaceCharacter(char * src_char,char old_char,char new_char);

//vector里面元素不是根据插入的元素的顺序来排列的
vector<string> split_string(string str_content,string mark);
//按分隔顺序缓存到容器
map<int, string> split_string_order(string str_content,string mark);
string get_file_content(string file_path);
string split_file_name (string filePathName);

/**
 * @brief: 逐行获取文件内容
 * @return: 获取文件里的内容，逐行缓存到vector里
 * */
map<int, string> get_file_content_by_line(string file_path, int& max_line_size);


/**
 * @brief: 写文件操作
 * @parameter: file_path待写入文件名
 * @parameter: file_content待写入文件内容
 * @return:写入成功返回tur;否则返回false
 * */
bool write_files(string file_path,vector<string> file_content);

/**
 * @brief: 字符串反转
 */
string strrev(string origin);

#endif /* TOOLSUSE_H_ */