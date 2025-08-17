/* --- Generated the 9/4/2025 at 7:31 --- */
/* --- heptagon compiler, version 1.05.00 (compiled fri. feb. 7 18:8:4 CET 2025) --- */
/* --- Command line: /usr/local/bin/heptc -target c -s main -hepts line_follower.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "line_follower.h"

void Line_follower__pidController_reset(Line_follower__pidController_mem* self) {
  self->v_3 = true;
  self->v = true;
}

void Line_follower__pidController_step(int sen0, int sen1, int sen2,
                                       int sen3, int sen4,
                                       Line_follower__pidController_out* _out,
                                       Line_follower__pidController_mem* self) {
  
  int v_14;
  int v_13;
  int v_12;
  int v_11;
  int v_10;
  int v_9;
  int v_8;
  int v_7;
  int v_6;
  int v_5;
  int v_2;
  int integeral;
  int propotional;
  int derivative;
  int pid_value;
  int output;
  int error;
  if (self->v_3) {
    v_5 = 0;
  } else {
    v_5 = self->v_4;
  };
  error = (sen1-sen3);
  derivative = (error-v_5);
  v_9 = (derivative/Line_follower__kd);
  v_2 = (self->v_1+error);
  if (self->v) {
    integeral = 0;
  } else {
    integeral = v_2;
  };
  v_7 = (integeral/Line_follower__ki);
  propotional = error;
  v_6 = (propotional/Line_follower__kp);
  v_8 = (v_6+v_7);
  pid_value = (v_8+v_9);
  v_10 = (pid_value<0);
  if (v_10) {
    output = -10;
  } else {
    output = 10;
  };
  v_14 = (45+output);
  v_13 = (output==0);
  if (v_13) {
    _out->v_r = 75;
  } else {
    _out->v_r = v_14;
  };
  v_12 = (45-output);
  v_11 = (output==0);
  if (v_11) {
    _out->v_l = 75;
  } else {
    _out->v_l = v_12;
  };
  self->v_4 = error;
  self->v_3 = false;
  self->v_1 = integeral;
  self->v = false;;
}

void Line_follower__main_reset(Line_follower__main_mem* self) {
  Line_follower__pidController_reset(&self->pidController_2);
  Line_follower__pidController_reset(&self->pidController_1);
  Line_follower__pidController_reset(&self->pidController);
  self->v_271 = true;
  self->v_249 = true;
  self->v_233 = true;
  self->v_227 = true;
  self->v_221 = true;
  self->v_215 = true;
  self->leftEmp_1 = 0;
  self->rightEmp_1 = 0;
  self->pnr_2 = false;
  self->ck = Line_follower__St_2_White;
  self->v_330 = false;
  self->v_324 = Line_follower__St_Idle;
  self->v_281 = false;
  self->v_213 = Line_follower__St_1_Idle;
}

void Line_follower__main_step(int sen0, int sen1, int sen2, int sen3,
                              int sen4, int ir_left, int ir_right, int top_l,
                              int top_r, int sec,
                              Line_follower__main_out* _out,
                              Line_follower__main_mem* self) {
  Line_follower__pidController_out Line_follower__pidController_out_st;
  
  int v_42;
  int v_41;
  int v_40;
  int v_39;
  int v_38;
  int v_37;
  int v_36;
  int v_35;
  int v_34;
  int v_33;
  int v_32;
  int v_31;
  int v_30;
  int v_29;
  int v_28;
  int v_27;
  int v_26;
  int v_25;
  int v_24;
  int v_23;
  int v_22;
  int v_21;
  int v_20;
  int v_19;
  int v_18;
  int v_17;
  int v_16;
  int v_15;
  int v;
  int r_2_St_2_Black;
  Line_follower__st_2 s_2_St_2_Black;
  int r_2_St_2_White;
  Line_follower__st_2 s_2_St_2_White;
  int v_58;
  Line_follower__st_1 v_57;
  int v_56;
  Line_follower__st_1 v_55;
  int v_54;
  int v_53;
  int v_52;
  int v_51;
  int v_50;
  int v_49;
  int v_48;
  int v_47;
  int v_46;
  int v_45;
  int v_44;
  int v_43;
  int v_63;
  Line_follower__st_1 v_62;
  int v_61;
  int v_60;
  int v_59;
  int v_64;
  int v_71;
  Line_follower__st_1 v_70;
  int v_69;
  int v_68;
  int v_67;
  int v_66;
  int v_65;
  int v_106;
  Line_follower__st_1 v_105;
  int v_104;
  Line_follower__st_1 v_103;
  int v_102;
  Line_follower__st_1 v_101;
  int v_100;
  Line_follower__st_1 v_99;
  int v_98;
  int v_97;
  int v_96;
  int v_95;
  int v_94;
  int v_93;
  int v_92;
  int v_91;
  int v_90;
  int v_89;
  int v_88;
  int v_87;
  int v_86;
  int v_85;
  int v_84;
  int v_83;
  int v_82;
  int v_81;
  int v_80;
  int v_79;
  int v_78;
  int v_77;
  int v_76;
  int v_75;
  int v_74;
  int v_73;
  int v_72;
  int v_141;
  Line_follower__st_1 v_140;
  int v_139;
  Line_follower__st_1 v_138;
  int v_137;
  Line_follower__st_1 v_136;
  int v_135;
  Line_follower__st_1 v_134;
  int v_133;
  int v_132;
  int v_131;
  int v_130;
  int v_129;
  int v_128;
  int v_127;
  int v_126;
  int v_125;
  int v_124;
  int v_123;
  int v_122;
  int v_121;
  int v_120;
  int v_119;
  int v_118;
  int v_117;
  int v_116;
  int v_115;
  int v_114;
  int v_113;
  int v_112;
  int v_111;
  int v_110;
  int v_109;
  int v_108;
  int v_107;
  int v_173;
  Line_follower__st_1 v_172;
  int v_171;
  Line_follower__st_1 v_170;
  int v_169;
  Line_follower__st_1 v_168;
  int v_167;
  Line_follower__st_1 v_166;
  int v_165;
  int v_164;
  int v_163;
  int v_162;
  int v_161;
  int v_160;
  int v_159;
  int v_158;
  int v_157;
  int v_156;
  int v_155;
  int v_154;
  int v_153;
  int v_152;
  int v_151;
  int v_150;
  int v_149;
  int v_148;
  int v_147;
  int v_146;
  int v_145;
  int v_144;
  int v_143;
  int v_142;
  int v_212;
  Line_follower__st_1 v_211;
  int v_210;
  Line_follower__st_1 v_209;
  int v_208;
  Line_follower__st_1 v_207;
  int v_206;
  Line_follower__st_1 v_205;
  int v_204;
  Line_follower__st_1 v_203;
  int v_202;
  int v_201;
  int v_200;
  int v_199;
  int v_198;
  int v_197;
  int v_196;
  int v_195;
  int v_194;
  int v_193;
  int v_192;
  int v_191;
  int v_190;
  int v_189;
  int v_188;
  int v_187;
  int v_186;
  int v_185;
  int v_184;
  int v_183;
  int v_182;
  int v_181;
  int v_180;
  int v_179;
  int v_178;
  int v_177;
  int v_176;
  int v_175;
  int v_174;
  int r_1_St_1_Parked;
  Line_follower__st_1 s_1_St_1_Parked;
  int r_1_St_1_MoveStr;
  Line_follower__st_1 s_1_St_1_MoveStr;
  int r_1_St_1_ParkLeft;
  Line_follower__st_1 s_1_St_1_ParkLeft;
  int r_1_St_1_ParkRight;
  Line_follower__st_1 s_1_St_1_ParkRight;
  int r_1_St_1_BlindForward;
  Line_follower__st_1 s_1_St_1_BlindForward;
  int r_1_St_1_ParkingCheck;
  Line_follower__st_1 s_1_St_1_ParkingCheck;
  int r_1_St_1_FindObstacle;
  Line_follower__st_1 s_1_St_1_FindObstacle;
  int r_1_St_1_MoveAlong;
  Line_follower__st_1 s_1_St_1_MoveAlong;
  int r_1_St_1_RightonObs;
  Line_follower__st_1 s_1_St_1_RightonObs;
  int r_1_St_1_ObstacleDetected;
  Line_follower__st_1 s_1_St_1_ObstacleDetected;
  int r_1_St_1_Reverse;
  Line_follower__st_1 s_1_St_1_Reverse;
  int r_1_St_1_Turnright;
  Line_follower__st_1 s_1_St_1_Turnright;
  int r_1_St_1_Turnleft;
  Line_follower__st_1 s_1_St_1_Turnleft;
  int r_1_St_1_Pid;
  Line_follower__st_1 s_1_St_1_Pid;
  int r_1_St_1_Idle;
  Line_follower__st_1 s_1_St_1_Idle;
  Line_follower__st_1 ck_4;
  int v_219;
  int v_217;
  int v_216;
  int v_214;
  int time_5;
  int v_225;
  int v_223;
  int v_222;
  int v_220;
  int time_4;
  int v_231;
  int v_229;
  int v_228;
  int v_226;
  int time_3;
  int v_237;
  int v_235;
  int v_234;
  int v_232;
  int r_3;
  int time_2;
  int v_269;
  int v_268;
  int v_267;
  int v_266;
  int v_265;
  int v_264;
  int v_263;
  int v_262;
  int v_261;
  int v_260;
  int v_259;
  int v_258;
  int v_257;
  int v_256;
  int v_255;
  int v_254;
  int v_253;
  int v_251;
  int v_250;
  int v_248;
  Line_follower__st_1 v_247;
  int v_246;
  Line_follower__st_1 v_245;
  int v_244;
  int v_243;
  int v_242;
  int v_241;
  int v_240;
  int v_239;
  int v_238;
  int time_1;
  int v_275;
  int v_273;
  int v_272;
  int v_270;
  int time;
  int v_280;
  int v_279;
  int v_278;
  int v_277;
  int v_276;
  int r_4;
  int nr_1_St_1_Parked;
  Line_follower__st_1 ns_1_St_1_Parked;
  int leftEmp_St_2_Black_St_1_Parked;
  int rightEmp_St_2_Black_St_1_Parked;
  int dir_St_2_Black_St_1_Parked;
  int v_r_St_2_Black_St_1_Parked;
  int v_l_St_2_Black_St_1_Parked;
  int nr_1_St_1_MoveStr;
  Line_follower__st_1 ns_1_St_1_MoveStr;
  int leftEmp_St_2_Black_St_1_MoveStr;
  int rightEmp_St_2_Black_St_1_MoveStr;
  int dir_St_2_Black_St_1_MoveStr;
  int v_r_St_2_Black_St_1_MoveStr;
  int v_l_St_2_Black_St_1_MoveStr;
  int nr_1_St_1_ParkLeft;
  Line_follower__st_1 ns_1_St_1_ParkLeft;
  int leftEmp_St_2_Black_St_1_ParkLeft;
  int rightEmp_St_2_Black_St_1_ParkLeft;
  int dir_St_2_Black_St_1_ParkLeft;
  int v_r_St_2_Black_St_1_ParkLeft;
  int v_l_St_2_Black_St_1_ParkLeft;
  int nr_1_St_1_ParkRight;
  Line_follower__st_1 ns_1_St_1_ParkRight;
  int leftEmp_St_2_Black_St_1_ParkRight;
  int rightEmp_St_2_Black_St_1_ParkRight;
  int dir_St_2_Black_St_1_ParkRight;
  int v_r_St_2_Black_St_1_ParkRight;
  int v_l_St_2_Black_St_1_ParkRight;
  int nr_1_St_1_BlindForward;
  Line_follower__st_1 ns_1_St_1_BlindForward;
  int leftEmp_St_2_Black_St_1_BlindForward;
  int rightEmp_St_2_Black_St_1_BlindForward;
  int dir_St_2_Black_St_1_BlindForward;
  int v_r_St_2_Black_St_1_BlindForward;
  int v_l_St_2_Black_St_1_BlindForward;
  int nr_1_St_1_ParkingCheck;
  Line_follower__st_1 ns_1_St_1_ParkingCheck;
  int leftEmp_St_2_Black_St_1_ParkingCheck;
  int rightEmp_St_2_Black_St_1_ParkingCheck;
  int dir_St_2_Black_St_1_ParkingCheck;
  int v_r_St_2_Black_St_1_ParkingCheck;
  int v_l_St_2_Black_St_1_ParkingCheck;
  int nr_1_St_1_FindObstacle;
  Line_follower__st_1 ns_1_St_1_FindObstacle;
  int leftEmp_St_2_Black_St_1_FindObstacle;
  int rightEmp_St_2_Black_St_1_FindObstacle;
  int dir_St_2_Black_St_1_FindObstacle;
  int v_r_St_2_Black_St_1_FindObstacle;
  int v_l_St_2_Black_St_1_FindObstacle;
  int nr_1_St_1_MoveAlong;
  Line_follower__st_1 ns_1_St_1_MoveAlong;
  int leftEmp_St_2_Black_St_1_MoveAlong;
  int rightEmp_St_2_Black_St_1_MoveAlong;
  int dir_St_2_Black_St_1_MoveAlong;
  int v_r_St_2_Black_St_1_MoveAlong;
  int v_l_St_2_Black_St_1_MoveAlong;
  int nr_1_St_1_RightonObs;
  Line_follower__st_1 ns_1_St_1_RightonObs;
  int leftEmp_St_2_Black_St_1_RightonObs;
  int rightEmp_St_2_Black_St_1_RightonObs;
  int dir_St_2_Black_St_1_RightonObs;
  int v_r_St_2_Black_St_1_RightonObs;
  int v_l_St_2_Black_St_1_RightonObs;
  int nr_1_St_1_ObstacleDetected;
  Line_follower__st_1 ns_1_St_1_ObstacleDetected;
  int leftEmp_St_2_Black_St_1_ObstacleDetected;
  int rightEmp_St_2_Black_St_1_ObstacleDetected;
  int dir_St_2_Black_St_1_ObstacleDetected;
  int v_r_St_2_Black_St_1_ObstacleDetected;
  int v_l_St_2_Black_St_1_ObstacleDetected;
  int nr_1_St_1_Reverse;
  Line_follower__st_1 ns_1_St_1_Reverse;
  int leftEmp_St_2_Black_St_1_Reverse;
  int rightEmp_St_2_Black_St_1_Reverse;
  int dir_St_2_Black_St_1_Reverse;
  int v_r_St_2_Black_St_1_Reverse;
  int v_l_St_2_Black_St_1_Reverse;
  int nr_1_St_1_Turnright;
  Line_follower__st_1 ns_1_St_1_Turnright;
  int leftEmp_St_2_Black_St_1_Turnright;
  int rightEmp_St_2_Black_St_1_Turnright;
  int dir_St_2_Black_St_1_Turnright;
  int v_r_St_2_Black_St_1_Turnright;
  int v_l_St_2_Black_St_1_Turnright;
  int nr_1_St_1_Turnleft;
  Line_follower__st_1 ns_1_St_1_Turnleft;
  int leftEmp_St_2_Black_St_1_Turnleft;
  int rightEmp_St_2_Black_St_1_Turnleft;
  int dir_St_2_Black_St_1_Turnleft;
  int v_r_St_2_Black_St_1_Turnleft;
  int v_l_St_2_Black_St_1_Turnleft;
  int nr_1_St_1_Pid;
  Line_follower__st_1 ns_1_St_1_Pid;
  int leftEmp_St_2_Black_St_1_Pid;
  int rightEmp_St_2_Black_St_1_Pid;
  int dir_St_2_Black_St_1_Pid;
  int v_r_St_2_Black_St_1_Pid;
  int v_l_St_2_Black_St_1_Pid;
  int nr_1_St_1_Idle;
  Line_follower__st_1 ns_1_St_1_Idle;
  int leftEmp_St_2_Black_St_1_Idle;
  int rightEmp_St_2_Black_St_1_Idle;
  int dir_St_2_Black_St_1_Idle;
  int v_r_St_2_Black_St_1_Idle;
  int v_l_St_2_Black_St_1_Idle;
  Line_follower__st_1 ck_5;
  Line_follower__st_1 s_1;
  Line_follower__st_1 ns_1;
  int r_1;
  int nr_1;
  int pnr_1;
  int v_295;
  Line_follower__st v_294;
  int v_293;
  int v_292;
  int v_291;
  int v_290;
  int v_289;
  int v_288;
  int v_287;
  int v_304;
  Line_follower__st v_303;
  int v_302;
  int v_301;
  int v_300;
  int v_299;
  int v_298;
  int v_297;
  int v_296;
  int v_310;
  Line_follower__st v_309;
  int v_308;
  int v_307;
  int v_306;
  int v_305;
  int v_323;
  Line_follower__st v_322;
  int v_321;
  Line_follower__st v_320;
  int v_319;
  int v_318;
  int v_317;
  int v_316;
  int v_315;
  int v_314;
  int v_313;
  int v_312;
  int v_311;
  int r_St_Turnright;
  Line_follower__st s_St_Turnright;
  int r_St_Turnleft;
  Line_follower__st s_St_Turnleft;
  int r_St_Pid;
  Line_follower__st s_St_Pid;
  int r_St_Idle;
  Line_follower__st s_St_Idle;
  Line_follower__st ck_2;
  int v_329;
  int v_328;
  int v_327;
  int v_326;
  int v_325;
  int r_5;
  int nr_St_Turnright;
  Line_follower__st ns_St_Turnright;
  int dir_St_2_White_St_Turnright;
  int v_r_St_2_White_St_Turnright;
  int v_l_St_2_White_St_Turnright;
  int nr_St_Turnleft;
  Line_follower__st ns_St_Turnleft;
  int dir_St_2_White_St_Turnleft;
  int v_r_St_2_White_St_Turnleft;
  int v_l_St_2_White_St_Turnleft;
  int nr_St_Pid;
  Line_follower__st ns_St_Pid;
  int dir_St_2_White_St_Pid;
  int v_r_St_2_White_St_Pid;
  int v_l_St_2_White_St_Pid;
  int nr_St_Idle;
  Line_follower__st ns_St_Idle;
  int dir_St_2_White_St_Idle;
  int v_r_St_2_White_St_Idle;
  int v_l_St_2_White_St_Idle;
  Line_follower__st ck_3;
  int v_286;
  int v_285;
  int v_284;
  int v_283;
  int v_282;
  Line_follower__st s;
  Line_follower__st ns;
  int r;
  int nr;
  int pnr;
  int nr_2_St_2_Black;
  Line_follower__st_2 ns_2_St_2_Black;
  int leftEmp_St_2_Black;
  int rightEmp_St_2_Black;
  int sen_array_St_2_Black[5];
  int dir_St_2_Black;
  int v_r_St_2_Black;
  int v_l_St_2_Black;
  int nr_2_St_2_White;
  Line_follower__st_2 ns_2_St_2_White;
  int leftEmp_St_2_White;
  int rightEmp_St_2_White;
  int sen_array_St_2_White[5];
  int dir_St_2_White;
  int v_r_St_2_White;
  int v_l_St_2_White;
  Line_follower__st_2 ck_1;
  Line_follower__st_2 s_2;
  Line_follower__st_2 ns_2;
  int r_2;
  int nr_2;
  int sen_array[5];
  int rightEmp;
  int leftEmp;
  switch (self->ck) {
    case Line_follower__St_2_White:
      v_40 = (sen4>600);
      v_38 = (sen3<600);
      v_36 = (sen2>600);
      v_34 = (sen1>600);
      v_33 = (sen0>600);
      v_35 = (v_33&&v_34);
      v_37 = (v_35&&v_36);
      v_39 = (v_37&&v_38);
      v_41 = (v_39&&v_40);
      v_30 = (sen4>600);
      v_28 = (sen3>600);
      v_26 = (sen2>600);
      v_24 = (sen1<600);
      v_23 = (sen0>600);
      v_25 = (v_23&&v_24);
      v_27 = (v_25&&v_26);
      v_29 = (v_27&&v_28);
      v_31 = (v_29&&v_30);
      v_21 = (sen4>600);
      v_19 = (sen3>600);
      v_17 = (sen2<600);
      v_15 = (sen1>600);
      v = (sen0>600);
      v_16 = (v&&v_15);
      v_18 = (v_16&&v_17);
      v_20 = (v_18&&v_19);
      v_22 = (v_20&&v_21);
      v_32 = (v_22||v_31);
      v_42 = (v_32||v_41);
      if (v_42) {
        r_2_St_2_White = true;
        s_2_St_2_White = Line_follower__St_2_Black;
      } else {
        r_2_St_2_White = self->pnr_2;
        s_2_St_2_White = Line_follower__St_2_White;
      };
      s_2 = s_2_St_2_White;
      r_2 = r_2_St_2_White;
      break;
    case Line_follower__St_2_Black:
      r_2_St_2_Black = self->pnr_2;
      s_2_St_2_Black = Line_follower__St_2_Black;
      s_2 = s_2_St_2_Black;
      r_2 = r_2_St_2_Black;
      break;
    default:
      break;
  };
  ck_1 = s_2;
  switch (ck_1) {
    case Line_follower__St_2_White:
      leftEmp_St_2_White = self->leftEmp_1;
      rightEmp_St_2_White = self->rightEmp_1;
      if (r_2) {
        pnr = false;
        ck_2 = Line_follower__St_Idle;
      } else {
        pnr = self->v_330;
        ck_2 = self->v_324;
      };
      v_286 = (1023-sen4);
      v_285 = (1023-sen3);
      v_284 = (1023-sen2);
      v_283 = (1023-sen1);
      v_282 = (1023-sen0);
      nr_2_St_2_White = false;
      ns_2_St_2_White = Line_follower__St_2_White;
      ns_2 = ns_2_St_2_White;
      nr_2 = nr_2_St_2_White;
      sen_array_St_2_White[0] = v_282;
      sen_array_St_2_White[1] = v_283;
      sen_array_St_2_White[2] = v_284;
      sen_array_St_2_White[3] = v_285;
      sen_array_St_2_White[4] = v_286;
      {
        int _3;
        for (_3 = 0; _3 < 5; ++_3) {
          sen_array[_3] = sen_array_St_2_White[_3];
        }
      };
      switch (ck_2) {
        case Line_follower__St_Idle:
          v_318 = sen_array[4];
          v_319 = (v_318<500);
          if (v_319) {
            v_321 = true;
            v_320 = Line_follower__St_Turnright;
          } else {
            v_321 = pnr;
            v_320 = Line_follower__St_Idle;
          };
          v_316 = sen_array[0];
          v_317 = (v_316<500);
          if (v_317) {
            v_323 = true;
            v_322 = Line_follower__St_Turnleft;
          } else {
            v_323 = v_321;
            v_322 = v_320;
          };
          v_313 = sen_array[3];
          v_314 = (v_313<500);
          v_311 = sen_array[1];
          v_312 = (v_311<500);
          v_315 = (v_312||v_314);
          if (v_315) {
            r_St_Idle = true;
            s_St_Idle = Line_follower__St_Pid;
          } else {
            r_St_Idle = v_323;
            s_St_Idle = v_322;
          };
          s = s_St_Idle;
          r = r_St_Idle;
          break;
        case Line_follower__St_Pid:
          v_307 = sen_array[4];
          v_308 = (v_307<500);
          if (v_308) {
            v_310 = true;
            v_309 = Line_follower__St_Turnright;
          } else {
            v_310 = pnr;
            v_309 = Line_follower__St_Pid;
          };
          v_305 = sen_array[0];
          v_306 = (v_305<500);
          if (v_306) {
            r_St_Pid = true;
            s_St_Pid = Line_follower__St_Turnleft;
          } else {
            r_St_Pid = v_310;
            s_St_Pid = v_309;
          };
          s = s_St_Pid;
          r = r_St_Pid;
          break;
        case Line_follower__St_Turnleft:
          v_301 = sen_array[4];
          v_302 = (v_301<500);
          if (v_302) {
            v_304 = true;
            v_303 = Line_follower__St_Turnright;
          } else {
            v_304 = pnr;
            v_303 = Line_follower__St_Turnleft;
          };
          v_298 = sen_array[3];
          v_299 = (v_298<500);
          v_296 = sen_array[1];
          v_297 = (v_296<500);
          v_300 = (v_297||v_299);
          if (v_300) {
            r_St_Turnleft = true;
            s_St_Turnleft = Line_follower__St_Pid;
          } else {
            r_St_Turnleft = v_304;
            s_St_Turnleft = v_303;
          };
          s = s_St_Turnleft;
          r = r_St_Turnleft;
          break;
        case Line_follower__St_Turnright:
          v_292 = sen_array[0];
          v_293 = (v_292<500);
          if (v_293) {
            v_295 = true;
            v_294 = Line_follower__St_Turnleft;
          } else {
            v_295 = pnr;
            v_294 = Line_follower__St_Turnright;
          };
          v_289 = sen_array[3];
          v_290 = (v_289<500);
          v_287 = sen_array[1];
          v_288 = (v_287<500);
          v_291 = (v_288||v_290);
          if (v_291) {
            r_St_Turnright = true;
            s_St_Turnright = Line_follower__St_Pid;
          } else {
            r_St_Turnright = v_295;
            s_St_Turnright = v_294;
          };
          s = s_St_Turnright;
          r = r_St_Turnright;
          break;
        default:
          break;
      };
      ck_3 = s;
      switch (ck_3) {
        case Line_follower__St_Idle:
          v_r_St_2_White_St_Idle = 75;
          v_l_St_2_White_St_Idle = 75;
          dir_St_2_White_St_Idle = 1;
          nr_St_Idle = false;
          ns_St_Idle = Line_follower__St_Idle;
          v_l_St_2_White = v_l_St_2_White_St_Idle;
          v_r_St_2_White = v_r_St_2_White_St_Idle;
          dir_St_2_White = dir_St_2_White_St_Idle;
          ns = ns_St_Idle;
          nr = nr_St_Idle;
          break;
        case Line_follower__St_Pid:
          v_329 = sen_array[4];
          v_328 = sen_array[3];
          v_327 = sen_array[2];
          v_326 = sen_array[1];
          v_325 = sen_array[0];
          dir_St_2_White_St_Pid = 2;
          nr_St_Pid = false;
          ns_St_Pid = Line_follower__St_Pid;
          r_5 = (r_2||r);
          if (r_5) {
            Line_follower__pidController_reset(&self->pidController_2);
          };
          Line_follower__pidController_step(v_325, v_326, v_327, v_328,
                                            v_329,
                                            &Line_follower__pidController_out_st,
                                            &self->pidController_2);
          v_l_St_2_White_St_Pid = Line_follower__pidController_out_st.v_l;
          v_r_St_2_White_St_Pid = Line_follower__pidController_out_st.v_r;
          v_l_St_2_White = v_l_St_2_White_St_Pid;
          v_r_St_2_White = v_r_St_2_White_St_Pid;
          dir_St_2_White = dir_St_2_White_St_Pid;
          ns = ns_St_Pid;
          nr = nr_St_Pid;
          break;
        case Line_follower__St_Turnleft:
          v_r_St_2_White_St_Turnleft = 90;
          v_l_St_2_White_St_Turnleft = 90;
          dir_St_2_White_St_Turnleft = 3;
          nr_St_Turnleft = false;
          ns_St_Turnleft = Line_follower__St_Turnleft;
          v_l_St_2_White = v_l_St_2_White_St_Turnleft;
          v_r_St_2_White = v_r_St_2_White_St_Turnleft;
          dir_St_2_White = dir_St_2_White_St_Turnleft;
          ns = ns_St_Turnleft;
          nr = nr_St_Turnleft;
          break;
        case Line_follower__St_Turnright:
          v_r_St_2_White_St_Turnright = 90;
          v_l_St_2_White_St_Turnright = 90;
          dir_St_2_White_St_Turnright = 4;
          nr_St_Turnright = false;
          ns_St_Turnright = Line_follower__St_Turnright;
          v_l_St_2_White = v_l_St_2_White_St_Turnright;
          v_r_St_2_White = v_r_St_2_White_St_Turnright;
          dir_St_2_White = dir_St_2_White_St_Turnright;
          ns = ns_St_Turnright;
          nr = nr_St_Turnright;
          break;
        default:
          break;
      };
      _out->v_l = v_l_St_2_White;
      _out->v_r = v_r_St_2_White;
      _out->dir = dir_St_2_White;
      rightEmp = rightEmp_St_2_White;
      leftEmp = leftEmp_St_2_White;
      break;
    case Line_follower__St_2_Black:
      if (r_2) {
        pnr_1 = false;
        ck_4 = Line_follower__St_1_Idle;
      } else {
        pnr_1 = self->v_281;
        ck_4 = self->v_213;
      };
      nr_2_St_2_Black = false;
      ns_2_St_2_Black = Line_follower__St_2_Black;
      ns_2 = ns_2_St_2_Black;
      nr_2 = nr_2_St_2_Black;
      switch (ck_4) {
        case Line_follower__St_1_Idle:
          v_201 = (top_r==0);
          v_200 = (top_l==0);
          v_202 = (v_200&&v_201);
          if (v_202) {
            v_204 = true;
            v_203 = Line_follower__St_1_ParkingCheck;
          } else {
            v_204 = pnr_1;
            v_203 = Line_follower__St_1_Idle;
          };
          v_198 = (ir_right==1);
          v_197 = (ir_left==1);
          v_199 = (v_197||v_198);
          if (v_199) {
            v_206 = true;
            v_205 = Line_follower__St_1_ObstacleDetected;
          } else {
            v_206 = v_204;
            v_205 = v_203;
          };
          break;
        case Line_follower__St_1_Pid:
          v_164 = (top_r==0);
          v_163 = (top_l==0);
          v_165 = (v_163&&v_164);
          if (v_165) {
            v_167 = true;
            v_166 = Line_follower__St_1_ParkingCheck;
          } else {
            v_167 = pnr_1;
            v_166 = Line_follower__St_1_Pid;
          };
          v_161 = (ir_right==1);
          v_160 = (ir_left==1);
          v_162 = (v_160||v_161);
          if (v_162) {
            v_169 = true;
            v_168 = Line_follower__St_1_ObstacleDetected;
          } else {
            v_169 = v_167;
            v_168 = v_166;
          };
          break;
        case Line_follower__St_1_Turnleft:
          v_132 = (top_r==0);
          v_131 = (top_l==0);
          v_133 = (v_131&&v_132);
          if (v_133) {
            v_135 = true;
            v_134 = Line_follower__St_1_ParkingCheck;
          } else {
            v_135 = pnr_1;
            v_134 = Line_follower__St_1_Turnleft;
          };
          v_129 = (ir_right==1);
          v_128 = (ir_left==1);
          v_130 = (v_128||v_129);
          if (v_130) {
            v_137 = true;
            v_136 = Line_follower__St_1_ObstacleDetected;
          } else {
            v_137 = v_135;
            v_136 = v_134;
          };
          break;
        case Line_follower__St_1_Turnright:
          v_97 = (top_r==0);
          v_96 = (top_l==0);
          v_98 = (v_96&&v_97);
          if (v_98) {
            v_100 = true;
            v_99 = Line_follower__St_1_ParkingCheck;
          } else {
            v_100 = pnr_1;
            v_99 = Line_follower__St_1_Turnright;
          };
          v_94 = (ir_right==1);
          v_93 = (ir_left==1);
          v_95 = (v_93||v_94);
          if (v_95) {
            v_102 = true;
            v_101 = Line_follower__St_1_ObstacleDetected;
          } else {
            v_102 = v_100;
            v_101 = v_99;
          };
          break;
        case Line_follower__St_1_Reverse:
          v_68 = (top_r==0);
          v_67 = (top_l==0);
          v_69 = (v_67&&v_68);
          if (v_69) {
            v_71 = true;
            v_70 = Line_follower__St_1_ParkingCheck;
          } else {
            v_71 = pnr_1;
            v_70 = Line_follower__St_1_Reverse;
          };
          break;
        case Line_follower__St_1_ObstacleDetected:
          r_1_St_1_ObstacleDetected = pnr_1;
          s_1_St_1_ObstacleDetected = Line_follower__St_1_ObstacleDetected;
          break;
        case Line_follower__St_1_RightonObs:
          v_64 = (top_l==0);
          if (v_64) {
            r_1_St_1_RightonObs = true;
            s_1_St_1_RightonObs = Line_follower__St_1_MoveAlong;
          } else {
            r_1_St_1_RightonObs = pnr_1;
            s_1_St_1_RightonObs = Line_follower__St_1_RightonObs;
          };
          break;
        case Line_follower__St_1_MoveAlong:
          v_59 = (top_l==1);
          break;
        case Line_follower__St_1_FindObstacle:
          v_45 = (ir_right==1);
          v_44 = (ir_left==1);
          v_46 = (v_44||v_45);
          v_43 = (top_l==0);
          break;
        case Line_follower__St_1_ParkingCheck:
          r_1_St_1_ParkingCheck = pnr_1;
          s_1_St_1_ParkingCheck = Line_follower__St_1_ParkingCheck;
          break;
        case Line_follower__St_1_BlindForward:
          r_1_St_1_BlindForward = pnr_1;
          s_1_St_1_BlindForward = Line_follower__St_1_BlindForward;
          break;
        case Line_follower__St_1_ParkRight:
          r_1_St_1_ParkRight = pnr_1;
          s_1_St_1_ParkRight = Line_follower__St_1_ParkRight;
          break;
        case Line_follower__St_1_ParkLeft:
          r_1_St_1_ParkLeft = pnr_1;
          s_1_St_1_ParkLeft = Line_follower__St_1_ParkLeft;
          break;
        case Line_follower__St_1_MoveStr:
          r_1_St_1_MoveStr = pnr_1;
          s_1_St_1_MoveStr = Line_follower__St_1_MoveStr;
          break;
        case Line_follower__St_1_Parked:
          r_1_St_1_Parked = pnr_1;
          s_1_St_1_Parked = Line_follower__St_1_Parked;
          break;
        default:
          break;
      };
      sen_array_St_2_Black[0] = sen0;
      sen_array_St_2_Black[1] = sen1;
      sen_array_St_2_Black[2] = sen2;
      sen_array_St_2_Black[3] = sen3;
      sen_array_St_2_Black[4] = sen4;
      {
        int _4;
        for (_4 = 0; _4 < 5; ++_4) {
          sen_array[_4] = sen_array_St_2_Black[_4];
        }
      };
      switch (ck_4) {
        case Line_follower__St_1_Idle:
          v_195 = sen_array[4];
          v_196 = (v_195<500);
          if (v_196) {
            v_208 = true;
            v_207 = Line_follower__St_1_Turnright;
          } else {
            v_208 = v_206;
            v_207 = v_205;
          };
          v_193 = sen_array[0];
          v_194 = (v_193<500);
          if (v_194) {
            v_210 = true;
            v_209 = Line_follower__St_1_Turnleft;
          } else {
            v_210 = v_208;
            v_209 = v_207;
          };
          v_190 = sen_array[3];
          v_191 = (v_190<500);
          v_188 = sen_array[1];
          v_189 = (v_188<500);
          v_192 = (v_189||v_191);
          if (v_192) {
            v_212 = true;
            v_211 = Line_follower__St_1_Pid;
          } else {
            v_212 = v_210;
            v_211 = v_209;
          };
          v_185 = sen_array[4];
          v_186 = (v_185>650);
          v_182 = sen_array[3];
          v_183 = (v_182>750);
          v_179 = sen_array[2];
          v_180 = (v_179>850);
          v_176 = sen_array[1];
          v_177 = (v_176>750);
          v_174 = sen_array[0];
          v_175 = (v_174>850);
          v_178 = (v_175&&v_177);
          v_181 = (v_178&&v_180);
          v_184 = (v_181&&v_183);
          v_187 = (v_184&&v_186);
          if (v_187) {
            r_1_St_1_Idle = true;
            s_1_St_1_Idle = Line_follower__St_1_Reverse;
          } else {
            r_1_St_1_Idle = v_212;
            s_1_St_1_Idle = v_211;
          };
          s_1 = s_1_St_1_Idle;
          r_1 = r_1_St_1_Idle;
          break;
        case Line_follower__St_1_Pid:
          v_158 = sen_array[4];
          v_159 = (v_158<500);
          if (v_159) {
            v_171 = true;
            v_170 = Line_follower__St_1_Turnright;
          } else {
            v_171 = v_169;
            v_170 = v_168;
          };
          v_156 = sen_array[0];
          v_157 = (v_156<500);
          if (v_157) {
            v_173 = true;
            v_172 = Line_follower__St_1_Turnleft;
          } else {
            v_173 = v_171;
            v_172 = v_170;
          };
          v_153 = sen_array[4];
          v_154 = (v_153>650);
          v_150 = sen_array[3];
          v_151 = (v_150>750);
          v_147 = sen_array[2];
          v_148 = (v_147>850);
          v_144 = sen_array[1];
          v_145 = (v_144>750);
          v_142 = sen_array[0];
          v_143 = (v_142>850);
          v_146 = (v_143&&v_145);
          v_149 = (v_146&&v_148);
          v_152 = (v_149&&v_151);
          v_155 = (v_152&&v_154);
          if (v_155) {
            r_1_St_1_Pid = true;
            s_1_St_1_Pid = Line_follower__St_1_Reverse;
          } else {
            r_1_St_1_Pid = v_173;
            s_1_St_1_Pid = v_172;
          };
          s_1 = s_1_St_1_Pid;
          r_1 = r_1_St_1_Pid;
          break;
        case Line_follower__St_1_Turnleft:
          v_126 = sen_array[4];
          v_127 = (v_126<500);
          if (v_127) {
            v_139 = true;
            v_138 = Line_follower__St_1_Turnright;
          } else {
            v_139 = v_137;
            v_138 = v_136;
          };
          v_123 = sen_array[3];
          v_124 = (v_123<500);
          v_121 = sen_array[1];
          v_122 = (v_121<500);
          v_125 = (v_122||v_124);
          if (v_125) {
            v_141 = true;
            v_140 = Line_follower__St_1_Pid;
          } else {
            v_141 = v_139;
            v_140 = v_138;
          };
          v_118 = sen_array[4];
          v_119 = (v_118>650);
          v_115 = sen_array[3];
          v_116 = (v_115>750);
          v_112 = sen_array[2];
          v_113 = (v_112>850);
          v_109 = sen_array[1];
          v_110 = (v_109>750);
          v_107 = sen_array[0];
          v_108 = (v_107>850);
          v_111 = (v_108&&v_110);
          v_114 = (v_111&&v_113);
          v_117 = (v_114&&v_116);
          v_120 = (v_117&&v_119);
          if (v_120) {
            r_1_St_1_Turnleft = true;
            s_1_St_1_Turnleft = Line_follower__St_1_Reverse;
          } else {
            r_1_St_1_Turnleft = v_141;
            s_1_St_1_Turnleft = v_140;
          };
          s_1 = s_1_St_1_Turnleft;
          r_1 = r_1_St_1_Turnleft;
          break;
        case Line_follower__St_1_Turnright:
          v_91 = sen_array[0];
          v_92 = (v_91<500);
          if (v_92) {
            v_104 = true;
            v_103 = Line_follower__St_1_Turnleft;
          } else {
            v_104 = v_102;
            v_103 = v_101;
          };
          v_88 = sen_array[3];
          v_89 = (v_88<600);
          v_86 = sen_array[1];
          v_87 = (v_86<500);
          v_90 = (v_87||v_89);
          if (v_90) {
            v_106 = true;
            v_105 = Line_follower__St_1_Pid;
          } else {
            v_106 = v_104;
            v_105 = v_103;
          };
          v_83 = sen_array[4];
          v_84 = (v_83>650);
          v_80 = sen_array[3];
          v_81 = (v_80>750);
          v_77 = sen_array[2];
          v_78 = (v_77>850);
          v_74 = sen_array[1];
          v_75 = (v_74>750);
          v_72 = sen_array[0];
          v_73 = (v_72>850);
          v_76 = (v_73&&v_75);
          v_79 = (v_76&&v_78);
          v_82 = (v_79&&v_81);
          v_85 = (v_82&&v_84);
          if (v_85) {
            r_1_St_1_Turnright = true;
            s_1_St_1_Turnright = Line_follower__St_1_Reverse;
          } else {
            r_1_St_1_Turnright = v_106;
            s_1_St_1_Turnright = v_105;
          };
          s_1 = s_1_St_1_Turnright;
          r_1 = r_1_St_1_Turnright;
          break;
        case Line_follower__St_1_Reverse:
          v_65 = sen_array[2];
          v_66 = (v_65<600);
          if (v_66) {
            r_1_St_1_Reverse = true;
            s_1_St_1_Reverse = Line_follower__St_1_Idle;
          } else {
            r_1_St_1_Reverse = v_71;
            s_1_St_1_Reverse = v_70;
          };
          s_1 = s_1_St_1_Reverse;
          r_1 = r_1_St_1_Reverse;
          break;
        case Line_follower__St_1_MoveAlong:
          v_60 = sen_array[1];
          v_61 = (v_60<500);
          if (v_61) {
            v_63 = true;
          } else {
            v_63 = pnr_1;
          };
          if (v_59) {
            r_1_St_1_MoveAlong = true;
          } else {
            r_1_St_1_MoveAlong = v_63;
          };
          if (v_61) {
            v_62 = Line_follower__St_1_Turnright;
          } else {
            v_62 = Line_follower__St_1_MoveAlong;
          };
          if (v_59) {
            s_1_St_1_MoveAlong = Line_follower__St_1_FindObstacle;
          } else {
            s_1_St_1_MoveAlong = v_62;
          };
          s_1 = s_1_St_1_MoveAlong;
          r_1 = r_1_St_1_MoveAlong;
          break;
        case Line_follower__St_1_FindObstacle:
          v_52 = sen_array[2];
          v_53 = (v_52<500);
          v_49 = sen_array[0];
          v_50 = (v_49<500);
          v_47 = sen_array[1];
          v_48 = (v_47<500);
          v_51 = (v_48||v_50);
          v_54 = (v_51||v_53);
          if (v_54) {
            v_56 = true;
          } else {
            v_56 = pnr_1;
          };
          if (v_46) {
            v_58 = true;
          } else {
            v_58 = v_56;
          };
          if (v_43) {
            r_1_St_1_FindObstacle = true;
          } else {
            r_1_St_1_FindObstacle = v_58;
          };
          if (v_54) {
            v_55 = Line_follower__St_1_Turnright;
          } else {
            v_55 = Line_follower__St_1_FindObstacle;
          };
          if (v_46) {
            v_57 = Line_follower__St_1_ObstacleDetected;
          } else {
            v_57 = v_55;
          };
          if (v_43) {
            s_1_St_1_FindObstacle = Line_follower__St_1_MoveAlong;
          } else {
            s_1_St_1_FindObstacle = v_57;
          };
          s_1 = s_1_St_1_FindObstacle;
          r_1 = r_1_St_1_FindObstacle;
          break;
        case Line_follower__St_1_Parked:
          s_1 = s_1_St_1_Parked;
          r_1 = r_1_St_1_Parked;
          break;
        case Line_follower__St_1_MoveStr:
          s_1 = s_1_St_1_MoveStr;
          r_1 = r_1_St_1_MoveStr;
          break;
        case Line_follower__St_1_ParkLeft:
          s_1 = s_1_St_1_ParkLeft;
          r_1 = r_1_St_1_ParkLeft;
          break;
        case Line_follower__St_1_ParkRight:
          s_1 = s_1_St_1_ParkRight;
          r_1 = r_1_St_1_ParkRight;
          break;
        case Line_follower__St_1_BlindForward:
          s_1 = s_1_St_1_BlindForward;
          r_1 = r_1_St_1_BlindForward;
          break;
        case Line_follower__St_1_ParkingCheck:
          s_1 = s_1_St_1_ParkingCheck;
          r_1 = r_1_St_1_ParkingCheck;
          break;
        case Line_follower__St_1_RightonObs:
          s_1 = s_1_St_1_RightonObs;
          r_1 = r_1_St_1_RightonObs;
          break;
        case Line_follower__St_1_ObstacleDetected:
          s_1 = s_1_St_1_ObstacleDetected;
          r_1 = r_1_St_1_ObstacleDetected;
          break;
        default:
          break;
      };
      ck_5 = s_1;
      switch (ck_5) {
        case Line_follower__St_1_Idle:
          leftEmp_St_2_Black_St_1_Idle = self->leftEmp_1;
          rightEmp_St_2_Black_St_1_Idle = self->rightEmp_1;
          v_r_St_2_Black_St_1_Idle = 50;
          v_l_St_2_Black_St_1_Idle = 50;
          dir_St_2_Black_St_1_Idle = 6;
          nr_1_St_1_Idle = false;
          ns_1_St_1_Idle = Line_follower__St_1_Idle;
          v_l_St_2_Black = v_l_St_2_Black_St_1_Idle;
          v_r_St_2_Black = v_r_St_2_Black_St_1_Idle;
          dir_St_2_Black = dir_St_2_Black_St_1_Idle;
          rightEmp_St_2_Black = rightEmp_St_2_Black_St_1_Idle;
          leftEmp_St_2_Black = leftEmp_St_2_Black_St_1_Idle;
          break;
        case Line_follower__St_1_Pid:
          leftEmp_St_2_Black_St_1_Pid = self->leftEmp_1;
          rightEmp_St_2_Black_St_1_Pid = self->rightEmp_1;
          v_280 = sen_array[4];
          v_279 = sen_array[3];
          v_278 = sen_array[2];
          v_277 = sen_array[1];
          v_276 = sen_array[0];
          dir_St_2_Black_St_1_Pid = 2;
          nr_1_St_1_Pid = false;
          ns_1_St_1_Pid = Line_follower__St_1_Pid;
          r_4 = (r_2||r_1);
          if (r_4) {
            Line_follower__pidController_reset(&self->pidController_1);
          };
          Line_follower__pidController_step(v_276, v_277, v_278, v_279,
                                            v_280,
                                            &Line_follower__pidController_out_st,
                                            &self->pidController_1);
          v_l_St_2_Black_St_1_Pid = Line_follower__pidController_out_st.v_l;
          v_r_St_2_Black_St_1_Pid = Line_follower__pidController_out_st.v_r;
          v_l_St_2_Black = v_l_St_2_Black_St_1_Pid;
          v_r_St_2_Black = v_r_St_2_Black_St_1_Pid;
          dir_St_2_Black = dir_St_2_Black_St_1_Pid;
          rightEmp_St_2_Black = rightEmp_St_2_Black_St_1_Pid;
          leftEmp_St_2_Black = leftEmp_St_2_Black_St_1_Pid;
          break;
        case Line_follower__St_1_Turnleft:
          leftEmp_St_2_Black_St_1_Turnleft = self->leftEmp_1;
          rightEmp_St_2_Black_St_1_Turnleft = self->rightEmp_1;
          v_r_St_2_Black_St_1_Turnleft = 90;
          v_l_St_2_Black_St_1_Turnleft = 90;
          dir_St_2_Black_St_1_Turnleft = 3;
          nr_1_St_1_Turnleft = false;
          ns_1_St_1_Turnleft = Line_follower__St_1_Turnleft;
          v_l_St_2_Black = v_l_St_2_Black_St_1_Turnleft;
          v_r_St_2_Black = v_r_St_2_Black_St_1_Turnleft;
          dir_St_2_Black = dir_St_2_Black_St_1_Turnleft;
          rightEmp_St_2_Black = rightEmp_St_2_Black_St_1_Turnleft;
          leftEmp_St_2_Black = leftEmp_St_2_Black_St_1_Turnleft;
          break;
        case Line_follower__St_1_Turnright:
          leftEmp_St_2_Black_St_1_Turnright = self->leftEmp_1;
          rightEmp_St_2_Black_St_1_Turnright = self->rightEmp_1;
          v_r_St_2_Black_St_1_Turnright = 90;
          v_l_St_2_Black_St_1_Turnright = 90;
          dir_St_2_Black_St_1_Turnright = 4;
          nr_1_St_1_Turnright = false;
          ns_1_St_1_Turnright = Line_follower__St_1_Turnright;
          v_l_St_2_Black = v_l_St_2_Black_St_1_Turnright;
          v_r_St_2_Black = v_r_St_2_Black_St_1_Turnright;
          dir_St_2_Black = dir_St_2_Black_St_1_Turnright;
          rightEmp_St_2_Black = rightEmp_St_2_Black_St_1_Turnright;
          leftEmp_St_2_Black = leftEmp_St_2_Black_St_1_Turnright;
          break;
        case Line_follower__St_1_Reverse:
          leftEmp_St_2_Black_St_1_Reverse = self->leftEmp_1;
          rightEmp_St_2_Black_St_1_Reverse = self->rightEmp_1;
          v_r_St_2_Black_St_1_Reverse = 50;
          v_l_St_2_Black_St_1_Reverse = 50;
          dir_St_2_Black_St_1_Reverse = 4;
          nr_1_St_1_Reverse = false;
          ns_1_St_1_Reverse = Line_follower__St_1_Reverse;
          v_l_St_2_Black = v_l_St_2_Black_St_1_Reverse;
          v_r_St_2_Black = v_r_St_2_Black_St_1_Reverse;
          dir_St_2_Black = dir_St_2_Black_St_1_Reverse;
          rightEmp_St_2_Black = rightEmp_St_2_Black_St_1_Reverse;
          leftEmp_St_2_Black = leftEmp_St_2_Black_St_1_Reverse;
          break;
        case Line_follower__St_1_ObstacleDetected:
          leftEmp_St_2_Black_St_1_ObstacleDetected = self->leftEmp_1;
          rightEmp_St_2_Black_St_1_ObstacleDetected = self->rightEmp_1;
          dir_St_2_Black_St_1_ObstacleDetected = 6;
          v_r_St_2_Black_St_1_ObstacleDetected = 40;
          v_l_St_2_Black_St_1_ObstacleDetected = 40;
          v_275 = (self->v_274-1);
          v_272 = (r_2||r_1);
          if (self->v_271) {
            v_273 = true;
          } else {
            v_273 = v_272;
          };
          if (v_273) {
            time = 6;
          } else {
            time = v_275;
          };
          v_270 = (time<=0);
          if (v_270) {
            nr_1_St_1_ObstacleDetected = true;
            ns_1_St_1_ObstacleDetected = Line_follower__St_1_RightonObs;
          } else {
            nr_1_St_1_ObstacleDetected = false;
            ns_1_St_1_ObstacleDetected = Line_follower__St_1_ObstacleDetected;
          };
          v_l_St_2_Black = v_l_St_2_Black_St_1_ObstacleDetected;
          v_r_St_2_Black = v_r_St_2_Black_St_1_ObstacleDetected;
          dir_St_2_Black = dir_St_2_Black_St_1_ObstacleDetected;
          rightEmp_St_2_Black = rightEmp_St_2_Black_St_1_ObstacleDetected;
          leftEmp_St_2_Black = leftEmp_St_2_Black_St_1_ObstacleDetected;
          break;
        case Line_follower__St_1_RightonObs:
          leftEmp_St_2_Black_St_1_RightonObs = self->leftEmp_1;
          rightEmp_St_2_Black_St_1_RightonObs = self->rightEmp_1;
          dir_St_2_Black_St_1_RightonObs = 4;
          v_r_St_2_Black_St_1_RightonObs = 40;
          v_l_St_2_Black_St_1_RightonObs = 40;
          nr_1_St_1_RightonObs = false;
          ns_1_St_1_RightonObs = Line_follower__St_1_RightonObs;
          v_l_St_2_Black = v_l_St_2_Black_St_1_RightonObs;
          v_r_St_2_Black = v_r_St_2_Black_St_1_RightonObs;
          dir_St_2_Black = dir_St_2_Black_St_1_RightonObs;
          rightEmp_St_2_Black = rightEmp_St_2_Black_St_1_RightonObs;
          leftEmp_St_2_Black = leftEmp_St_2_Black_St_1_RightonObs;
          break;
        case Line_follower__St_1_MoveAlong:
          leftEmp_St_2_Black_St_1_MoveAlong = self->leftEmp_1;
          rightEmp_St_2_Black_St_1_MoveAlong = self->rightEmp_1;
          dir_St_2_Black_St_1_MoveAlong = 6;
          v_r_St_2_Black_St_1_MoveAlong = 40;
          v_l_St_2_Black_St_1_MoveAlong = 40;
          nr_1_St_1_MoveAlong = false;
          ns_1_St_1_MoveAlong = Line_follower__St_1_MoveAlong;
          v_l_St_2_Black = v_l_St_2_Black_St_1_MoveAlong;
          v_r_St_2_Black = v_r_St_2_Black_St_1_MoveAlong;
          dir_St_2_Black = dir_St_2_Black_St_1_MoveAlong;
          rightEmp_St_2_Black = rightEmp_St_2_Black_St_1_MoveAlong;
          leftEmp_St_2_Black = leftEmp_St_2_Black_St_1_MoveAlong;
          break;
        case Line_follower__St_1_FindObstacle:
          leftEmp_St_2_Black_St_1_FindObstacle = self->leftEmp_1;
          rightEmp_St_2_Black_St_1_FindObstacle = self->rightEmp_1;
          dir_St_2_Black_St_1_FindObstacle = 6;
          v_r_St_2_Black_St_1_FindObstacle = 25;
          v_l_St_2_Black_St_1_FindObstacle = 50;
          nr_1_St_1_FindObstacle = false;
          ns_1_St_1_FindObstacle = Line_follower__St_1_FindObstacle;
          v_l_St_2_Black = v_l_St_2_Black_St_1_FindObstacle;
          v_r_St_2_Black = v_r_St_2_Black_St_1_FindObstacle;
          dir_St_2_Black = dir_St_2_Black_St_1_FindObstacle;
          rightEmp_St_2_Black = rightEmp_St_2_Black_St_1_FindObstacle;
          leftEmp_St_2_Black = leftEmp_St_2_Black_St_1_FindObstacle;
          break;
        case Line_follower__St_1_ParkingCheck:
          dir_St_2_Black_St_1_ParkingCheck = 6;
          v_r_St_2_Black_St_1_ParkingCheck = 0;
          v_l_St_2_Black_St_1_ParkingCheck = 0;
          v_266 = (top_l==0);
          v_265 = (self->leftEmp_1+1);
          v_262 = (top_l==1);
          v_258 = (top_r==0);
          v_257 = (self->rightEmp_1+1);
          v_254 = (top_r==1);
          v_253 = (self->v_252-1);
          v_250 = (r_2||r_1);
          if (self->v_249) {
            v_251 = true;
          } else {
            v_251 = v_250;
          };
          if (v_251) {
            time_1 = 50;
          } else {
            time_1 = v_253;
          };
          v_267 = (time_1==1);
          v_268 = (v_266&&v_267);
          if (v_268) {
            v_269 = 0;
          } else {
            v_269 = self->leftEmp_1;
          };
          v_263 = (time_1==1);
          v_264 = (v_262&&v_263);
          if (v_264) {
            leftEmp_St_2_Black_St_1_ParkingCheck = v_265;
          } else {
            leftEmp_St_2_Black_St_1_ParkingCheck = v_269;
          };
          v_259 = (time_1==1);
          v_260 = (v_258&&v_259);
          if (v_260) {
            v_261 = 0;
          } else {
            v_261 = self->rightEmp_1;
          };
          v_255 = (time_1==1);
          v_256 = (v_254&&v_255);
          if (v_256) {
            rightEmp_St_2_Black_St_1_ParkingCheck = v_257;
          } else {
            rightEmp_St_2_Black_St_1_ParkingCheck = v_261;
          };
          v_243 = (time_1==0);
          v_l_St_2_Black = v_l_St_2_Black_St_1_ParkingCheck;
          v_r_St_2_Black = v_r_St_2_Black_St_1_ParkingCheck;
          dir_St_2_Black = dir_St_2_Black_St_1_ParkingCheck;
          rightEmp_St_2_Black = rightEmp_St_2_Black_St_1_ParkingCheck;
          leftEmp_St_2_Black = leftEmp_St_2_Black_St_1_ParkingCheck;
          break;
        case Line_follower__St_1_BlindForward:
          leftEmp_St_2_Black_St_1_BlindForward = self->leftEmp_1;
          rightEmp_St_2_Black_St_1_BlindForward = self->rightEmp_1;
          dir_St_2_Black_St_1_BlindForward = 2;
          v_237 = (self->v_236-1);
          v_234 = (r_2||r_1);
          if (self->v_233) {
            v_235 = true;
          } else {
            v_235 = v_234;
          };
          if (v_235) {
            time_2 = 30;
          } else {
            time_2 = v_237;
          };
          v_232 = (time_2==0);
          if (v_232) {
            nr_1_St_1_BlindForward = true;
            ns_1_St_1_BlindForward = Line_follower__St_1_ParkingCheck;
          } else {
            nr_1_St_1_BlindForward = false;
            ns_1_St_1_BlindForward = Line_follower__St_1_BlindForward;
          };
          r_3 = (r_2||r_1);
          if (r_3) {
            Line_follower__pidController_reset(&self->pidController);
          };
          Line_follower__pidController_step(sen0, sen1, sen2, sen3, sen4,
                                            &Line_follower__pidController_out_st,
                                            &self->pidController);
          v_l_St_2_Black_St_1_BlindForward = Line_follower__pidController_out_st.v_l;
          v_r_St_2_Black_St_1_BlindForward = Line_follower__pidController_out_st.v_r;
          v_l_St_2_Black = v_l_St_2_Black_St_1_BlindForward;
          v_r_St_2_Black = v_r_St_2_Black_St_1_BlindForward;
          dir_St_2_Black = dir_St_2_Black_St_1_BlindForward;
          rightEmp_St_2_Black = rightEmp_St_2_Black_St_1_BlindForward;
          leftEmp_St_2_Black = leftEmp_St_2_Black_St_1_BlindForward;
          break;
        case Line_follower__St_1_ParkRight:
          leftEmp_St_2_Black_St_1_ParkRight = self->leftEmp_1;
          rightEmp_St_2_Black_St_1_ParkRight = self->rightEmp_1;
          dir_St_2_Black_St_1_ParkRight = 4;
          v_r_St_2_Black_St_1_ParkRight = 40;
          v_l_St_2_Black_St_1_ParkRight = 40;
          v_231 = (self->v_230-1);
          v_228 = (r_2||r_1);
          if (self->v_227) {
            v_229 = true;
          } else {
            v_229 = v_228;
          };
          if (v_229) {
            time_3 = 20;
          } else {
            time_3 = v_231;
          };
          v_226 = (time_3==0);
          if (v_226) {
            nr_1_St_1_ParkRight = true;
            ns_1_St_1_ParkRight = Line_follower__St_1_MoveStr;
          } else {
            nr_1_St_1_ParkRight = false;
            ns_1_St_1_ParkRight = Line_follower__St_1_ParkRight;
          };
          v_l_St_2_Black = v_l_St_2_Black_St_1_ParkRight;
          v_r_St_2_Black = v_r_St_2_Black_St_1_ParkRight;
          dir_St_2_Black = dir_St_2_Black_St_1_ParkRight;
          rightEmp_St_2_Black = rightEmp_St_2_Black_St_1_ParkRight;
          leftEmp_St_2_Black = leftEmp_St_2_Black_St_1_ParkRight;
          break;
        case Line_follower__St_1_ParkLeft:
          leftEmp_St_2_Black_St_1_ParkLeft = self->leftEmp_1;
          rightEmp_St_2_Black_St_1_ParkLeft = self->rightEmp_1;
          dir_St_2_Black_St_1_ParkLeft = 3;
          v_r_St_2_Black_St_1_ParkLeft = 40;
          v_l_St_2_Black_St_1_ParkLeft = 40;
          v_225 = (self->v_224-1);
          v_222 = (r_2||r_1);
          if (self->v_221) {
            v_223 = true;
          } else {
            v_223 = v_222;
          };
          if (v_223) {
            time_4 = 20;
          } else {
            time_4 = v_225;
          };
          v_220 = (time_4==0);
          if (v_220) {
            nr_1_St_1_ParkLeft = true;
            ns_1_St_1_ParkLeft = Line_follower__St_1_MoveStr;
          } else {
            nr_1_St_1_ParkLeft = false;
            ns_1_St_1_ParkLeft = Line_follower__St_1_ParkLeft;
          };
          v_l_St_2_Black = v_l_St_2_Black_St_1_ParkLeft;
          v_r_St_2_Black = v_r_St_2_Black_St_1_ParkLeft;
          dir_St_2_Black = dir_St_2_Black_St_1_ParkLeft;
          rightEmp_St_2_Black = rightEmp_St_2_Black_St_1_ParkLeft;
          leftEmp_St_2_Black = leftEmp_St_2_Black_St_1_ParkLeft;
          break;
        case Line_follower__St_1_MoveStr:
          leftEmp_St_2_Black_St_1_MoveStr = self->leftEmp_1;
          rightEmp_St_2_Black_St_1_MoveStr = self->rightEmp_1;
          dir_St_2_Black_St_1_MoveStr = 6;
          v_r_St_2_Black_St_1_MoveStr = 60;
          v_l_St_2_Black_St_1_MoveStr = 60;
          v_219 = (self->v_218-1);
          v_216 = (r_2||r_1);
          if (self->v_215) {
            v_217 = true;
          } else {
            v_217 = v_216;
          };
          if (v_217) {
            time_5 = 30;
          } else {
            time_5 = v_219;
          };
          v_214 = (time_5==0);
          if (v_214) {
            nr_1_St_1_MoveStr = true;
            ns_1_St_1_MoveStr = Line_follower__St_1_Parked;
          } else {
            nr_1_St_1_MoveStr = false;
            ns_1_St_1_MoveStr = Line_follower__St_1_MoveStr;
          };
          v_l_St_2_Black = v_l_St_2_Black_St_1_MoveStr;
          v_r_St_2_Black = v_r_St_2_Black_St_1_MoveStr;
          dir_St_2_Black = dir_St_2_Black_St_1_MoveStr;
          rightEmp_St_2_Black = rightEmp_St_2_Black_St_1_MoveStr;
          leftEmp_St_2_Black = leftEmp_St_2_Black_St_1_MoveStr;
          break;
        case Line_follower__St_1_Parked:
          leftEmp_St_2_Black_St_1_Parked = self->leftEmp_1;
          rightEmp_St_2_Black_St_1_Parked = self->rightEmp_1;
          dir_St_2_Black_St_1_Parked = 6;
          v_r_St_2_Black_St_1_Parked = 0;
          v_l_St_2_Black_St_1_Parked = 0;
          nr_1_St_1_Parked = false;
          ns_1_St_1_Parked = Line_follower__St_1_Parked;
          v_l_St_2_Black = v_l_St_2_Black_St_1_Parked;
          v_r_St_2_Black = v_r_St_2_Black_St_1_Parked;
          dir_St_2_Black = dir_St_2_Black_St_1_Parked;
          rightEmp_St_2_Black = rightEmp_St_2_Black_St_1_Parked;
          leftEmp_St_2_Black = leftEmp_St_2_Black_St_1_Parked;
          break;
        default:
          break;
      };
      _out->v_l = v_l_St_2_Black;
      _out->v_r = v_r_St_2_Black;
      _out->dir = dir_St_2_Black;
      rightEmp = rightEmp_St_2_Black;
      leftEmp = leftEmp_St_2_Black;
      switch (ck_5) {
        case Line_follower__St_1_ParkingCheck:
          v_241 = (rightEmp<2);
          v_240 = (leftEmp<2);
          v_242 = (v_240&&v_241);
          v_244 = (v_242&&v_243);
          if (v_244) {
            v_246 = true;
            v_245 = Line_follower__St_1_BlindForward;
          } else {
            v_246 = false;
            v_245 = Line_follower__St_1_ParkingCheck;
          };
          v_239 = (leftEmp==2);
          if (v_239) {
            v_248 = true;
            v_247 = Line_follower__St_1_ParkLeft;
          } else {
            v_248 = v_246;
            v_247 = v_245;
          };
          v_238 = (rightEmp==2);
          if (v_238) {
            nr_1_St_1_ParkingCheck = true;
            ns_1_St_1_ParkingCheck = Line_follower__St_1_ParkRight;
          } else {
            nr_1_St_1_ParkingCheck = v_248;
            ns_1_St_1_ParkingCheck = v_247;
          };
          ns_1 = ns_1_St_1_ParkingCheck;
          nr_1 = nr_1_St_1_ParkingCheck;
          self->v_252 = time_1;
          self->v_249 = false;
          break;
        case Line_follower__St_1_Parked:
          ns_1 = ns_1_St_1_Parked;
          nr_1 = nr_1_St_1_Parked;
          break;
        case Line_follower__St_1_MoveStr:
          ns_1 = ns_1_St_1_MoveStr;
          nr_1 = nr_1_St_1_MoveStr;
          self->v_218 = time_5;
          self->v_215 = false;
          break;
        case Line_follower__St_1_ParkLeft:
          ns_1 = ns_1_St_1_ParkLeft;
          nr_1 = nr_1_St_1_ParkLeft;
          self->v_224 = time_4;
          self->v_221 = false;
          break;
        case Line_follower__St_1_ParkRight:
          ns_1 = ns_1_St_1_ParkRight;
          nr_1 = nr_1_St_1_ParkRight;
          self->v_230 = time_3;
          self->v_227 = false;
          break;
        case Line_follower__St_1_BlindForward:
          ns_1 = ns_1_St_1_BlindForward;
          nr_1 = nr_1_St_1_BlindForward;
          self->v_236 = time_2;
          self->v_233 = false;
          break;
        case Line_follower__St_1_FindObstacle:
          ns_1 = ns_1_St_1_FindObstacle;
          nr_1 = nr_1_St_1_FindObstacle;
          break;
        case Line_follower__St_1_MoveAlong:
          ns_1 = ns_1_St_1_MoveAlong;
          nr_1 = nr_1_St_1_MoveAlong;
          break;
        case Line_follower__St_1_RightonObs:
          ns_1 = ns_1_St_1_RightonObs;
          nr_1 = nr_1_St_1_RightonObs;
          break;
        case Line_follower__St_1_ObstacleDetected:
          ns_1 = ns_1_St_1_ObstacleDetected;
          nr_1 = nr_1_St_1_ObstacleDetected;
          self->v_274 = time;
          self->v_271 = false;
          break;
        case Line_follower__St_1_Reverse:
          ns_1 = ns_1_St_1_Reverse;
          nr_1 = nr_1_St_1_Reverse;
          break;
        case Line_follower__St_1_Turnright:
          ns_1 = ns_1_St_1_Turnright;
          nr_1 = nr_1_St_1_Turnright;
          break;
        case Line_follower__St_1_Turnleft:
          ns_1 = ns_1_St_1_Turnleft;
          nr_1 = nr_1_St_1_Turnleft;
          break;
        case Line_follower__St_1_Pid:
          ns_1 = ns_1_St_1_Pid;
          nr_1 = nr_1_St_1_Pid;
          break;
        case Line_follower__St_1_Idle:
          ns_1 = ns_1_St_1_Idle;
          nr_1 = nr_1_St_1_Idle;
          break;
        default:
          break;
      };
      break;
    default:
      break;
  };
  self->leftEmp_1 = leftEmp;
  self->rightEmp_1 = rightEmp;
  self->pnr_2 = nr_2;
  self->ck = ns_2;
  switch (ck_1) {
    case Line_follower__St_2_White:
      self->v_330 = nr;
      self->v_324 = ns;
      break;
    case Line_follower__St_2_Black:
      self->v_281 = nr_1;
      self->v_213 = ns_1;
      break;
    default:
      break;
  };;
}

