
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
	valueT t41, t42, t43, t44, t45, t46, t47, t48, t51, t52;

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

	t51 = t3 - t35;
	t52 = t4 - t36;
	t3 += t35;
	t4 += t36;
	t35 = t5 - t21;
	t36 = t6 - t22;
	t5 += t21;
	t6 += t22;
	t21 = t9 - t41;
	t22 = t10 - t42;
	t9 += t41;
	t10 += t42;
	t41 = t11 - t27;
	t42 = t12 - t28;
	t11 += t27;
	t12 += t28;
	t27 = t15 - t47;
	t28 = t16 - t48;
	t15 += t47;
	t16 += t48;
	t47 = t17 - t33;
	t48 = t18 - t34;
	t17 += t33;
	t18 += t34;
	t33 = t23 - t39;
	t34 = t24 - t40;
	t23 += t39;
	t24 += t40;
	t39 = t29 - t45;
	t40 = t30 - t46;
	t29 += t45;
	t30 += t46;
	t1 += t17;
	t2 += t18;
	t19 = t3 + t19;
	t20 = t4 + t20;
	t37 = t5 + t37;
	t38 = t6 + t38;
	t7 += t23;
	t8 += t24;
	t25 = t9 + t25;
	t26 = t10 + t26;
	t43 = t11 + t43;
	t44 = t12 + t44;
	t13 += t29;
	t14 += t30;
	t31 = t15 + t31;
	t32 = t16 + t32;
	t45 = t1 - t25;
	t46 = t2 - t26;
	t1 += t25;
	t2 += t26;
	t25 = t35 - t39;
	t26 = t36 - t40;
	t35 += t39;
	t36 += t40;
	t39 = t5 - t29;
	t40 = t6 - t30;
	t5 += t29;
	t6 += t30;
	t29 = t37 - t13;
	t30 = t38 - t14;
	t37 += t13;
	t38 += t14;
	t13 = t21 - t47;
	t14 = t22 - t48;
	t21 += t47;
	t22 += t48;
	t47 = t9 - t17;
	t48 = t10 - t18;
	t9 += t17;
	t10 += t18;
	t17 = t45 - t30;
	t18 = t46 + t29;
	t45 += t30;
	t46 -= t29;
	t29 = t1 - t37;
	t30 = t2 - t38;
	t1 += t37;
	t2 += t38;
	t37 = t51 + t41;
	t38 = t52 + t42;
	t51 -= t41;
	t52 -= t42;
	t41 = t3 - t11;
	t42 = t4 - t12;
	t3 += t11;
	t4 += t12;
	t11 = t19 - t43;
	t12 = t20 - t44;
	t19 += t43;
	t20 += t44;
	t43 = t26 - t21;
	t44 = t25 + t22;
	t26 += t21;
	t25 -= t22;
	t21 = t35 + t13;
	t22 = t36 + t14;
	t35 -= t13;
	t36 -= t14;
	t13 = t40 + t47;
	t14 = t39 - t48;
	t40 -= t47;
	t39 += t48;
	t47 = t5 - t9;
	t48 = t6 - t10;
	t5 += t9;
	t6 += t10;
	t9 = t7 - t31;
	t10 = t8 - t32;
	t7 += t31;
	t8 += t32;
	t31 = t27 + t33;
	t32 = t28 + t34;
	t27 -= t33;
	t28 -= t34;
	t33 = t15 - t23;
	t34 = t16 - t24;
	t15 += t23;
	t16 += t24;
	t23 = valueT(0.61237243569579452455) * (t37 - t38);
	t37 = valueT(0.61237243569579452455) * (t37 + t38);
	t52 *= valueT(0.86602540378443864676);
	t51 *= valueT(0.86602540378443864676);
	t24 = valueT(1.0606601717798212866) * (t41 + t42);
	t41 = valueT(1.0606601717798212866) * (t41 - t42);
	t3 *= valueT(1.5);
	t4 *= valueT(1.5);
	t38 = valueT(0.7071067811865475244) * (t11 + t12);
	t11 = valueT(0.7071067811865475244) * (t11 - t12);
	t44 *= valueT(0.86602540378443864676);
	t43 *= valueT(0.86602540378443864676);
	t25 *= valueT(0.86602540378443864676);
	t26 *= valueT(0.86602540378443864676);
	t22 *= valueT(0.86602540378443864676);
	t21 *= valueT(0.86602540378443864676);
	t36 *= valueT(0.86602540378443864676);
	t35 *= valueT(0.86602540378443864676);
	t13 *= valueT(1.5);
	t14 *= valueT(1.5);
	t40 *= valueT(1.5);
	t39 *= valueT(1.5);
	t47 *= valueT(1.5);
	t48 *= valueT(1.5);
	t5 *= valueT(1.5);
	t6 *= valueT(1.5);
	t12 = valueT(0.7071067811865475244) * (t9 - t10);
	t9 = valueT(0.7071067811865475244) * (t9 + t10);
	t10 = valueT(0.61237243569579452455) * (t31 + t32);
	t31 = valueT(0.61237243569579452455) * (t31 - t32);
	t28 *= valueT(0.86602540378443864676);
	t27 *= valueT(0.86602540378443864676);
	t32 = valueT(1.0606601717798212866) * (t33 - t34);
	t33 = valueT(1.0606601717798212866) * (t33 + t34);
	t15 *= valueT(1.5);
	t16 *= valueT(1.5);
	t13 = t17 + t13;
	t14 = t18 - t14;
	t40 = t45 - t40;
	t39 = t46 + t39;
	t47 = t29 + t47;
	t48 = t30 + t48;
	t5 = t1 - t5;
	t6 = t2 - t6;
	t24 -= t38;
	t41 -= t11;
	t3 -= t19;
	t4 -= t20;
	t32 = t12 + t32;
	t33 = t9 + t33;
	t15 = t7 - t15;
	t16 = t8 - t16;
	t34 = t13 + t44;
	t42 = t14 + t43;
	t13 -= t44;
	t14 -= t43;
	t43 = t40 - t25;
	t44 = t39 - t26;
	t40 += t25;
	t39 += t26;
	t25 = t47 - t22;
	t26 = t48 + t21;
	t47 += t22;
	t48 -= t21;
	t21 = t5 + t36;
	t22 = t6 - t35;
	t5 -= t36;
	t6 += t35;
	t35 = t23 - t24;
	t36 = t37 + t41;
	t23 += t24;
	t37 -= t41;
	t24 = t52 + t3;
	t41 = t51 - t4;
	t52 -= t3;
	t51 += t4;
	t3 = t32 + t10;
	t4 = t33 - t31;
	t32 -= t10;
	t33 += t31;
	t10 = t15 - t28;
	t31 = t16 + t27;
	t15 += t28;
	t16 -= t27;
	t27 = t35 + t3;
	t28 = t36 + t4;
	t35 -= t3;
	t36 -= t4;
	t3 = t23 - t32;
	t4 = t37 - t33;
	t23 += t32;
	t37 += t33;
	t32 = t24 + t10;
	t33 = t41 - t31;
	t24 -= t10;
	t41 += t31;
	t10 = t52 - t15;
	t31 = t51 + t16;
	t52 += t15;
	t51 -= t16;
	t15 = t38 + t12;
	t16 = t11 - t9;
	t38 -= t12;
	t11 += t9;
	t9 = t19 - t7;
	t12 = t20 - t8;
	t19 += t7;
	t20 += t8;
	pReal[0 * stride] = t1 + t19;
	pImag[0 * stride] = t2 + t20;
	pReal[1 * stride] = t40 + t23;
	pImag[1 * stride] = t39 + t37;
	pReal[2 * stride] = t25 + t33;
	pImag[2 * stride] = t26 + t32;
	pReal[3 * stride] = t17 + t16;
	pImag[3 * stride] = t18 + t15;
	pReal[4 * stride] = t5 - t52;
	pImag[4 * stride] = t6 + t51;
	pReal[5 * stride] = t43 + t35;
	pImag[5 * stride] = t44 + t36;
	pReal[6 * stride] = t29 - t12;
	pImag[6 * stride] = t30 + t9;
	pReal[7 * stride] = t13 - t4;
	pImag[7 * stride] = t14 + t3;
	pReal[8 * stride] = t21 - t24;
	pImag[8 * stride] = t22 + t41;
	pReal[9 * stride] = t45 - t38;
	pImag[9 * stride] = t46 + t11;
	pReal[10 * stride] = t47 - t31;
	pImag[10 * stride] = t48 - t10;
	pReal[11 * stride] = t34 - t28;
	pImag[11 * stride] = t42 + t27;
	pReal[12 * stride] = t1 - t19;
	pImag[12 * stride] = t2 - t20;
	pReal[13 * stride] = t40 - t23;
	pImag[13 * stride] = t39 - t37;
	pReal[14 * stride] = t25 - t33;
	pImag[14 * stride] = t26 - t32;
	pReal[15 * stride] = t17 - t16;
	pImag[15 * stride] = t18 - t15;
	pReal[16 * stride] = t5 + t52;
	pImag[16 * stride] = t6 - t51;
	pReal[17 * stride] = t43 - t35;
	pImag[17 * stride] = t44 - t36;
	pReal[18 * stride] = t29 + t12;
	pImag[18 * stride] = t30 - t9;
	pReal[19 * stride] = t13 + t4;
	pImag[19 * stride] = t14 - t3;
	pReal[20 * stride] = t21 + t24;
	pImag[20 * stride] = t22 - t41;
	pReal[21 * stride] = t45 + t38;
	pImag[21 * stride] = t46 - t11;
	pReal[22 * stride] = t47 + t31;
	pImag[22 * stride] = t48 + t10;
	pReal[23 * stride] = t34 + t28;
	pImag[23 * stride] = t42 - t27;
}

template<> void StandardModule<float, 24>::Compute(float *pReal, float *pImag, ptrdiff_t stride, size_t twiddleStart, size_t twiddleIncrement) const
{
	ComputeCore(mPhasors, pReal, pImag, stride, twiddleStart, twiddleIncrement);
}

template<> void StandardModule<double, 24>::Compute(double *pReal, double *pImag, ptrdiff_t stride, size_t twiddleStart, size_t twiddleIncrement) const
{
	ComputeCore(mPhasors, pReal, pImag, stride, twiddleStart, twiddleIncrement);
}

}
}