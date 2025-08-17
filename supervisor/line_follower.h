/* --- Generated the 9/4/2025 at 7:31 --- */
/* --- heptagon compiler, version 1.05.00 (compiled fri. feb. 7 18:8:4 CET 2025) --- */
/* --- Command line: /usr/local/bin/heptc -target c -s main -hepts line_follower.ept --- */

#ifndef LINE_FOLLOWER_H
#define LINE_FOLLOWER_H

#include "line_follower_types.h"
typedef struct Line_follower__pidController_mem {
  int v_4;
  int v_3;
  int v_1;
  int v;
} Line_follower__pidController_mem;

typedef struct Line_follower__pidController_out {
  int v_l;
  int v_r;
} Line_follower__pidController_out;

void Line_follower__pidController_reset(Line_follower__pidController_mem* self);

void Line_follower__pidController_step(int sen0, int sen1, int sen2,
                                       int sen3, int sen4,
                                       Line_follower__pidController_out* _out,
                                       Line_follower__pidController_mem* self);

typedef struct Line_follower__main_mem {
  Line_follower__st_2 ck;
  Line_follower__st_1 v_213;
  int v_218;
  int v_215;
  int v_224;
  int v_221;
  int v_230;
  int v_227;
  int v_236;
  int v_233;
  int v_252;
  int v_249;
  int v_274;
  int v_271;
  int v_281;
  Line_follower__st v_324;
  int v_330;
  int pnr_2;
  int leftEmp_1;
  int rightEmp_1;
  Line_follower__pidController_mem pidController;
  Line_follower__pidController_mem pidController_1;
  Line_follower__pidController_mem pidController_2;
} Line_follower__main_mem;

typedef struct Line_follower__main_out {
  int v_l;
  int v_r;
  int dir;
} Line_follower__main_out;

void Line_follower__main_reset(Line_follower__main_mem* self);

void Line_follower__main_step(int sen0, int sen1, int sen2, int sen3,
                              int sen4, int ir_left, int ir_right, int top_l,
                              int top_r, int sec,
                              Line_follower__main_out* _out,
                              Line_follower__main_mem* self);

#endif // LINE_FOLLOWER_H
