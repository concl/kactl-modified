mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
int n = rng()%10 // rng in [0,9]
int bit(int x) { return 31-__builtin_clz(x); } //floor(log2(x))

bitset<N> b; bitset<N> b(x); // initialize from integer
b.set(i); b.reset(i); b.flip(i);  // set bit i to 1 / 0, toggle
b[i]; b.count(); // access and count 1s
b.any(),b.none(),b.all()// checks if any/none/all bits are set
b <<= k, b >>= k   // shift bits left/right
b |= c, b &= c, b ^= c // OR / AND / XOR with another bitset
b.reset(); b.set() // all bits to 0 or 1
cout << b << "\n"; // print bitset