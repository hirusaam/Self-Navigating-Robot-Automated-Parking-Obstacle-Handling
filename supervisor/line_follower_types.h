/* --- Generated the 9/4/2025 at 7:31 --- */
/* --- heptagon compiler, version 1.05.00 (compiled fri. feb. 7 18:8:4 CET 2025) --- */
/* --- Command line: /usr/local/bin/heptc -target c -s main -hepts line_follower.ept --- */

#ifndef LINE_FOLLOWER_TYPES_H
#define LINE_FOLLOWER_TYPES_H

#include "stdbool.h"
#include "assert.h"
#include "pervasives.h"
typedef enum {
  Line_follower__St_2_White,
  Line_follower__St_2_Black
} Line_follower__st_2;

Line_follower__st_2 Line_follower__st_2_of_string(char* s);

char* string_of_Line_follower__st_2(Line_follower__st_2 x, char* buf);

typedef enum {
  Line_follower__St_1_Turnright,
  Line_follower__St_1_Turnleft,
  Line_follower__St_1_RightonObs,
  Line_follower__St_1_Reverse,
  Line_follower__St_1_Pid,
  Line_follower__St_1_ParkingCheck,
  Line_follower__St_1_Parked,
  Line_follower__St_1_ParkRight,
  Line_follower__St_1_ParkLeft,
  Line_follower__St_1_ObstacleDetected,
  Line_follower__St_1_MoveStr,
  Line_follower__St_1_MoveAlong,
  Line_follower__St_1_Idle,
  Line_follower__St_1_FindObstacle,
  Line_follower__St_1_BlindForward
} Line_follower__st_1;

Line_follower__st_1 Line_follower__st_1_of_string(char* s);

char* string_of_Line_follower__st_1(Line_follower__st_1 x, char* buf);

typedef enum {
  Line_follower__St_Turnright,
  Line_follower__St_Turnleft,
  Line_follower__St_Pid,
  Line_follower__St_Idle
} Line_follower__st;

Line_follower__st Line_follower__st_of_string(char* s);

char* string_of_Line_follower__st(Line_follower__st x, char* buf);

static const int Line_follower__kp = 1;

static const int Line_follower__ki = 100;

static const int Line_follower__kd = 10000;

static const int Line_follower__left_turn_speed = 90;

static const int Line_follower__right_turn_speed = 90;

#endif // LINE_FOLLOWER_TYPES_H
