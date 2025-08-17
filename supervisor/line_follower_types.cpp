/* --- Generated the 9/4/2025 at 7:31 --- */
/* --- heptagon compiler, version 1.05.00 (compiled fri. feb. 7 18:8:4 CET 2025) --- */
/* --- Command line: /usr/local/bin/heptc -target c -s main -hepts line_follower.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "line_follower_types.h"

Line_follower__st_2 Line_follower__st_2_of_string(char* s) {
  if ((strcmp(s, "St_2_White")==0)) {
    return Line_follower__St_2_White;
  };
  if ((strcmp(s, "St_2_Black")==0)) {
    return Line_follower__St_2_Black;
  };
}

char* string_of_Line_follower__st_2(Line_follower__st_2 x, char* buf) {
  switch (x) {
    case Line_follower__St_2_White:
      strcpy(buf, "St_2_White");
      break;
    case Line_follower__St_2_Black:
      strcpy(buf, "St_2_Black");
      break;
    default:
      break;
  };
  return buf;
}

Line_follower__st_1 Line_follower__st_1_of_string(char* s) {
  if ((strcmp(s, "St_1_Turnright")==0)) {
    return Line_follower__St_1_Turnright;
  };
  if ((strcmp(s, "St_1_Turnleft")==0)) {
    return Line_follower__St_1_Turnleft;
  };
  if ((strcmp(s, "St_1_RightonObs")==0)) {
    return Line_follower__St_1_RightonObs;
  };
  if ((strcmp(s, "St_1_Reverse")==0)) {
    return Line_follower__St_1_Reverse;
  };
  if ((strcmp(s, "St_1_Pid")==0)) {
    return Line_follower__St_1_Pid;
  };
  if ((strcmp(s, "St_1_ParkingCheck")==0)) {
    return Line_follower__St_1_ParkingCheck;
  };
  if ((strcmp(s, "St_1_Parked")==0)) {
    return Line_follower__St_1_Parked;
  };
  if ((strcmp(s, "St_1_ParkRight")==0)) {
    return Line_follower__St_1_ParkRight;
  };
  if ((strcmp(s, "St_1_ParkLeft")==0)) {
    return Line_follower__St_1_ParkLeft;
  };
  if ((strcmp(s, "St_1_ObstacleDetected")==0)) {
    return Line_follower__St_1_ObstacleDetected;
  };
  if ((strcmp(s, "St_1_MoveStr")==0)) {
    return Line_follower__St_1_MoveStr;
  };
  if ((strcmp(s, "St_1_MoveAlong")==0)) {
    return Line_follower__St_1_MoveAlong;
  };
  if ((strcmp(s, "St_1_Idle")==0)) {
    return Line_follower__St_1_Idle;
  };
  if ((strcmp(s, "St_1_FindObstacle")==0)) {
    return Line_follower__St_1_FindObstacle;
  };
  if ((strcmp(s, "St_1_BlindForward")==0)) {
    return Line_follower__St_1_BlindForward;
  };
}

char* string_of_Line_follower__st_1(Line_follower__st_1 x, char* buf) {
  switch (x) {
    case Line_follower__St_1_Turnright:
      strcpy(buf, "St_1_Turnright");
      break;
    case Line_follower__St_1_Turnleft:
      strcpy(buf, "St_1_Turnleft");
      break;
    case Line_follower__St_1_RightonObs:
      strcpy(buf, "St_1_RightonObs");
      break;
    case Line_follower__St_1_Reverse:
      strcpy(buf, "St_1_Reverse");
      break;
    case Line_follower__St_1_Pid:
      strcpy(buf, "St_1_Pid");
      break;
    case Line_follower__St_1_ParkingCheck:
      strcpy(buf, "St_1_ParkingCheck");
      break;
    case Line_follower__St_1_Parked:
      strcpy(buf, "St_1_Parked");
      break;
    case Line_follower__St_1_ParkRight:
      strcpy(buf, "St_1_ParkRight");
      break;
    case Line_follower__St_1_ParkLeft:
      strcpy(buf, "St_1_ParkLeft");
      break;
    case Line_follower__St_1_ObstacleDetected:
      strcpy(buf, "St_1_ObstacleDetected");
      break;
    case Line_follower__St_1_MoveStr:
      strcpy(buf, "St_1_MoveStr");
      break;
    case Line_follower__St_1_MoveAlong:
      strcpy(buf, "St_1_MoveAlong");
      break;
    case Line_follower__St_1_Idle:
      strcpy(buf, "St_1_Idle");
      break;
    case Line_follower__St_1_FindObstacle:
      strcpy(buf, "St_1_FindObstacle");
      break;
    case Line_follower__St_1_BlindForward:
      strcpy(buf, "St_1_BlindForward");
      break;
    default:
      break;
  };
  return buf;
}

Line_follower__st Line_follower__st_of_string(char* s) {
  if ((strcmp(s, "St_Turnright")==0)) {
    return Line_follower__St_Turnright;
  };
  if ((strcmp(s, "St_Turnleft")==0)) {
    return Line_follower__St_Turnleft;
  };
  if ((strcmp(s, "St_Pid")==0)) {
    return Line_follower__St_Pid;
  };
  if ((strcmp(s, "St_Idle")==0)) {
    return Line_follower__St_Idle;
  };
}

char* string_of_Line_follower__st(Line_follower__st x, char* buf) {
  switch (x) {
    case Line_follower__St_Turnright:
      strcpy(buf, "St_Turnright");
      break;
    case Line_follower__St_Turnleft:
      strcpy(buf, "St_Turnleft");
      break;
    case Line_follower__St_Pid:
      strcpy(buf, "St_Pid");
      break;
    case Line_follower__St_Idle:
      strcpy(buf, "St_Idle");
      break;
    default:
      break;
  };
  return buf;
}

