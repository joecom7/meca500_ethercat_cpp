#pragma once

/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: jacobian_meca.c
 *
 * MATLAB Coder version            : 5.3
 * C/C++ source code generated on  : 27-Jul-2023 11:55:43
 */

/* Include Files */ //test
#include <math.h>

/* Function Definitions */
/*
 * JACOBIAN_MECA
 *     J = JACOBIAN_MECA(Q1,Q2,Q3,Q4,Q5,Q6)
 *
 * Arguments    : double q1
 *                double q2
 *                double q3
 *                double q4
 *                double q5
 *                double q6
 *                double J[36]
 * Return Type  : void
 */
void jacobian_meca(double q1, double q2, double q3, double q4, double q5,
                   double q6, double J[36])
{
  double b_t431_tmp;
  double ct_idx_27;
  double ct_idx_28;
  double ct_idx_39;
  double ct_idx_44;
  double ct_idx_53;
  double ct_idx_55;
  double ct_idx_72;
  double ct_idx_75;
  double ct_idx_81;
  double t10;
  double t107;
  double t109;
  double t11;
  double t110;
  double t12;
  double t125;
  double t13;
  double t147;
  double t18;
  double t184;
  double t19;
  double t198;
  double t2;
  double t20;
  double t203;
  double t215;
  double t22;
  double t225;
  double t23;
  double t24;
  double t25;
  double t26;
  double t262;
  double t27;
  double t295;
  double t3;
  double t301;
  double t303;
  double t304;
  double t305;
  double t31;
  double t317;
  double t317_tmp;
  double t319;
  double t323;
  double t328;
  double t329;
  double t330;
  double t337;
  double t339;
  double t340;
  double t343;
  double t343_tmp;
  double t348;
  double t357;
  double t36;
  double t365;
  double t375;
  double t377;
  double t383;
  double t386;
  double t392;
  double t394;
  double t396;
  double t4;
  double t40;
  double t403;
  double t406;
  double t407_tmp;
  double t409;
  double t41;
  double t42;
  double t421;
  double t424;
  double t431;
  double t431_tmp;
  double t434;
  double t436;
  double t439;
  double t44;
  double t440;
  double t452;
  double t452_tmp;
  double t453;
  double t46;
  double t464_tmp;
  double t465;
  double t474;
  double t478;
  double t48;
  double t49;
  double t490;
  double t491;
  double t5;
  double t50;
  double t51;
  double t54;
  double t56;
  double t6;
  double t60;
  double t61;
  double t62;
  double t7;
  double t73;
  double t74;
  double t75;
  double t76;
  double t77;
  double t78;
  double t79;
  double t8;
  double t80;
  double t81;
  double t82;
  double t83;
  double t84;
  double t85;
  double t86;
  double t87;
  double t88;
  double t89;
  double t9;
  double t90;
  double t91;
  double t95;
  double t98;
  /*     This function was generated by the Symbolic Math Toolbox version 9.0.
   */
  /*     27-Jul-2023 11:24:02 */
  q2 = -q2 + 1.5707963267948966;
  q3 = -q3;
  q5 = -q5;
  q6 += 3.1415926535897931;
  t2 = cos(q1);
  t3 = cos(q2);
  t4 = cos(q3);
  t5 = cos(q4);
  t6 = cos(q5);
  t7 = cos(q6);
  t8 = sin(q1);
  t9 = sin(q2);
  t10 = sin(q3);
  t11 = sin(q4);
  t12 = sin(q5);
  t13 = sin(q6);
  t18 = q1 + q2;
  t19 = q2 + q3;
  t20 = t3 * 0.13500000000021831;
  t22 = t2 * 6.1232339957279222E-17;
  t23 = t5 * 6.1232339957279222E-17;
  t24 = t6 * 6.1232339957279222E-17;
  t25 = t7 * 6.1232339957279222E-17;
  t26 = t6 * 0.069999999999936335;
  t27 = t4 * 0.038000000000010907;
  t31 = t5 * 3.749399456649515E-33;
  t36 = t6 * 4.2862637970161088E-18;
  t40 = t11 * -7.3478807948775456E-18;
  t41 = t11 * 7.3478807948775456E-18;
  t42 = t4 * 5.0616892664813286E-34;
  t44 = t6 * 2.326828918382517E-18;
  t46 = t2 * 2.2958450216612079E-49;
  t48 = t8 * 6.1232339957279222E-17;
  t49 = t11 * -6.1232339957279222E-17;
  t50 = t11 * 6.1232339957279222E-17;
  t51 = t13 * -6.1232339957279222E-17;
  t54 = t11 * 4.499279347991189E-34;
  t56 = t4 * 3.0993907792407628E-50;
  t60 = t13 * 3.749399456649515E-33;
  t61 = t5 * -1.424771793527741E-34;
  t62 = t5 * 1.424771793527741E-34;
  t73 = t5 * -8.7242110823116552E-51;
  t74 = t5 * 8.7242110823116552E-51;
  t75 = cos(t18);
  t76 = cos(t19);
  t77 = q3 + t18;
  t78 = sin(t18);
  t79 = sin(t19);
  t80 = t5 * t7;
  t81 = t6 * t7;
  t83 = t5 * t12;
  t84 = t5 * t13;
  t85 = t7 * t11;
  t86 = t6 * t13;
  t87 = t7 * t12;
  t89 = t11 * t12;
  t90 = t11 * t13;
  t91 = t12 * t13;
  t18 = q1 + -q2;
  t19 += -q1;
  t147 = t6 * t11 * -4.499279347991189E-34;
  t82 = cos(t77);
  t88 = sin(t77);
  t77 = t75 * 0.5;
  t95 = cos(t18);
  t98 = t76 * 6.1232339957279222E-17;
  t107 = t76 * 3.749399456649515E-33;
  t109 = t78 * 0.5;
  t110 = sin(t18);
  t125 = t83 * -7.3478807948775456E-18;
  t184 = t89 * -1.424771793527741E-34;
  t18 = cos(t19);
  t198 = sin(t19);
  t203 = t11 * t79;
  t215 = t49 * t79;
  t317_tmp = t5 * t6;
  t317 = (t23 + t89) + t317_tmp * -6.1232339957279222E-17;
  t225 = t203 * -3.749399456649515E-33;
  t19 = t95 * 0.5;
  t262 = t110 * 0.5;
  t303 = t81 + t12 * t51;
  t304 = t86 + t12 * t25;
  t305 = t87 + t13 * t24;
  t319 = (t25 + t91) + t81 * -6.1232339957279222E-17;
  t323 = (t49 + t83) + t11 * t24;
  t25 = (t5 * 4.2862637970161088E-18 + t317_tmp * -4.2862637970161088E-18) +
        t89 * 0.069999999999936335;
  t337 =
      (t11 * -4.2862637970161088E-18 + t83 * 0.069999999999936335) + t11 * t36;
  t377 = (t24 + t317) + 2.2958450216612079E-49;
  t295 = t5 * (t107 + 3.749399456649515E-33);
  t301 = t23 * (t107 + 3.749399456649515E-33);
  t328 = t51 + t305;
  t329 = t82 * 0.5 + t18 * 0.5;
  t330 = t88 * 0.5 + t198 * -0.5;
  t343_tmp = t4 * (t77 - t19);
  t343 = t343_tmp * 3.749399456649515E-33;
  t357 = (t2 + t82 * -3.0616169978639611E-17) + t18 * 3.0616169978639611E-17;
  t18 = (-t8 + t88 * 3.0616169978639611E-17) + t198 * 3.0616169978639611E-17;
  t386 = (t36 + t25) + 7.3478807948775456E-18;
  t339 = t10 * (t77 + t19);
  t340 = t10 * (t109 + t262);
  t77 = t5 * t79 + t11 * (t98 + 6.1232339957279222E-17);
  t365 = t11 * t329;
  t375 = t50 * t330;
  t383 = t50 * t329;
  t392 = t23 * t357;
  t394 = t5 * t18;
  t396 = t23 * t18;
  t19 = ((t76 + t215) + t295) - 3.749399456649515E-33;
  t406 = (t84 + t11 * t303) + t23 * t305;
  t407_tmp = t7 * t24 - t91;
  t51 = (t85 + t5 * t304) + -t49 * t407_tmp;
  t409 = (t90 + -(t5 * t303)) + t50 * t305;
  t82 = (t80 + -(t11 * t304)) + t23 * t407_tmp;
  t440 = ((t27 + t10 * (t26 + 0.1199999999998909)) + t4 * t337) +
         t10 * t25 * -6.1232339957279222E-17;
  t25 = ((t10 * 0.038000000000010907 + -(t4 * (t26 + 0.1199999999998909))) +
         t10 * t337) +
        t4 * t25 * 6.1232339957279222E-17;
  t348 = t339 * 3.749399456649515E-33;
  t403 = t6 * t19;
  t421 = t5 * (t88 * 8.1129638414606682E+31 - t198 * 8.1129638414606682E+31) *
             -6.1629758220391547E-33 +
         t11 * t357;
  t431_tmp = t5 * t329 - t11 * t18;
  b_t431_tmp = t12 * t431_tmp;
  t431 = b_t431_tmp * 6.1232339957279222E-17;
  t436 =
      ((t60 + t87 * -6.1232339957279222E-17) + t86 * -3.749399456649515E-33) +
      t406;
  t439 = ((t7 * 3.749399456649515E-33 + t81 * -3.749399456649515E-33) +
          t12 * (t13 * 6.1232339957279222E-17)) +
         t82;
  t75 = (((t2 * -6.1232339957279222E-17 + t340) +
          t4 * (t75 * 4.0564819207303341E+31 - t95 * 4.0564819207303341E+31) *
              -1.2325951644078309E-32) +
         t375) +
        t392;
  t95 = (((t48 + t339) +
          t4 * (t78 * 8.1129638414606682E+31 - t110 * 8.1129638414606682E+31) *
              6.1629758220391547E-33) +
         t383) +
        t396;
  t424 = t12 * t421;
  t434 = t6 * t77 + t12 * t19;
  t452_tmp = t12 * t77;
  t452 = ((((t107 + t50 * t79) + -t295) + -t452_tmp) + t403) -
         1.405799628556498E-65;
  t453 = ((((t98 + t203) + -(t5 * (t98 + 6.1232339957279222E-17))) +
           t12 * (t23 * t79 + t50 * (t98 + 6.1232339957279222E-17))) +
          -(t6 * (((t98 + t225) + t301) - 2.2958450216612079E-49))) -
         2.2958450216612079E-49;
  t464_tmp = t6 * t95;
  t465 = t24 * t95;
  t203 = (t10 * t328 + t4 * t409) + t10 * t406 * 6.1232339957279222E-17;
  t409 = (t4 * t328 + t4 * t406 * 6.1232339957279222E-17) + -(t10 * t409);
  t98 = (t4 * t319 + t10 * t51) + t4 * t82 * -6.1232339957279222E-17;
  t78 = (-(t10 * t319) + t4 * t51) + t10 * t82 * 6.1232339957279222E-17;
  t490 = (t9 * 0.13500000000021831 + t9 * t440) + t3 * t25;
  t491 = (t20 + t3 * t440) + -(t9 * t25);
  t474 = t3 * t409;
  t478 = t3 * t98;
  ct_idx_27 = (t7 * 4.2862637970161088E-18 + t81 * -4.2862637970161088E-18) +
              t91 * 0.069999999999936335;
  ct_idx_28 =
      (t13 * -4.2862637970161088E-18 + t87 * 0.069999999999936335) + t13 * t36;
  ct_idx_39 = t11 * t330;
  ct_idx_44 = t5 * t357;
  ct_idx_53 =
      ((((((t6 * -0.038000000000010907 + t40) + t62) + t6 * t41) + t6 * t61) +
        t89 * 2.326828918382517E-18) +
       t83 * 0.1199999999998909) -
      1.424771793527741E-34;
  ct_idx_55 = t424 * -6.1232339957279222E-17;
  ct_idx_72 = t24 * t75;
  t337 = t4 * t6;
  t198 = t4 * t5;
  t24 = t10 * t11;
  t36 = t10 * t83;
  t88 = t4 * t89;
  t110 = t6 * t10 * t11;
  ct_idx_75 = ((((((((((((((t6 * 0.038000000000010907 + t41) + t42) + t61) +
                         t337 * 0.13500000000021831) +
                        t6 * t40) +
                       t198 * -5.0616892664813286E-34) +
                      t6 * t62) +
                     t24 * 8.26636589424986E-18) +
                    t89 * -2.326828918382517E-18) +
                   t83 * -0.1199999999998909) +
                  t6 * (t5 * t42)) +
                 t36 * -0.13500000000021831) +
                t88 * -8.26636589424986E-18) +
               t110 * -8.26636589424986E-18) +
              1.424771793527741E-34;
  ct_idx_81 = -(t9 * t203);
  t406 = t9 * t78;
  t18 = t12 * t85;
  t84 = (((((((((((((((t7 * 2.326828918382517E-18 +
                       t13 * 2.6245796196580241E-34) +
                      t80 * -2.326828918382517E-18) +
                     t81 * -2.326828918382517E-18) +
                    t84 * 0.069999999999936335) +
                   t87 * -4.2862637970161088E-18) +
                  t86 * -2.6245796196580241E-34) +
                 t91 * 0.038000000000010907) +
                t85 * 0.1199999999998909) +
               t26 * t85) +
              t73 * t81) +
             t44 * t90) +
            t12 * t80 * 1.1634144591906279E-17) +
           t62 * t91) +
          t18 * 1.424771793527741E-34) +
         t6 * t84 * 0.1199999999998909) +
        t13 * t89 * -1.1634144591906279E-17;
  t61 = (((((((((((((((t7 * 2.6245796196580241E-34 +
                       t13 * -2.326828918382517E-18) +
                      t80 * 0.069999999999936335) +
                     t81 * -2.6245796196580241E-34) +
                    t87 * 0.038000000000010907) +
                   t5 * (t13 * 2.326828918382517E-18)) +
                  t13 * t44) +
                 t12 * (t13 * 4.2862637970161088E-18)) +
                t90 * -0.1199999999998909) +
               t44 * t85) +
              t11 * t86 * -0.069999999999936335) +
             t62 * t87) +
            t74 * t86) +
           t6 * t80 * 0.1199999999998909) +
          t13 * t83 * -1.1634144591906279E-17) +
         t18 * -1.1634144591906279E-17) +
        t13 * t184;
  t42 = (((((t31 + t6 * 3.749399456649515E-33) +
            t317_tmp * -3.749399456649515E-33) +
           t12 * t50) +
          t9 * ((t10 * (t6 + 3.749399456649515E-33) + t4 * t323) +
                t10 * t317 * -6.1232339957279222E-17)) +
         t3 * ((-(t4 * (t6 + 3.749399456649515E-33)) + t10 * t323) +
               t4 * t317 * 6.1232339957279222E-17)) +
        1.405799628556498E-65;
  t40 = t6 * t421 + t12 * t75;
  t82 = -t6 * t431_tmp + t12 * t95;
  t41 = t6 * t75;
  t431_tmp = (((((t46 + t343) + t340 * -3.749399456649515E-33) + t375) + t392) +
              t424) +
             -t41;
  t421 = t4 * (t109 - t262);
  t51 = (((((t8 * -3.749399456649515E-33 + t339 * -6.1232339957279222E-17) +
            t421 * -6.1232339957279222E-17) +
           t365) +
          t394) +
         t431) +
        t465;
  t18 = t3 * t5;
  t19 = t3 * t4;
  t77 = t9 * t10;
  t25 = t18 * t6;
  t95 = t19 * t5;
  t24 = (((((((((((((((((((((((((((((((((((((((((t44 + t54) +
                                                t3 * 3.0993907792407628E-50) +
                                               t56) +
                                              t73) +
                                             t18 * 8.26636589424986E-18) +
                                            t3 * t6 * 8.26636589424986E-18) +
                                           t337 * 8.26636589424986E-18) +
                                          t125) +
                                         t147) +
                                        t198 * -3.0993907792407628E-50) +
                                       t19 * 8.7242110823116552E-51) +
                                      t6 * t74) +
                                     t24 * 5.0616892664813286E-34) +
                                    t184) +
                                   t77 * -8.7242110823116552E-51) +
                                  t25 * -8.26636589424986E-18) +
                                 t18 * t10 * 7.3478807948775456E-18) +
                                t198 * t9 * 7.3478807948775456E-18) +
                               t95 * 2.326828918382517E-18) +
                              t19 * t44) +
                             t19 * t54) +
                            t6 * (t5 * t56)) +
                           t20 * t89) +
                          t36 * -8.26636589424986E-18) +
                         t88 * -5.0616892664813286E-34) +
                        t110 * -5.0616892664813286E-34) +
                       t5 * t9 * t10 * -2.326828918382517E-18) +
                      t6 * t9 * t10 * -2.326828918382517E-18) +
                     t77 * t11 * -4.499279347991189E-34) +
                    t19 * t125) +
                   t25 * t10 * -7.3478807948775456E-18) +
                  t198 * t6 * t9 * -7.3478807948775456E-18) +
                 t95 * t6 * -2.326828918382517E-18) +
                t19 * t147) +
               t3 * t27 * t89) +
              t77 * (t83 * 7.3478807948775456E-18)) +
             t5 * (t77 * t44)) +
            t77 * (t6 * t54)) +
           t77 * t89 * -0.038000000000010907) +
          t3 * t10 * t89 * 0.1199999999998909) +
         t4 * t9 * t89 * 0.1199999999998909) +
        8.7242110823116552E-51;
  t36 = t13 * t434 + t7 * t453;
  t357 = t3 * t203 + t9 * t409;
  t79 = t478 + t406;
  t440 = t9 * t98 + -(t3 * t78);
  t19 = (((((t2 * 3.749399456649515E-33 + t343_tmp * 6.1232339957279222E-17) +
            t340 * -6.1232339957279222E-17) +
           ct_idx_39) +
          ct_idx_44) +
         ct_idx_55) +
        ct_idx_72;
  t98 = ((((((t13 * t23 + t13 * 2.2958450216612079E-49) +
             t87 * -3.749399456649515E-33) +
            t86 * -2.2958450216612079E-49) +
           t31 * t305) +
          t50 * t303) +
         t474) +
        ct_idx_81;
  t203 = (t8 * t386 + t2 * t491) + t8 * t490 * -6.1232339957279222E-17;
  t18 = (-(t2 * t386) + t8 * t491) + t22 * t490;
  t75 = ((((((t7 * t23 + t7 * 2.2958450216612079E-49) +
             t81 * -2.2958450216612079E-49) +
            t12 * t60) +
           t49 * t304) +
          t5 * t407_tmp * 3.749399456649515E-33) +
         -t478) +
        -t406;
  t78 = t82 * t7 + t13 * t51;
  t406 = t13 * t82 + -(t51 * t7);
  t409 = t40 * t7 + t13 * t19;
  t198 = t7 * t434 - t13 * t453;
  t88 = (-(t377 * t452) + -(t439 * t36)) + t436 * t198;
  t95 = t491 * t79 + t490 * t440;
  t110 = t421 * 3.749399456649515E-33;
  t82 =
      (((((-(t8 * -2.2958450216612079E-49) + t348) - t383) - t396) + t464_tmp) +
       t110) +
      b_t431_tmp;
  t337 = (t377 * t82 + -(t436 * t78)) + t439 * t406;
  t51 = t13 * t40 - t7 * t19;
  t25 = (-(t377 * t431_tmp) + -(t436 * t409)) + t439 * t51;
  t77 = t474 + ct_idx_81;
  t19 = t203 * ((t2 * t436 + t8 * t357) + -t22 * t77) +
        -(t18 * ((-(t8 * t436) + t2 * t357) + t48 * t77));
  t18 = t203 * ((t2 * t439 + t22 * t79) - t8 * t440) +
        t18 * ((t8 * t439 + t2 * t440) + t8 * t79 * 6.1232339957279222E-17);
  J[0] = (t78 * t19 - t406 * t18) - t24 * t82;
  J[1] = (t431_tmp * t24 + t409 * t19) - t18 * t51;
  J[2] = (t452 * t24 + t36 * t18) - t19 * t198;
  J[3] = (-(t98 * t78) + t75 * t406) + t42 * t82;
  J[4] = (-(t42 * t431_tmp) - t98 * t409) + t75 * t51;
  J[5] = (-(t452 * t42) - t36 * t75) + t98 * t198;
  t18 = t490 * t357 + t491 * t77;
  J[6] = (-(t406 * t95) - t78 * t18) - ct_idx_75 * t82;
  J[7] = (ct_idx_75 * t431_tmp - t95 * t51) - t409 * t18;
  J[8] = (t452 * ct_idx_75 + t36 * t95) + t198 * t18;
  J[9] = t337;
  J[10] = t25;
  J[11] = t88;
  J[12] = (-(t84 * t406) - t61 * t78) + ct_idx_53 * t82;
  J[13] = (-(ct_idx_53 * t431_tmp) - t61 * t409) - t84 * t51;
  J[14] = (-(ct_idx_53 * t452) + t84 * t36) + t61 * t198;
  J[15] = t337;
  J[16] = t25;
  J[17] = t88;
  J[18] = -(ct_idx_27 * t78) + ct_idx_28 * t406;
  J[19] = -(ct_idx_27 * t409) + ct_idx_28 * t51;
  J[20] = -(ct_idx_28 * t36) + ct_idx_27 * t198;
  J[21] = (t319 * t406 + t328 * t78) + (t6 + 3.749399456649515E-33) * t82;
  J[22] =
      (-((t6 + 3.749399456649515E-33) * t431_tmp) + t328 * t409) + t319 * t51;
  J[23] = (-((t6 + 3.749399456649515E-33) * t452) - t319 * t36) - t328 * t198;
  J[24] = t7 * t78 * -0.069999999999936335 - t13 * t406 * 0.069999999999936335;
  J[25] = t7 * t409 * -0.069999999999936335 - t13 * t51 * 0.069999999999936335;
  J[26] = t13 * t36 * 0.069999999999936335 + t7 * t198 * 0.069999999999936335;
  J[27] = (((((((t8 * 1.405799628556498E-65 + t339 * 2.2958450216612079E-49) -
                t365 * 3.749399456649515E-33) -
               t394 * 3.749399456649515E-33) +
              t431) +
             t465) +
            t7 * t406) -
           t13 * t78) +
          t421 * 2.2958450216612079E-49;
  J[28] = (((((((t2 * -1.405799628556498E-65 + t340 * 2.2958450216612079E-49) -
                ct_idx_39 * 3.749399456649515E-33) -
               ct_idx_44 * 3.749399456649515E-33) +
              ct_idx_55) +
             ct_idx_72) -
            t13 * t409) -
           t343_tmp * 2.2958450216612079E-49) +
          t7 * t51;
  J[29] = ((((((t76 * -2.2958450216612079E-49 + t225) + t301) -
              t403 * 6.1232339957279222E-17) +
             t452_tmp * 6.1232339957279222E-17) -
            t7 * t36) +
           t13 * t198) +
          8.6080400767699084E-82;
  J[30] = 0.0;
  J[31] = 0.0;
  J[32] = 0.0;
  J[33] = (((((t348 + t8 * 2.2958450216612079E-49) -
              t394 * 6.1232339957279222E-17) +
             t329 * t49) +
            t464_tmp) +
           t110) +
          b_t431_tmp;
  J[34] = (((((-t46 + -t343) + t340 * 3.749399456649515E-33) -
             ct_idx_44 * 6.1232339957279222E-17) -
            t424) +
           t330 * t49) +
          t41;
  J[35] = ((((-t107 + t215) + t295) - t403) + t452_tmp) + 1.405799628556498E-65;
}

/*
 * File trailer for jacobian_meca.c
 *
 * [EOF]
 */