#pragma once
#include <xmmintrin.h>
#include <iostream>
using namespace std;

class MyTestSSE
{
private:

    __m128 addWithAssembly(const __m128 a, const __m128 b)
    {
        // 64 位不支持
        __asm addps xmm0, xmm1
    }

    __m128 addWithIntrinsics(const __m128 a, const __m128 b)
    {
        return _mm_add_ps(a, b);
    }

public:
    void testSSE()
    {
        //align(16) 强制内存对其
        __declspec (align(16)) float A[4];

        __declspec (align(16)) float B[4]
            = { 8.0f, 6.0f, 4.0f, 2.0f };

        __declspec (align(16)) float C[4];
        __declspec (align(16)) float D[4];

        __m128 a = _mm_set_ps(1.0f, 2.0f, 3.0f, 4.0f);
        __m128 b = _mm_load_ps(&B[0]);

        __m128 c = addWithAssembly(a, b);
        __m128 d = addWithIntrinsics(a, b);

        _mm_store_ps(&A[0], a);
        _mm_store_ps(&B[0], b);
        _mm_store_ps(&C[0], c);
        _mm_store_ps(&D[0], d);

        cout << "A: " << A[0] << "," << A[1] << "," << A[2] << ","<< A[3] << "," <<endl;
    }

};

