#include <iostream>
#include <map>
#include <string>
#include "toolsUse.h"

using namespace std;


map<int, string> draw_picture(const string& picture_addr, int& max_pic_len);
// int my_mvaddstr(int y, int x, char *str);

// int move_dragon(int col);

//1
//        
//-----------------
//      move
//     <<-----
bool single_move_from_right_to_left(string pic_path, int move_speed = 30000);
int move_picture_r2l(int col, map<int, string>picture_content, bool from_top_row = false);

//2
//        
//-----------------
//      move
//     ----->>
bool single_move_from_left_to_right(string pic_path, int move_speed = 30000);
int move_picture_l2r(int col, map<int, string>picture_content);

//3
//         | static
//-----------------
//      move
//     <<-----
bool have_a_house_and_others(string static_right_top, string pic_path, int move_speed = 30000);


//4
// static| 
//-----------------
//      move
//     <<-----
bool have_a_tree_and_others(string static_left_top, string pic_path, int move_speed = 30000);

//5
// static| 
//-----------------
//      move
//     ----->>
bool static_and_move_to_right(string static_left_top, string pic_path, int move_speed = 30000, int move_start_col = 0);

//       | static
//-----------------
//      move
//     ----->>
bool right_static_and_move_to_right(string static_right_top, string pic_path, int move_speed = 30000);



//6
//   move
//   ----->>
//-----------------
//      move
//     ----->>
bool move_and_move_to_right(string move_left_top, string pic_path, int move_speed = 30000);

//6
//   move
//   <<-----
//-----------------
//      move
//     <<-----
bool move_and_move_to_left(string move_left_top, string pic_path, int move_speed = 30000);


//7
// static| 
//-----------------
//      
//     
bool static_and_top(string pic_path, int static_time = 3);

//int move_pic_dragon(int col);
string get_substr(const string& origin, int len, bool start_left);


//////////////picturs//////////////////
map<int,string> a_dragon;
int dragon_size = 0;
int max_dragon_len = 0;

map<int, string> a_koala;
int max_koala_len = 0;


int m_ROWS,m_COLS;
int m_dy = 0;

const int FLY = 1;
