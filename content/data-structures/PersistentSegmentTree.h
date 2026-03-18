/**
 * Author: Akash
 * Date: 
 * License: 
 * Source: me
 * Description: Based on lazy segtree, just supports incrementing an index. Good for when used to store frequencies, update array from left to right
 */
#pragma once

#include "../various/BumpAllocator.h"

struct Node {
    Node *l = 0, *r = 0;
    int lo, hi;
    ll val = 0;
    Node(int lo,int hi):lo(lo),hi(hi){}
    Node (int lo, int hi, ll mset) : lo(lo), hi(hi) {
        if (lo + 1 < hi){
            int mid = lo + (hi - lo) / 2;
            l = new Node(lo, mid, mset); r = new Node(mid, hi, mset);
            val = l->val + r->val;
        }
        else val = mset;
    }

    ll query(int L, int R) {
        if (R <= lo || hi <= L) return 0;
        if (L <= lo && hi <= R) return val;
        return l->query(L,R) + r->query(L,R);
    }

    Node* inc(int x) { // L = x, R = x + 1
        if (x < lo || hi <= x) return this;
        if (x <= lo && hi <= x + 1) {
            return new Node(lo, hi, val + 1);
        }

        Node* newl = l->inc(x);
        Node* newr = r->inc(x);

        Node* newcurr = new Node(lo, hi);
        newcurr->l = newl;
        newcurr->r = newr;
        newcurr->val = newl->val + newr->val;
        return newcurr;
    }
};