/**
 * @file main.c
 * @author M. Ridwan Nurfauzi (mrnhp123@gmail.com)
 * @brief
 * @version 1.0
 * @date 2024-07-08
 *
 * @copyright Copyright (c) 2024
 *
 */

/**
 * Judul : Gerbang Logika
 *
 * 
 * Gerbang logika adalah komponen dasar dalam elektronika digital yang menerima satu atau lebih sinyal input digital dan menghasilkan sinyal output digital berdasarkan aturan logika tertentu.
 * Saya menggunakan tipe data bilangan bulat (integer) sebagai boolean.
 * Angka 0 untuk FALSE dan angka 1 untuk TRUE.
 *
 */

#include <stdio.h>

// Jenis-jenis Gerbang Logika

/**
 * @brief Gerbang logika AND menghasilkan output aktif jika semua inputnya aktif.
 *
 * @param a
 * @param b
 * @return int
 */
int AND(int a, int b)
{
    return a && b;
}

/**
 * @brief Gerbang logika OR menghasilkan output aktif jika salah satu, beberapa, atau bahkan semua inputnya aktif.
 *
 * @param a
 * @param b
 * @return int
 */
int OR(int a, int b)
{
    return a || b;
}

/**
 * @brief Gerbang logika NOT menghasilkan output dari kebalikan inputnya.
 *
 * @param a
 * @return int
 */
int NOT(int a)
{
    return !a;
}

/**
 * @brief Gerbang logika NAND adalah kebalikan dari gerbang logika AND.
 *
 * @param a
 * @param b
 * @return int
 */
int NAND(int a, int b)
{
    return !(a && b);
}

/**
 * @brief Gerbang logika NOR adalah kebalikan dari gerbang logika OR.
 *
 * @param a
 * @param b
 * @return int
 */
int NOR(int a, int b)
{
    return !(a || b);
}

/**
 * @brief Gerbang logika XOR menghasilkan output aktif jika jumlah input aktifnya ganjil.
 *
 * @param a
 * @param b
 * @return int
 */
int XOR(int a, int b)
{
    return a ^ b;
}

/**
 * @brief Gerbang logika XNOR adalah kebalikan dari gerbang logika XOR.
 *
 * @param a
 * @param b
 * @return int
 */
int XNOR(int a, int b)
{
    return !(a ^ b);
}

int main(int argc, char const *argv[])
{
    printf("AND : %i\n", AND(1, 1));
    printf("OR : %i\n", OR(0, 1));
    printf("NOT : %i\n", NOT(0));
    printf("NAND : %i\n", NAND(0, 1));
    printf("NOR : %i\n", NOR(0, 1));
    printf("XOR : %i\n", XOR(1, 0));
    printf("XNOR : %i\n", XNOR(0, 1));

    return 0;
}
