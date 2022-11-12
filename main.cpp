#include "picture.h"

#include <curses.h>
#include <signal.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
	//max_dragon_len = 0;
	// cout << "========================\n";
	// a_dragon.clear();
	// a_dragon = draw_picture("dragon.txt", max_dragon_len);
	// PrintTMap(a_dragon, false);
	// cout << "========================\n";
	// sleep(3);

	//curses模式初始化方法
	initscr();
	//忽略键盘中断
    signal(SIGINT, SIG_IGN);
    //关闭字符回显
    noecho();
    //设置光标不可见  0 不可见；1 普通模式；2 可见
    curs_set(0);
    //终端设置为非阻塞式
    nodelay(stdscr, TRUE);
    //不使用光标，节省移动光标的时间
    leaveok(stdscr, TRUE);
    //不允许窗口滚屏
    scrollok(stdscr, FALSE);

    //sleep(3);

    
    getmaxyx(stdscr,m_ROWS,m_COLS);

    //dragon
	m_dy = 1;
	single_move_from_right_to_left("dragon.txt", 20000);


	
	// single_move_from_left_to_right("stimpy_cunming.txt", 10000);

	//feng mian 
	//single_move_from_right_to_left("the_brave_sword.txt", 10000);

	// 勇者打着酒嗝离开酒馆
	// 今天也保护村庄安全
	// 不缺乏力量或者是正义感
	// 但是我有点懒
	have_a_house_and_others("house.txt", "koala.txt", 20000);
	have_a_house_and_others("house_small.txt", "the_brave_drunk.txt", 20000);
	clear();
	have_a_tree_and_others("tree.txt", "the_brave_drunk.txt", 20000);


	// 听说西边出现一头凶猛野兽
	// 我以身作则率领大家不去西边
	have_a_tree_and_others("tree.txt", "meow.txt", 30000);
	static_and_move_to_right("tree.txt", "the_brave_sword_run.txt", 10000);
	move_and_move_to_right("the_brave_sword_tiger.txt", "vader-koala_run.txt", 20000);
	clear();
	

	// 村中的无赖每天欺负他的妻子
	// 别人的家事不方便管
	static_and_top("woman_hit_man.txt");
	static_and_move_to_right("woman_hit_man.txt", "the_brave_other_affairs.txt", 30000);
	clear();

	// 我的宝剑十年来未尝一败
	// 就是太久没用有点锈迹斑斑
	// 我愿随时为胜利献出生命
	// 不过也不是非要今天
	// 勇者伸个懒腰到处挠挠
	// 今天家乡也安稳平凡
	// 不害怕危险也不害怕挑战
	// 但是最怕麻烦
	have_a_tree_and_others("tree.txt", "the_brave_sword.txt", 30000);
	have_a_house_and_others("tree.txt", "the_brave_sword.txt", 30000);
	right_static_and_move_to_right("tree.txt", "reverse_the_brave_sword.txt", 30000);
	static_and_move_to_right("tree.txt", "reverse_the_brave_sword.txt", 30000);
	clear();

	// 少年几天前出去冒险失去音信
	// 我及时出现提醒村民注意安全
	move_and_move_to_left("flaming-sheep.txt", "cheese_cunming.txt", 20000);
	clear();
	have_a_house_and_others("tree.txt", "cheese_cunming.txt", 20000);
	clear();
	move_and_move_to_right("the_brave_lost.txt", "vader-koala_run.txt", 30000);
	clear();

	// 听说巨龙出现带走了公主又消失不见
	// 邻村的事情与我无关
	single_move_from_right_to_left("dragon_find.txt", 20000);
	have_a_tree_and_others("hellokity_princess.txt", "dragon_find.txt", 30000);
	clear();
	have_a_tree_and_others("tree.txt", "dragon-and-princess.txt", 30000);
	single_move_from_left_to_right("the_brave_other_affairs.txt", 10000);
	clear();

	// 我要将我的信念贯彻到底
	// 永不放弃我以退为进的勇敢
	right_static_and_move_to_right("tree.txt", "the_brave_other_affairs.txt", 20000);
	static_and_move_to_right("tree.txt", "the_brave_sword.txt", 20000);
	clear();

	// 我们向美好未来执着前进
	// 明天出发也为时不晚
	have_a_tree_and_others("tree.txt", "the_brave_sword.txt", 20000);
	have_a_house_and_others("tree.txt", "the_brave_sword.txt", 20000);
	clear();

	// 我的宝剑十年来未尝一败
	// 就是太久没用有点锈迹斑斑
	move_and_move_to_left("the_brave_sword.txt", "sheep.txt", 30000);
	move_and_move_to_right("reverse_the_brave_sword.txt", "bong.txt", 30000);
	clear();

	// 我愿随时为胜利献出生命
	// 不过也不是非要今天
	have_a_tree_and_others("bud-frogs.txt", "the_brave_sword.txt", 20000);
	clear();
	have_a_house_and_others("bud-frogs.txt", "the_brave_sword.txt", 20000);
	static_and_top("the_brave_snake.txt", 1);
	clear();
	static_and_move_to_right("elephant-in-snake.txt", "reverse_the_brave_sword.txt", 10000);
	clear();

	// 我要将我的信念贯彻到底
	// 永不放弃我以退为进的勇敢
	move_and_move_to_left("moose.txt", "the_brave_sword.txt", 20000);
	clear();
	static_and_top("the_brave_snake.txt", 1);
	clear();
	static_and_move_to_right("elephant-in-snake.txt", "reverse_the_brave_sword.txt", 10000);
	clear();

	// 我们向美好未来执着前进
	// 明天出发也为时不晚
	move_and_move_to_left("small.txt", "the_brave_sword.txt", 30000);
	have_a_tree_and_others("house_small.txt", "the_brave_sword.txt", 30000);
	clear();
	have_a_house_and_others("house_small.txt", "koala.txt", 20000);
	have_a_house_and_others("house_small.txt", "the_brave_drunk.txt", 20000);
	clear();


    mvcur(0, COLS - 1, LINES - 1, 0);
    endwin();

	return 0;
}

bool have_a_house_and_others(string static_right_top, string pic_path, int move_speed)
{
	int max_house_len = 0;
	int max_pic_len = 0;
	// map<int, string> a_house = draw_picture("house_small.txt", max_house_len);
	map<int, string> a_house = draw_picture(static_right_top, max_house_len);
	map<int, string> a_pic = draw_picture(pic_path, max_pic_len);
	m_dy = 1;
	int max_dy = m_COLS + max_pic_len + 1;

	string show_line = "";
	char* tmp_char = NULL;
	int house_size = a_house.size();
	int weight = COLS - max_house_len;


	for (int x = COLS - 1; ; --x)
	{
		for(int i =0 ; i < house_size ;++i)
		{
			show_line = a_house[i];
			tmp_char = NULL;
			tmp_char = const_cast<char*>(show_line.c_str());
			mvprintw(i, weight,"%s\n",tmp_char);
		}

		if (move_picture_r2l(x, a_pic) == ERR) 
			break;	

        getch();
        refresh();
        usleep(move_speed);
        m_dy ++;

        if(m_dy > max_dy)
        	break;
	}	

	return true;
}

bool have_a_tree_and_others(string static_left_top, string pic_path, int move_speed)
{
	int max_house_len = 0;
	int max_pic_len = 0;
	// map<int, string> a_house = draw_picture("tree.txt", max_house_len);
	map<int, string> a_house = draw_picture(static_left_top, max_house_len);
	map<int, string> a_pic = draw_picture(pic_path, max_pic_len);
	m_dy = 1;
	int max_dy = m_COLS + max_pic_len + 1;

	string show_line = "";
	char* tmp_char = NULL;
	int house_size = a_house.size();
	int weight = COLS - max_house_len;


	for (int x = COLS - 1; ; --x)
	{

		for(int i =0 ; i < house_size ;++i)
		{
			show_line = a_house[i];
			tmp_char = NULL;
			tmp_char = const_cast<char*>(show_line.c_str());
			mvprintw(i, 1,"%s\n",tmp_char);
		}


		if (move_picture_r2l(x, a_pic) == ERR) 
			break;	

        getch();
        refresh();
        usleep(move_speed);
        m_dy ++;

        if(m_dy > max_dy)
        	break;
	}	

	return true;
}

bool static_and_move_to_right(string static_left_top, string pic_path, int move_speed, int move_start_col)
{
	int max_house_len = 0;
	int max_pic_len = 0;
	// map<int, string> a_house = draw_picture("tree.txt", max_house_len);
	map<int, string> a_house = draw_picture(static_left_top, max_house_len);
	map<int, string> a_pic = draw_picture(pic_path, max_pic_len);
	int max_dy = m_COLS + max_pic_len + 1;

	string show_line = "";
	char* tmp_char = NULL;
	int house_size = a_house.size();
	int weight = COLS - max_house_len;


	// for (int x = 0; x < COLS ; ++x)
	for (int x = move_start_col; x < COLS ; ++x)
	{

		for(int i =0 ; i < house_size ;++i)
		{
			show_line = a_house[i];
			tmp_char = NULL;
			tmp_char = const_cast<char*>(show_line.c_str());
			mvprintw(i, 1,"%s\n",tmp_char);
		}


		if (move_picture_l2r(x, a_pic) == ERR) 
			break;	

        getch();
        refresh();
        usleep(move_speed);
	}	

	return true;

}

bool right_static_and_move_to_right(string static_right_top, string pic_path, int move_speed)
{
	int max_house_len = 0;
	int max_pic_len = 0;
	map<int, string> a_house = draw_picture(static_right_top, max_house_len);
	map<int, string> a_pic = draw_picture(pic_path, max_pic_len);
	int max_dy = m_COLS + max_pic_len + 1;

	string show_line = "";
	char* tmp_char = NULL;
	int house_size = a_house.size();
	int weight = COLS - max_house_len;


	for (int x = 0; x < COLS ; ++x)
	{

		for(int i =0 ; i < house_size ;++i)
		{
			show_line = a_house[i];
			tmp_char = NULL;
			tmp_char = const_cast<char*>(show_line.c_str());
			mvprintw(i, weight,"%s\n",tmp_char);
		}


		if (move_picture_l2r(x, a_pic) == ERR) 
			break;	

        getch();
        refresh();
        usleep(move_speed);
	}	

	return true;	
}

bool static_and_top(string pic_path, int static_time)
{
	int max_house_len = 0;
	map<int, string> a_house = draw_picture(pic_path, max_house_len);

	string show_line = "";
	char* tmp_char = NULL;
	int house_size = a_house.size();

	for(int i =0 ; i < house_size ;++i)
	{
		show_line = a_house[i];
		tmp_char = NULL;
		tmp_char = const_cast<char*>(show_line.c_str());
		mvprintw(i, 1,"%s\n",tmp_char);
	}

    getch();
    refresh();
    sleep(static_time);
	

	return true;
}

bool move_and_move_to_right(string move_left_top, string pic_path, int move_speed)
{
	int max_house_len = 0;
	int max_pic_len = 0;
	// map<int, string> a_house = draw_picture("tree.txt", max_house_len);
	map<int, string> a_house = draw_picture(move_left_top, max_house_len);
	map<int, string> a_pic = draw_picture(pic_path, max_pic_len);
	int max_dy = m_COLS + max_pic_len + 1;

	string tmp_line = "";
	string show_line = "";
	char* tmp_char = NULL;
	int house_size = a_house.size();
	int weight = COLS - max_house_len;
	int now_full_pos = 0; 

	for (int x = 0; x < COLS ; ++x)
	{

		now_full_pos = 0; 
		for(int i =0 ; i < house_size ;++i)
		{
			tmp_line = a_house[i];
			now_full_pos = tmp_line.size() + x;
			if(now_full_pos <= COLS)
				show_line = tmp_line;
			else
				show_line = get_substr(tmp_line, COLS - x , true);

			tmp_char = NULL;
			tmp_char = const_cast<char*>(show_line.c_str());
			mvprintw(i, x,"%s\n",tmp_char);
		}


		if (move_picture_l2r(x, a_pic) == ERR) 
			break;	

        getch();
        refresh();
        usleep(move_speed);
	}	

	return true;
}

bool move_and_move_to_left(string move_left_top, string pic_path, int move_speed)
{
	int max_house_len = 0;
	int max_pic_len = 0;
	// map<int, string> a_house = draw_picture("tree.txt", max_house_len);
	map<int, string> a_house = draw_picture(move_left_top, max_house_len);
	map<int, string> a_pic = draw_picture(pic_path, max_pic_len);
	m_dy = 1;
	int max_dy = m_COLS + max_pic_len + 1;

	string tmp_line = "";
	string show_line = "";
	char* tmp_char = NULL;
	int house_size = a_house.size();
	int weight = COLS - max_house_len;

	int tmp_col = 0;
	for (int x = COLS - 1; ; --x)
	{

		for(int i =0 ; i < house_size ;++i)
		{
			tmp_line = a_house[i];
			if(m_dy <= COLS)
				show_line = get_substr(tmp_line, m_dy, true);
			else
				show_line = get_substr(tmp_line, m_dy - COLS, false);

			tmp_char = NULL;
			tmp_char = const_cast<char*>(show_line.c_str());

			tmp_col = x - 10;
			if(tmp_col < 0)
				tmp_col = 0;
			mvprintw(i, tmp_col,"%s\n",tmp_char);
		}


		if (move_picture_r2l(x, a_pic) == ERR) 
			break;	

        getch();
        refresh();
        usleep(move_speed);
        m_dy ++;

        if(m_dy > max_dy)
        	break;
	}	

	return true;

}


bool single_move_from_right_to_left(string pic_path, int move_speed)
{
	int max_pic_len = 0;
	map<int, string> a_pic = draw_picture(pic_path, max_pic_len);
	m_dy = 1;
	int max_dy = m_COLS + max_pic_len + 1;
	for (int x = COLS - 1; ; --x)
	{
		if (move_picture_r2l(x, a_pic) == ERR) 
			break;	

        getch();
        refresh();
        usleep(move_speed);
        m_dy ++;

        if(m_dy > max_dy)
        	break;
	}	

	return true;
}

bool single_move_from_left_to_right(string pic_path, int move_speed)
{
	int max_pic_len = 0;
	map<int, string> a_pic = draw_picture(pic_path, max_pic_len);
	for (int x = 0; x < COLS ; ++x)
	{
		if (move_picture_l2r(x, a_pic) == ERR) 
			break;	

        getch();
        refresh();
        usleep(move_speed);
   
	}	

	return true;
}

map<int, string> draw_picture(const string& picture_addr, int& max_pic_len)
{
	map<int,string> file_content = get_file_content_by_line(picture_addr, max_pic_len);
	return file_content;		
}

int move_picture_r2l(int col, map<int, string>picture_content, bool from_top_row)
{
	string tmp_line = "";
	string show_line = "";
	char* tmp_char = NULL;
	int pic_size = picture_content.size();
	for(int i =0 ; i < pic_size ;++i)
	{
		tmp_line = picture_content[i];
		if(m_dy <= COLS)
			show_line = get_substr(tmp_line, m_dy, true);
		else
			show_line = get_substr(tmp_line, m_dy - COLS, false);

		tmp_char = NULL;
		tmp_char = const_cast<char*>(show_line.c_str());
		if(col < 0)
			col = 0;

		if(!from_top_row)
			mvprintw(m_ROWS - pic_size + i, col,"%s\n",tmp_char);
		else
			mvprintw(i, col,"%s\n",tmp_char);
	}

	return 0;	
}

//TO DO: 当从左向右移动时，字符串的第一个字符必须是空，否则会一直重复第一个字符，目前还不知道为什么，待排查
int move_picture_l2r(int col, map<int, string>picture_content)
{
	string tmp_line = "";
	string show_line = "";
	char* tmp_char = NULL;
	int pic_size = picture_content.size();
	int now_full_pos = 0; 
	for(int i =0 ; i < pic_size ;++i)
	{
		tmp_line = picture_content[i];
		now_full_pos = tmp_line.size() + col;
		if(now_full_pos <= COLS)
			show_line = tmp_line;
		else
			show_line = get_substr(tmp_line, COLS - col , true);

		tmp_char = NULL;
		tmp_char = const_cast<char*>(show_line.c_str());

		mvprintw(m_ROWS - pic_size + i, col,"%s\n",tmp_char);
	}

	return 0;	
}



string get_substr(const string& origin, int len, bool start_left)
{
	if(origin == "")
		return "";

	int org_size = origin.size();
	string str_ret = "";
	if(start_left)
	{
		if(org_size <= len)
			return origin;
		else
		{
			str_ret = origin.substr(0, len);
			return str_ret;
		}
	}

	//start_right
	if(org_size <= len)
		return "";
	else
	{
		str_ret = origin.substr(len, org_size - len);
		return str_ret;
	}
}