
//          Copyright Christian Volmer 2022.
// Distributed under the Boost Software License, Version 1.0.
//    (See accompanying file LICENSE_1_0.txt or copy at
//          https://www.boost.org/LICENSE_1_0.txt)

#include "../standard_module.h"

namespace offt {
namespace backend {

using std::size_t;
using std::ptrdiff_t;

template<typename valueT>
static void ComputeCore(Phasors<valueT> const &phasors, valueT *pReal, valueT *pImag, ptrdiff_t stride, size_t twiddleStart, size_t twiddleIncrement)
{
	valueT t1, t2, t3, t4, t5, t6, t7, t8, t9, t10;
	valueT t11, t12, t13, t14, t15, t16, t17, t18, t19, t20;
	valueT t21, t22, t23, t24, t25, t26, t27, t28, t29, t30;
	valueT t31, t32, t33, t34, t35, t36, t37, t38, t39, t40;
	valueT t41, t42, t43, t44, t45, t46, t47, t48, t49, t50;
	valueT t51, t52, t53, t54, t55, t56, t57, t58, t59, t60;
	valueT t61, t62, t65, t66, t67, t68, t69, t70, t71, t72;
	valueT t73, t74, t75, t76, t77, t78, t79, t80, t81, t82;
	valueT t83, t84, t85, t86, t87, t88, t89, t90, t91, t92;
	valueT t93, t94, t95, t96, t97, t98, t99, t100, t101, t102;
	valueT t103, t104, t105, t106, t107, t108, t109, t110, t111, t112;
	valueT t113, t114, t115, t116, t117, t118, t119, t120, t121, t122;
	valueT t123, t124, t127, t128, t129, t130, t131, t132, t133, t134;
	valueT t135, t136, t137, t138, t139, t140, t141, t142, t143, t144;
	valueT t145, t146, t147, t148, t149, t150, t151, t152, t153, t154;
	valueT t155, t156, t157, t158, t159, t160, t161, t162, t163, t164;
	valueT t165, t166;

	phasors.Multiply(t1, t2, pReal[0 * stride], pImag[0 * stride], twiddleStart + 0 * twiddleIncrement);
	phasors.Multiply(t3, t4, pReal[1 * stride], pImag[1 * stride], twiddleStart + 1 * twiddleIncrement);
	phasors.Multiply(t5, t6, pReal[2 * stride], pImag[2 * stride], twiddleStart + 2 * twiddleIncrement);
	phasors.Multiply(t7, t8, pReal[3 * stride], pImag[3 * stride], twiddleStart + 3 * twiddleIncrement);
	phasors.Multiply(t9, t10, pReal[4 * stride], pImag[4 * stride], twiddleStart + 4 * twiddleIncrement);
	phasors.Multiply(t11, t12, pReal[5 * stride], pImag[5 * stride], twiddleStart + 5 * twiddleIncrement);
	phasors.Multiply(t13, t14, pReal[6 * stride], pImag[6 * stride], twiddleStart + 6 * twiddleIncrement);
	phasors.Multiply(t15, t16, pReal[7 * stride], pImag[7 * stride], twiddleStart + 7 * twiddleIncrement);
	phasors.Multiply(t17, t18, pReal[8 * stride], pImag[8 * stride], twiddleStart + 8 * twiddleIncrement);
	phasors.Multiply(t19, t20, pReal[9 * stride], pImag[9 * stride], twiddleStart + 9 * twiddleIncrement);
	phasors.Multiply(t21, t22, pReal[10 * stride], pImag[10 * stride], twiddleStart + 10 * twiddleIncrement);
	phasors.Multiply(t23, t24, pReal[11 * stride], pImag[11 * stride], twiddleStart + 11 * twiddleIncrement);
	phasors.Multiply(t25, t26, pReal[12 * stride], pImag[12 * stride], twiddleStart + 12 * twiddleIncrement);
	phasors.Multiply(t27, t28, pReal[13 * stride], pImag[13 * stride], twiddleStart + 13 * twiddleIncrement);
	phasors.Multiply(t29, t30, pReal[14 * stride], pImag[14 * stride], twiddleStart + 14 * twiddleIncrement);
	phasors.Multiply(t31, t32, pReal[15 * stride], pImag[15 * stride], twiddleStart + 15 * twiddleIncrement);
	phasors.Multiply(t33, t34, pReal[16 * stride], pImag[16 * stride], twiddleStart + 16 * twiddleIncrement);
	phasors.Multiply(t35, t36, pReal[17 * stride], pImag[17 * stride], twiddleStart + 17 * twiddleIncrement);
	phasors.Multiply(t37, t38, pReal[18 * stride], pImag[18 * stride], twiddleStart + 18 * twiddleIncrement);
	phasors.Multiply(t39, t40, pReal[19 * stride], pImag[19 * stride], twiddleStart + 19 * twiddleIncrement);
	phasors.Multiply(t41, t42, pReal[20 * stride], pImag[20 * stride], twiddleStart + 20 * twiddleIncrement);
	phasors.Multiply(t43, t44, pReal[21 * stride], pImag[21 * stride], twiddleStart + 21 * twiddleIncrement);
	phasors.Multiply(t45, t46, pReal[22 * stride], pImag[22 * stride], twiddleStart + 22 * twiddleIncrement);
	phasors.Multiply(t47, t48, pReal[23 * stride], pImag[23 * stride], twiddleStart + 23 * twiddleIncrement);
	phasors.Multiply(t49, t50, pReal[24 * stride], pImag[24 * stride], twiddleStart + 24 * twiddleIncrement);
	phasors.Multiply(t51, t52, pReal[25 * stride], pImag[25 * stride], twiddleStart + 25 * twiddleIncrement);
	phasors.Multiply(t53, t54, pReal[26 * stride], pImag[26 * stride], twiddleStart + 26 * twiddleIncrement);
	phasors.Multiply(t55, t56, pReal[27 * stride], pImag[27 * stride], twiddleStart + 27 * twiddleIncrement);
	phasors.Multiply(t57, t58, pReal[28 * stride], pImag[28 * stride], twiddleStart + 28 * twiddleIncrement);
	phasors.Multiply(t59, t60, pReal[29 * stride], pImag[29 * stride], twiddleStart + 29 * twiddleIncrement);
	phasors.Multiply(t61, t62, pReal[30 * stride], pImag[30 * stride], twiddleStart + 30 * twiddleIncrement);

	t65 = t3 - t61;
	t66 = t4 - t62;
	t3 += t61;
	t4 += t62;
	t61 = t5 - t59;
	t62 = t6 - t60;
	t5 += t59;
	t6 += t60;
	t59 = t7 - t57;
	t60 = t8 - t58;
	t7 += t57;
	t8 += t58;
	t57 = t9 - t55;
	t58 = t10 - t56;
	t9 += t55;
	t10 += t56;
	t55 = t11 - t53;
	t56 = t12 - t54;
	t11 += t53;
	t12 += t54;
	t53 = t13 - t51;
	t54 = t14 - t52;
	t13 += t51;
	t14 += t52;
	t51 = t15 - t49;
	t52 = t16 - t50;
	t15 += t49;
	t16 += t50;
	t49 = t17 - t47;
	t50 = t18 - t48;
	t17 += t47;
	t18 += t48;
	t47 = t19 - t45;
	t48 = t20 - t46;
	t19 += t45;
	t20 += t46;
	t45 = t21 - t43;
	t46 = t22 - t44;
	t21 += t43;
	t22 += t44;
	t43 = t23 - t41;
	t44 = t24 - t42;
	t23 += t41;
	t24 += t42;
	t41 = t25 - t39;
	t42 = t26 - t40;
	t25 += t39;
	t26 += t40;
	t39 = t27 - t37;
	t40 = t28 - t38;
	t27 += t37;
	t28 += t38;
	t37 = t29 - t35;
	t38 = t30 - t36;
	t29 += t35;
	t30 += t36;
	t35 = t31 - t33;
	t36 = t32 - t34;
	t31 += t33;
	t32 += t34;
	t33 = t65 + t55 - t53;
	t34 = t66 + t56 - t54;
	t65 += t53;
	t66 += t54;
	t67 = t3 + t11 + t13;
	t68 = t4 + t12 + t14;
	t3 -= t13;
	t4 -= t14;
	t69 = t61 - t45;
	t70 = t62 - t46;
	t61 += t45 - t41;
	t62 += t46 - t42;
	t71 = t5 - t21;
	t72 = t6 - t22;
	t5 += t21 + t25;
	t6 += t22 + t26;
	t73 = t59 - t39;
	t74 = t60 - t40;
	t59 += t39 + t35;
	t60 += t40 + t36;
	t75 = t7 - t27;
	t76 = t8 - t28;
	t7 += t27 + t31;
	t8 += t28 + t32;
	t77 = t57 - t51;
	t78 = t58 - t52;
	t57 += t51 - t43;
	t58 += t52 - t44;
	t79 = t9 - t15;
	t80 = t10 - t16;
	t9 += t15 + t23;
	t10 += t16 + t24;
	t55 += t53;
	t56 += t54;
	t11 -= t13;
	t12 -= t14;
	t51 += t43;
	t52 += t44;
	t15 -= t23;
	t16 -= t24;
	t13 = t49 - t47;
	t14 = t50 - t48;
	t47 = t49 + t47 + t37;
	t48 = t50 + t48 + t38;
	t49 -= t37;
	t50 -= t38;
	t23 = t17 - t19;
	t24 = t18 - t20;
	t19 = t17 + t19 + t29;
	t20 = t18 + t20 + t30;
	t17 -= t29;
	t18 -= t30;
	t45 += t41;
	t46 += t42;
	t21 -= t25;
	t22 -= t26;
	t39 -= t35;
	t40 -= t36;
	t27 -= t31;
	t28 -= t32;
	t25 = t33 - t61;
	t26 = t34 - t62;
	t29 = t33 + t61 - t59 + t57 + t47;
	t30 = t34 + t62 - t60 + t58 + t48;
	t33 -= t47;
	t34 -= t48;
	t31 = t65 + t69 + t77 + t51 + t39;
	t32 = t66 + t70 + t78 + t52 + t40;
	t65 -= t69 - t51;
	t66 -= t70 - t52;
	t35 = t67 - t5;
	t36 = t68 - t6;
	t37 = t67 + t5 + t7 + t9 + t19;
	t38 = t68 + t6 + t8 + t10 + t20;
	t67 -= t19;
	t68 -= t20;
	t41 = t3 + t71 + t79 + t15 - t27;
	t42 = t4 + t72 + t80 + t16 - t28;
	t3 -= t71 - t15;
	t4 -= t72 - t16;
	t77 = t69 - t77 - t51;
	t78 = t70 - t78 - t52;
	t43 = t69 - t51 - t49;
	t44 = t70 - t52 - t50;
	t53 = t69 - t13;
	t54 = t70 - t14;
	t69 -= t39;
	t70 -= t40;
	t39 = t61 + t59;
	t40 = t62 + t60;
	t81 = t61 - t57;
	t82 = t62 - t58;
	t61 -= t47;
	t62 -= t48;
	t79 = t71 - t79 - t15;
	t80 = t72 - t80 - t16;
	t47 = t71 - t15 - t17;
	t48 = t72 - t16 - t18;
	t83 = t71 - t23;
	t84 = t72 - t24;
	t71 += t27;
	t72 += t28;
	t27 = t5 - t7;
	t28 = t6 - t8;
	t85 = t5 - t9;
	t86 = t6 - t10;
	t5 -= t19;
	t6 -= t20;
	t19 = t73 + t51;
	t20 = t74 + t52;
	t73 -= t51 - t49 - t45;
	t74 -= t52 - t50 - t46;
	t59 += t57;
	t60 += t58;
	t49 = t75 - t15;
	t50 = t76 - t16;
	t75 += t15 - t17 - t21;
	t76 += t16 - t18 - t22;
	t7 -= t9;
	t8 -= t10;
	t9 = t55 + t51;
	t10 = t56 + t52;
	t55 -= t13;
	t56 -= t14;
	t13 = t11 + t15;
	t14 = t12 + t16;
	t11 -= t23;
	t12 -= t24;
	t51 += t45;
	t52 += t46;
	t15 += t21;
	t16 += t22;
	t17 = t25 + t39;
	t18 = t26 + t40;
	t21 = t33 + t59;
	t22 = t34 + t60;
	t23 = t31 + t73;
	t24 = t32 + t74;
	t31 -= t55;
	t32 -= t56;
	t45 = t65 + t51;
	t46 = t66 + t52;
	t57 = t35 + t27;
	t58 = t36 + t28;
	t87 = t67 - t7;
	t88 = t68 - t8;
	t89 = t41 - t75;
	t90 = t42 - t76;
	t41 -= t11;
	t42 -= t12;
	t91 = t3 + t15;
	t92 = t4 + t16;
	t93 = t77 + t43;
	t94 = t78 + t44;
	t95 = t53 + t69;
	t96 = t54 + t70;
	t97 = t81 - t61;
	t98 = t82 - t62;
	t99 = t79 + t47;
	t100 = t80 + t48;
	t101 = t83 + t71;
	t102 = t84 + t72;
	t103 = t85 - t5;
	t104 = t86 - t6;
	t105 = t19 + t9;
	t106 = t20 + t10;
	t73 += t55;
	t74 += t56;
	t55 = t49 - t13;
	t56 = t50 - t14;
	t75 -= t11;
	t76 -= t12;
	t11 = t65 - t53;
	t12 = t66 - t54;
	t107 = t45 - t95;
	t108 = t46 - t96;
	t109 = t3 - t83;
	t110 = t4 - t84;
	t111 = t91 - t101;
	t112 = t92 - t102;
	t113 = t77 - t19;
	t114 = t78 - t20;
	t115 = t93 - t105;
	t116 = t94 - t106;
	t117 = t43 - t9;
	t118 = t44 - t10;
	t119 = t69 - t51;
	t120 = t70 - t52;
	t121 = t79 + t49;
	t122 = t80 + t50;
	t123 = t99 + t55;
	t124 = t100 + t56;
	t127 = t47 - t13;
	t128 = t48 - t14;
	t129 = t71 - t15;
	t130 = t72 - t16;
	t1 += t37;
	t2 += t38;
	t131 = t65 + t19;
	t132 = t66 + t20;
	t133 = t11 - t113;
	t134 = t12 - t114;
	t135 = t45 + t105;
	t136 = t46 + t106;
	t137 = t107 - t115;
	t138 = t108 - t116;
	t139 = t3 - t49;
	t140 = t4 - t50;
	t141 = t109 - t121;
	t142 = t110 - t122;
	t143 = t91 - t55;
	t144 = t92 - t56;
	t145 = t111 - t123;
	t146 = t112 - t124;
	t147 = t77 + t53;
	t148 = t78 + t54;
	t149 = t93 + t95;
	t150 = t94 + t96;
	t151 = t43 + t69;
	t152 = t44 + t70;
	t153 = t117 + t119;
	t154 = t118 + t120;
	t155 = t79 + t83;
	t156 = t80 + t84;
	t157 = t99 + t101;
	t158 = t100 + t102;
	t159 = t47 + t71;
	t160 = t48 + t72;
	t161 = t127 + t129;
	t162 = t128 + t130;
	t163 = t9 + t51;
	t164 = t10 + t52;
	t165 = t13 + t15;
	t166 = t14 + t16;
	t26 *= valueT(0.028003825226278612524);
	t25 *= valueT(0.028003825226278612524);
	t18 *= valueT(0.44960199918659236354);
	t17 *= valueT(0.44960199918659236354);
	t30 *= valueT(0.1855921454276673974);
	t29 *= valueT(0.1855921454276673974);
	t34 *= valueT(0.69169641702138115261);
	t33 *= valueT(0.69169641702138115261);
	t22 *= valueT(0.12190297944551019458);
	t21 *= valueT(0.12190297944551019458);
	t24 *= valueT(0.36010442196019251578);
	t23 *= valueT(0.36010442196019251578);
	t32 *= valueT(0.10209749786491606369);
	t31 *= valueT(0.10209749786491606369);
	t66 *= valueT(0.48563392596301227479);
	t65 *= valueT(0.48563392596301227479);
	t132 *= valueT(0.94727161807823812287);
	t131 *= valueT(0.94727161807823812287);
	t12 *= valueT(0.20070432531015444602);
	t11 *= valueT(0.20070432531015444602);
	t134 *= valueT(0.063372700190678029143);
	t133 *= valueT(0.063372700190678029143);
	t46 *= valueT(0.13510539545348763997);
	t45 *= valueT(0.13510539545348763997);
	t136 *= valueT(0.61323183974773681073);
	t135 *= valueT(0.61323183974773681073);
	t108 *= valueT(0.069180450948261354806);
	t107 *= valueT(0.069180450948261354806);
	t138 *= valueT(0.09591803806998788565);
	t137 *= valueT(0.09591803806998788565);
	t35 *= valueT(0.060064820876731527434);
	t36 *= valueT(0.060064820876731527434);
	t57 *= valueT(0.20672126143220018382);
	t58 *= valueT(0.20672126143220018382);
	t37 *= valueT(1.0333333333333333333);
	t38 *= valueT(1.0333333333333333333);
	t67 *= valueT(0.27571741448829390525);
	t68 *= valueT(0.27571741448829390525);
	t87 *= valueT(0.1094295713442001291);
	t88 *= valueT(0.1094295713442001291);
	t89 *= valueT(0.045346848173899962232);
	t90 *= valueT(0.045346848173899962232);
	t41 *= valueT(0.29637372110299413755);
	t42 *= valueT(0.29637372110299413755);
	t3 *= valueT(0.079462773150105537224);
	t4 *= valueT(0.079462773150105537224);
	t139 *= valueT(1.2031704748403782682);
	t140 *= valueT(1.2031704748403782682);
	t109 *= valueT(0.74206619582135048323);
	t110 *= valueT(0.74206619582135048323);
	t141 *= valueT(0.21916197727239584931);
	t142 *= valueT(0.21916197727239584931);
	t91 *= valueT(1.8906929393063390177);
	t92 *= valueT(1.8906929393063390177);
	t143 *= valueT(0.28357409243845733892);
	t144 *= valueT(0.28357409243845733892);
	t111 *= valueT(1.4774178156193771214);
	t112 *= valueT(1.4774178156193771214);
	t145 *= valueT(0.49031208906032152155);
	t146 *= valueT(0.49031208906032152155);
	t78 *= valueT(1.5982638575965406979);
	t77 *= valueT(1.5982638575965406979);
	t148 *= valueT(0.69527553837249884361);
	t147 *= valueT(0.69527553837249884361);
	t114 *= valueT(1.6418596909010899102);
	t113 *= valueT(1.6418596909010899102);
	t94 *= valueT(1.9885780293806821384);
	t93 *= valueT(1.9885780293806821384);
	t150 *= valueT(0.17316507770589176757);
	t149 *= valueT(0.17316507770589176757);
	t116 *= valueT(1.2962863977457801234);
	t115 *= valueT(1.2962863977457801234);
	t44 *= valueT(0.58155196403300016044);
	t43 *= valueT(0.58155196403300016044);
	t152 *= valueT(0.66642591651767262721);
	t151 *= valueT(0.66642591651767262721);
	t118 *= valueT(1.512449024865104052);
	t117 *= valueT(1.512449024865104052);
	t154 *= valueT(0.29740466526154981383);
	t153 *= valueT(0.29740466526154981383);
	t54 *= valueT(0.87262522759979267887);
	t53 *= valueT(0.87262522759979267887);
	t96 *= valueT(1.3467958502599574745);
	t95 *= valueT(1.3467958502599574745);
	t70 *= valueT(1.1369254479631532131);
	t69 *= valueT(1.1369254479631532131);
	t120 *= valueT(0.88571167013882141603);
	t119 *= valueT(0.88571167013882141603);
	t40 *= valueT(0.14819526361555720701);
	t39 *= valueT(0.14819526361555720701);
	t82 *= valueT(0.56979343757587095803);
	t81 *= valueT(0.56979343757587095803);
	t98 *= valueT(0.026292284170047012433);
	t97 *= valueT(0.026292284170047012433);
	t62 *= valueT(0.57150497863210255812);
	t61 *= valueT(0.57150497863210255812);
	t79 *= valueT(1.5666835642099196222);
	t80 *= valueT(1.5666835642099196222);
	t155 *= valueT(0.65821141590286972344);
	t156 *= valueT(0.65821141590286972344);
	t121 *= valueT(1.2310035970367574306);
	t122 *= valueT(1.2310035970367574306);
	t99 *= valueT(0.43745282575182779832);
	t100 *= valueT(0.43745282575182779832);
	t157 *= valueT(0.18032330749307986855);
	t158 *= valueT(0.18032330749307986855);
	t123 *= valueT(0.88214058851585702392);
	t124 *= valueT(0.88214058851585702392);
	t47 *= valueT(0.56977486221042705878);
	t48 *= valueT(0.56977486221042705878);
	t159 *= valueT(0.072512966228835363662);
	t160 *= valueT(0.072512966228835363662);
	t127 *= valueT(1.0845187363974908033);
	t128 *= valueT(1.0845187363974908033);
	t161 *= valueT(0.71880081799217585657);
	t162 *= valueT(0.71880081799217585657);
	t83 *= valueT(0.87653442241044649176);
	t84 *= valueT(0.87653442241044649176);
	t101 *= valueT(1.1986109185215112337);
	t102 *= valueT(1.1986109185215112337);
	t71 *= valueT(1.5062583125249073474);
	t72 *= valueT(1.5062583125249073474);
	t129 *= valueT(1.9318541783406036209);
	t130 *= valueT(1.9318541783406036209);
	t27 *= valueT(0.65193306814142574562);
	t28 *= valueT(0.65193306814142574562);
	t85 *= valueT(0.38514698583249403436);
	t86 *= valueT(0.38514698583249403436);
	t103 *= valueT(0.76136263948562587472);
	t104 *= valueT(0.76136263948562587472);
	t5 *= valueT(0.31615083277640031293);
	t6 *= valueT(0.31615083277640031293);
	t20 *= valueT(0.62062914789405339961);
	t19 *= valueT(0.62062914789405339961);
	t106 *= valueT(0.56039893280632889617);
	t105 *= valueT(0.56039893280632889617);
	t74 *= valueT(0.25800692409527645209);
	t73 *= valueT(0.25800692409527645209);
	t60 *= valueT(0.1499068046717888071);
	t59 *= valueT(0.1499068046717888071);
	t49 *= valueT(0.33157536347293794701);
	t50 *= valueT(0.33157536347293794701);
	t55 *= valueT(1.6625083184530484411);
	t56 *= valueT(1.6625083184530484411);
	t75 *= valueT(0.34172056927689409979);
	t76 *= valueT(0.34172056927689409979);
	t7 *= valueT(0.04936475046746860167);
	t8 *= valueT(0.04936475046746860167);
	t10 *= valueT(1.4688531915605548397);
	t9 *= valueT(1.4688531915605548397);
	t164 *= valueT(0.33449817292027100063);
	t163 *= valueT(0.33449817292027100063);
	t13 *= valueT(1.4201987035706529949);
	t14 *= valueT(1.4201987035706529949);
	t165 *= valueT(0.15857257518308971618);
	t166 *= valueT(0.15857257518308971618);
	t52 *= valueT(1.9590412230487685409);
	t51 *= valueT(1.9590412230487685409);
	t15 *= valueT(2.0663224049296996294);
	t16 *= valueT(2.0663224049296996294);
	t37 = t1 - t37;
	t38 = t2 - t38;
	t66 -= t132;
	t65 -= t131;
	t132 += t20;
	t131 += t19;
	t12 -= t134;
	t11 -= t133;
	t134 -= t114;
	t133 -= t113;
	t46 -= t136;
	t45 -= t135;
	t136 += t106;
	t135 += t105;
	t108 -= t138;
	t107 -= t137;
	t138 += t116;
	t137 += t115;
	t3 -= t139;
	t4 -= t140;
	t139 -= t49;
	t140 -= t50;
	t109 -= t141;
	t110 -= t142;
	t141 += t121;
	t142 += t122;
	t91 -= t143;
	t92 -= t144;
	t143 += t55;
	t144 += t56;
	t111 -= t145;
	t112 -= t146;
	t145 += t123;
	t146 += t124;
	t78 += t148;
	t77 += t147;
	t148 += t54;
	t147 += t53;
	t94 -= t150;
	t93 -= t149;
	t150 -= t96;
	t149 -= t95;
	t44 += t152;
	t43 += t151;
	t152 += t70;
	t151 += t69;
	t118 -= t154;
	t117 -= t153;
	t154 -= t120;
	t153 -= t119;
	t79 += t155;
	t80 += t156;
	t155 += t83;
	t156 += t84;
	t99 += t157;
	t100 += t158;
	t157 += t101;
	t158 += t102;
	t47 += t159;
	t48 += t160;
	t159 += t71;
	t160 += t72;
	t127 -= t161;
	t128 -= t162;
	t161 -= t129;
	t162 -= t130;
	t10 += t164;
	t9 += t163;
	t164 += t52;
	t163 += t51;
	t13 += t165;
	t14 += t166;
	t165 += t15;
	t166 += t16;
	t66 -= t12;
	t65 -= t11;
	t132 -= t134;
	t131 -= t133;
	t12 -= t148;
	t11 -= t147;
	t134 += t78;
	t133 += t77;
	t46 += t108;
	t45 += t107;
	t136 += t138;
	t135 += t137;
	t108 -= t150;
	t107 -= t149;
	t138 -= t94;
	t137 -= t93;
	t3 += t109;
	t4 += t110;
	t139 += t141;
	t140 += t142;
	t109 += t155;
	t110 += t156;
	t141 -= t79;
	t142 -= t80;
	t91 -= t111;
	t92 -= t112;
	t143 -= t145;
	t144 -= t146;
	t111 += t157;
	t112 += t158;
	t145 -= t99;
	t146 -= t100;
	t44 -= t118;
	t43 -= t117;
	t152 += t154;
	t151 += t153;
	t118 += t10;
	t117 += t9;
	t154 -= t164;
	t153 -= t163;
	t47 -= t127;
	t48 -= t128;
	t159 += t161;
	t160 += t162;
	t127 += t13;
	t128 += t14;
	t161 -= t165;
	t162 -= t166;
	t26 -= t18;
	t25 -= t17;
	t18 += t40;
	t17 += t39;
	t34 -= t22;
	t33 -= t21;
	t22 -= t60;
	t21 -= t59;
	t9 = t24 - t32;
	t10 = t23 - t31;
	t24 -= t74;
	t23 -= t73;
	t32 -= t74;
	t31 -= t73;
	t66 -= t46;
	t65 -= t45;
	t132 -= t136;
	t131 -= t135;
	t12 += t108;
	t11 += t107;
	t134 += t138;
	t133 += t137;
	t46 -= t154;
	t45 -= t153;
	t136 -= t118;
	t135 -= t117;
	t108 -= t152;
	t107 -= t151;
	t138 += t44;
	t137 += t43;
	t35 += t57;
	t36 += t58;
	t57 -= t27;
	t58 -= t28;
	t67 += t87;
	t68 += t88;
	t87 += t7;
	t88 += t8;
	t7 = t89 + t41;
	t8 = t90 + t42;
	t89 += t75;
	t90 += t76;
	t41 -= t75;
	t42 -= t76;
	t3 += t91;
	t4 += t92;
	t139 += t143;
	t140 += t144;
	t109 -= t111;
	t110 -= t112;
	t141 -= t145;
	t142 -= t146;
	t91 += t161;
	t92 += t162;
	t143 += t127;
	t144 += t128;
	t111 -= t159;
	t112 -= t160;
	t145 += t47;
	t146 += t48;
	t82 -= t98;
	t81 -= t97;
	t98 -= t62;
	t97 -= t61;
	t85 -= t103;
	t86 -= t104;
	t103 += t5;
	t104 += t6;
	t5 = t37 - t35 + t57 + t85 + t103;
	t6 = t38 - t36 + t58 + t86 + t104;
	t35 = t37 + t35 + t67;
	t36 = t38 + t36 + t68;
	t57 = t37 - t57 - t87;
	t58 = t38 - t58 - t88;
	t67 = t37 - t67 - t103;
	t68 = t38 - t68 - t104;
	t37 += t87 - t85;
	t38 += t88 - t86;
	t13 = t26 + t18 + t30 - t82 - t98;
	t14 = t25 + t17 + t29 - t81 - t97;
	t26 -= t30 - t34;
	t25 -= t29 - t33;
	t18 -= t30 - t22;
	t17 -= t29 - t21;
	t34 = t30 + t34 + t98;
	t33 = t29 + t33 + t97;
	t30 += t22 + t82;
	t29 += t21 + t81;
	t15 = t9 - t24 + t66 - t132 + t134 - t46 + t136 + t138;
	t16 = t10 - t23 + t65 - t131 + t133 - t45 + t135 + t137;
	t19 = t9 + t66;
	t20 = t10 + t65;
	t66 = t9 - t66 + t12 - t134 + t108 - t138;
	t65 = t10 - t65 + t11 - t133 + t107 - t137;
	t134 = t9 + t134;
	t133 = t10 + t133;
	t9 -= t108;
	t10 -= t107;
	t132 = t24 - t132;
	t131 = t23 - t131;
	t46 = t24 - t46;
	t45 = t23 - t45;
	t24 += t138;
	t23 += t137;
	t12 = t32 + t12;
	t11 = t31 + t11;
	t32 += t136;
	t31 += t135;
	t21 = t7 - t89 + t3 - t139 - t141 + t91 - t143 + t145;
	t22 = t8 - t90 + t4 - t140 - t142 + t92 - t144 + t146;
	t27 = t7 + t3;
	t28 = t8 + t4;
	t3 = t7 - t3 - t109 + t141 + t111 - t145;
	t4 = t8 - t4 - t110 + t142 + t112 - t146;
	t141 = t7 - t141;
	t142 = t8 - t142;
	t7 -= t111;
	t8 -= t112;
	t139 = t89 - t139;
	t140 = t90 - t140;
	t91 = t89 + t91;
	t92 = t90 + t92;
	t89 += t145;
	t90 += t146;
	t109 = t41 + t109;
	t110 = t42 + t110;
	t41 += t143;
	t42 += t144;
	t39 = t5 + t3;
	t40 = t6 + t4;
	t3 = t5 - t3 + t91;
	t4 = t6 - t4 + t92;
	t5 -= t91;
	t6 -= t92;
	t43 = t35 + t27;
	t44 = t36 + t28;
	t27 = t35 - t27 + t41;
	t28 = t36 - t28 + t42;
	t35 -= t41;
	t36 -= t42;
	t41 = t57 + t7;
	t42 = t58 + t8;
	t7 = t57 - t7 + t139;
	t8 = t58 - t8 + t140;
	t57 -= t139;
	t58 -= t140;
	t47 = t67 - t89;
	t48 = t68 - t90;
	t89 = t67 + t89 + t109;
	t90 = t68 + t90 + t110;
	t67 -= t109;
	t68 -= t110;
	t49 = t37 - t21;
	t50 = t38 - t22;
	t21 = t37 + t21 - t141;
	t22 = t38 + t22 - t142;
	t37 += t141;
	t38 += t142;
	t51 = t13 + t66;
	t52 = t14 + t65;
	t66 = t13 - t66 + t46;
	t65 = t14 - t65 + t45;
	t13 -= t46;
	t14 -= t45;
	t45 = t26 - t19;
	t46 = t25 - t20;
	t19 = t26 + t19 + t32;
	t20 = t25 + t20 + t31;
	t26 -= t32;
	t25 -= t31;
	t31 = t18 - t9;
	t32 = t17 - t10;
	t9 = t18 + t9 - t132;
	t10 = t17 + t10 - t131;
	t18 += t132;
	t17 += t131;
	t53 = t34 - t24;
	t54 = t33 - t23;
	t24 = t34 + t24 - t12;
	t23 = t33 + t23 - t11;
	t34 += t12;
	t33 += t11;
	t11 = t30 - t15;
	t12 = t29 - t16;
	t15 = t30 + t15 - t134;
	t16 = t29 + t16 - t133;
	t30 += t134;
	t29 += t133;
	pReal[0 * stride] = t1;
	pImag[0 * stride] = t2;
	pReal[1 * stride] = t43 + t45;
	pImag[1 * stride] = t44 - t46;
	pReal[2 * stride] = t39 - t51;
	pImag[2 * stride] = t40 + t52;
	pReal[3 * stride] = t57 - t18;
	pImag[3 * stride] = t58 + t17;
	pReal[4 * stride] = t37 - t30;
	pImag[4 * stride] = t38 + t29;
	pReal[5 * stride] = t35 + t26;
	pImag[5 * stride] = t36 - t25;
	pReal[6 * stride] = t27 - t19;
	pImag[6 * stride] = t28 + t20;
	pReal[7 * stride] = t21 - t15;
	pImag[7 * stride] = t22 + t16;
	pReal[8 * stride] = t89 - t24;
	pImag[8 * stride] = t90 + t23;
	pReal[9 * stride] = t67 - t34;
	pImag[9 * stride] = t68 + t33;
	pReal[10 * stride] = t3 - t66;
	pImag[10 * stride] = t4 + t65;
	pReal[11 * stride] = t49 + t11;
	pImag[11 * stride] = t50 - t12;
	pReal[12 * stride] = t5 + t13;
	pImag[12 * stride] = t6 - t14;
	pReal[13 * stride] = t7 - t9;
	pImag[13 * stride] = t8 + t10;
	pReal[14 * stride] = t47 - t53;
	pImag[14 * stride] = t48 + t54;
	pReal[15 * stride] = t41 - t31;
	pImag[15 * stride] = t42 + t32;
	pReal[16 * stride] = t41 + t31;
	pImag[16 * stride] = t42 - t32;
	pReal[17 * stride] = t47 + t53;
	pImag[17 * stride] = t48 - t54;
	pReal[18 * stride] = t7 + t9;
	pImag[18 * stride] = t8 - t10;
	pReal[19 * stride] = t5 - t13;
	pImag[19 * stride] = t6 + t14;
	pReal[20 * stride] = t49 - t11;
	pImag[20 * stride] = t50 + t12;
	pReal[21 * stride] = t3 + t66;
	pImag[21 * stride] = t4 - t65;
	pReal[22 * stride] = t67 + t34;
	pImag[22 * stride] = t68 - t33;
	pReal[23 * stride] = t89 + t24;
	pImag[23 * stride] = t90 - t23;
	pReal[24 * stride] = t21 + t15;
	pImag[24 * stride] = t22 - t16;
	pReal[25 * stride] = t27 + t19;
	pImag[25 * stride] = t28 - t20;
	pReal[26 * stride] = t35 - t26;
	pImag[26 * stride] = t36 + t25;
	pReal[27 * stride] = t37 + t30;
	pImag[27 * stride] = t38 - t29;
	pReal[28 * stride] = t57 + t18;
	pImag[28 * stride] = t58 - t17;
	pReal[29 * stride] = t39 + t51;
	pImag[29 * stride] = t40 - t52;
	pReal[30 * stride] = t43 - t45;
	pImag[30 * stride] = t44 + t46;
}

template<> void StandardModule<float, 31>::Compute(float *pReal, float *pImag, ptrdiff_t stride, size_t twiddleStart, size_t twiddleIncrement) const
{
	ComputeCore(mPhasors, pReal, pImag, stride, twiddleStart, twiddleIncrement);
}

template<> void StandardModule<double, 31>::Compute(double *pReal, double *pImag, ptrdiff_t stride, size_t twiddleStart, size_t twiddleIncrement) const
{
	ComputeCore(mPhasors, pReal, pImag, stride, twiddleStart, twiddleIncrement);
}

}
}
