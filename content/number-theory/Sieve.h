/**
 * Author: 
 * Description: Compute least prime factor, phi, and mu
 * Time: $O(n)$
 * Status: Works
 */
#pragma once

const int LIM = 1e6;
vi lp(LIM+1), phi(LIM+1), mu(LIM+1), pr;
void sieve() {
    phi[1] = mu[1] = 1;
    for (int i=2; i <= LIM; ++i) {
        if (lp[i] == 0) {
            lp[i] = i; pr.push_back(i);
            phi[i] = i-1; mu[i] = -1;
        }
        for (int j = 0; i * pr[j] <= LIM; ++j) {
            lp[i*pr[j]] = pr[j];
            if (lp[i] == pr[j]) {
                phi[i*pr[j]] = phi[i] * pr[j]; mu[i*pr[j]] = 0;
                break;
            }
            phi[i*pr[j]] = phi[i]*phi[pr[j]]; mu[i*pr[j]] = -mu[i];
        }
    }
}