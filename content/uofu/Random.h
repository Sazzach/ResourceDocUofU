/**
 * Author: Samuel Zachary
 * Date: 2020-02-13
 * License: CC0
 * Source: Codeforces
 * Description: Properly generate and use random numbers
 */
#pragma once

//mt19937_64 if 64 bits needed
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
shuffle(permutation.begin(), permutation.end(), rng);
uniform_int_distribution<> dis(1, 6); // [a, b]
uniform_real_distribution<> dis2(0, 1.0); // [a, b)
int rand_value = dis(rng);

