#ifndef _MAIN_WINDOW_H_
#define _MAIN_WINDOW_H_
#include <stdlib.h>
#include "Object.h"
void keypress_player_window(unsigned char key, int x, int y);
void keypress_overhead_window(unsigned char key, int x, int y);
void special_overhead_window(int key,int x, int y);
void special_player_window(int key,int x, int y);
void display_main_window();
void display_overhead_window();
void display_player_window();
void mouse_overhead_window();
void mouse_player_window();
void init_main_window();
void draw_objects(double * orientation=NULL);
void generic_mouse_click(int button,int state, int x, int y, double * camera=NULL);
void idle(void);

enum move_mode_t {
	MOVE_MODE_TRANSLATE,
	MOVE_MODE_ROTATE
};
extern int main_window_width;
extern int main_window_height;
extern Object * camera;
/*
extern int main_window;
extern int sub_window_overhead;
extern int sub_window_player;
extern move_mode_t move_mode;
*/


#endif 
