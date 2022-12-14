
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
	valueT t31, t32, t33, t34, t35, t36, t39, t40;

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

	t39 = t3 - t15;
	t40 = t4 - t16;
	t3 += t15;
	t4 += t16;
	t15 = t7 - t31;
	t16 = t8 - t32;
	t7 += t31;
	t8 += t32;
	t31 = t11 - t35;
	t32 = t12 - t36;
	t11 += t35;
	t12 += t36;
	t35 = t13 - t25;
	t36 = t14 - t26;
	t13 += t25;
	t14 += t26;
	t25 = t17 - t29;
	t26 = t18 - t30;
	t17 += t29;
	t18 += t30;
	t29 = t21 - t33;
	t30 = t22 - t34;
	t21 += t33;
	t22 += t34;
	t1 += t13;
	t2 += t14;
	t27 = t3 + t27;
	t28 = t4 + t28;
	t5 += t17;
	t6 += t18;
	t19 = t7 + t19;
	t20 = t8 + t20;
	t9 += t21;
	t10 += t22;
	t23 = t11 + t23;
	t24 = t12 + t24;
	t40 *= valueT(0.86602540378443864676);
	t39 *= valueT(0.86602540378443864676);
	t3 *= valueT(1.5);
	t4 *= valueT(1.5);
	t16 *= valueT(0.86602540378443864676);
	t15 *= valueT(0.86602540378443864676);
	t7 *= valueT(1.5);
	t8 *= valueT(1.5);
	t32 *= valueT(0.86602540378443864676);
	t31 *= valueT(0.86602540378443864676);
	t11 *= valueT(1.5);
	t12 *= valueT(1.5);
	t36 *= valueT(0.86602540378443864676);
	t35 *= valueT(0.86602540378443864676);
	t13 *= valueT(1.5);
	t14 *= valueT(1.5);
	t26 *= valueT(0.86602540378443864676);
	t25 *= valueT(0.86602540378443864676);
	t17 *= valueT(1.5);
	t18 *= valueT(1.5);
	t30 *= valueT(0.86602540378443864676);
	t29 *= valueT(0.86602540378443864676);
	t21 *= valueT(1.5);
	t22 *= valueT(1.5);
	t13 = t1 - t13;
	t14 = t2 - t14;
	t3 -= t27;
	t4 -= t28;
	t17 = t5 - t17;
	t18 = t6 - t18;
	t7 -= t19;
	t8 -= t20;
	t21 = t9 - t21;
	t22 = t10 - t22;
	t11 -= t23;
	t12 -= t24;
	t33 = t13 + t36;
	t34 = t14 - t35;
	t13 -= t36;
	t14 += t35;
	t35 = t40 - t3;
	t36 = t39 + t4;
	t40 += t3;
	t39 -= t4;
	t3 = t17 + t26;
	t4 = t18 - t25;
	t17 -= t26;
	t18 += t25;
	t25 = t16 + t7;
	t26 = t15 - t8;
	t16 -= t7;
	t15 += t8;
	t7 = t21 + t30;
	t8 = t22 - t29;
	t21 -= t30;
	t22 += t29;
	t29 = t32 + t11;
	t30 = t31 - t12;
	t32 -= t11;
	t31 += t12;
	t11 = valueT(0.93969262078590838405) * t35 - valueT(0.34202014332566873304) * t36;
	t35 = valueT(0.34202014332566873304) * t35 + valueT(0.93969262078590838405) * t36;
	t12 = valueT(0.17364817766693034885) * t40 + valueT(0.98480775301220805937) * t39;
	t40 = valueT(0.98480775301220805937) * t40 - valueT(0.17364817766693034885) * t39;
	t36 = valueT(0.17364817766693034885) * t3 - valueT(0.98480775301220805937) * t4;
	t3 = valueT(0.98480775301220805937) * t3 + valueT(0.17364817766693034885) * t4;
	t4 = valueT(0.7660444431189780352) * t17 - valueT(0.64278760968653932632) * t18;
	t17 = valueT(0.64278760968653932632) * t17 + valueT(0.7660444431189780352) * t18;
	t18 = valueT(0.93969262078590838405) * t7 + valueT(0.34202014332566873304) * t8;
	t7 = valueT(0.34202014332566873304) * t7 - valueT(0.93969262078590838405) * t8;
	t8 = valueT(0.17364817766693034885) * t21 - valueT(0.98480775301220805937) * t22;
	t21 = valueT(0.98480775301220805937) * t21 + valueT(0.17364817766693034885) * t22;
	t22 = valueT(0.17364817766693034885) * t29 + valueT(0.98480775301220805937) * t30;
	t29 = valueT(0.98480775301220805937) * t29 - valueT(0.17364817766693034885) * t30;
	t30 = valueT(0.7660444431189780352) * t32 + valueT(0.64278760968653932632) * t31;
	t32 = valueT(0.64278760968653932632) * t32 - valueT(0.7660444431189780352) * t31;
	t31 = t11 - t22;
	t39 = t35 + t29;
	t11 += t22;
	t35 -= t29;
	t22 = t12 + t30;
	t29 = t40 + t32;
	t12 -= t30;
	t40 -= t32;
	t30 = t27 - t23;
	t32 = t28 - t24;
	t27 += t23;
	t28 += t24;
	t23 = t5 - t9;
	t24 = t6 - t10;
	t5 += t9;
	t6 += t10;
	t9 = t36 + t18;
	t10 = t3 - t7;
	t36 -= t18;
	t3 += t7;
	t7 = t4 - t8;
	t18 = t17 - t21;
	t4 += t8;
	t17 += t21;
	t1 += t5;
	t2 += t6;
	t33 += t36;
	t34 += t3;
	t13 += t4;
	t14 += t17;
	t25 = t11 + t25;
	t26 = t35 + t26;
	t16 = t12 - t16;
	t15 = t40 + t15;
	t19 = t27 + t19;
	t20 = t28 + t20;
	t39 *= valueT(0.86602540378443864676);
	t31 *= valueT(0.86602540378443864676);
	t11 *= valueT(1.5);
	t35 *= valueT(1.5);
	t29 *= valueT(0.86602540378443864676);
	t22 *= valueT(0.86602540378443864676);
	t12 *= valueT(1.5);
	t40 *= valueT(1.5);
	t32 *= valueT(0.86602540378443864676);
	t30 *= valueT(0.86602540378443864676);
	t27 *= valueT(1.5);
	t28 *= valueT(1.5);
	t24 *= valueT(0.86602540378443864676);
	t23 *= valueT(0.86602540378443864676);
	t5 *= valueT(1.5);
	t6 *= valueT(1.5);
	t10 *= valueT(0.86602540378443864676);
	t9 *= valueT(0.86602540378443864676);
	t36 *= valueT(1.5);
	t3 *= valueT(1.5);
	t18 *= valueT(0.86602540378443864676);
	t7 *= valueT(0.86602540378443864676);
	t4 *= valueT(1.5);
	t17 *= valueT(1.5);
	t8 = t1 - t19;
	t21 = t2 - t20;
	t1 += t19;
	t2 += t20;
	t19 = t33 + t25;
	t20 = t34 - t26;
	t33 -= t25;
	t34 += t26;
	t25 = t13 + t16;
	t26 = t14 + t15;
	t13 -= t16;
	t14 -= t15;
	t15 = t39 + t10;
	t16 = t31 - t9;
	t39 -= t10;
	t31 += t9;
	t9 = t11 + t36;
	t10 = t35 - t3;
	t11 -= t36;
	t35 += t3;
	t3 = t29 - t18;
	t36 = t22 - t7;
	t29 += t18;
	t22 += t7;
	t7 = t12 + t4;
	t18 = t40 + t17;
	t12 -= t4;
	t40 -= t17;
	t4 = t32 + t24;
	t17 = t30 + t23;
	t32 -= t24;
	t30 -= t23;
	t23 = t27 - t5;
	t24 = t28 - t6;
	t27 += t5;
	t28 += t6;
	t23 = t8 + t23;
	t24 = t21 + t24;
	t27 = t1 - t27;
	t28 = t2 - t28;
	t9 = t19 - t9;
	t10 = t20 + t10;
	t11 = t33 + t11;
	t35 = t34 - t35;
	t7 = t25 - t7;
	t18 = t26 - t18;
	t12 = t13 + t12;
	t40 = t14 + t40;
	pReal[0 * stride] = t1;
	pImag[0 * stride] = t2;
	pReal[1 * stride] = t25;
	pImag[1 * stride] = t26;
	pReal[2 * stride] = t33;
	pImag[2 * stride] = t34;
	pReal[3 * stride] = t23 - t4;
	pImag[3 * stride] = t24 + t17;
	pReal[4 * stride] = t12 - t29;
	pImag[4 * stride] = t40 + t22;
	pReal[5 * stride] = t9 - t15;
	pImag[5 * stride] = t10 - t16;
	pReal[6 * stride] = t27 - t32;
	pImag[6 * stride] = t28 + t30;
	pReal[7 * stride] = t7 - t3;
	pImag[7 * stride] = t18 + t36;
	pReal[8 * stride] = t11 - t39;
	pImag[8 * stride] = t35 - t31;
	pReal[9 * stride] = t8;
	pImag[9 * stride] = t21;
	pReal[10 * stride] = t13;
	pImag[10 * stride] = t14;
	pReal[11 * stride] = t19;
	pImag[11 * stride] = t20;
	pReal[12 * stride] = t27 + t32;
	pImag[12 * stride] = t28 - t30;
	pReal[13 * stride] = t7 + t3;
	pImag[13 * stride] = t18 - t36;
	pReal[14 * stride] = t11 + t39;
	pImag[14 * stride] = t35 + t31;
	pReal[15 * stride] = t23 + t4;
	pImag[15 * stride] = t24 - t17;
	pReal[16 * stride] = t12 + t29;
	pImag[16 * stride] = t40 - t22;
	pReal[17 * stride] = t9 + t15;
	pImag[17 * stride] = t10 + t16;
}

template<> void StandardModule<float, 18>::Compute(float *pReal, float *pImag, ptrdiff_t stride, size_t twiddleStart, size_t twiddleIncrement) const
{
	ComputeCore(mPhasors, pReal, pImag, stride, twiddleStart, twiddleIncrement);
}

template<> void StandardModule<double, 18>::Compute(double *pReal, double *pImag, ptrdiff_t stride, size_t twiddleStart, size_t twiddleIncrement) const
{
	ComputeCore(mPhasors, pReal, pImag, stride, twiddleStart, twiddleIncrement);
}

}
}
