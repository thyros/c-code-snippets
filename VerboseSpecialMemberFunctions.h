class X
{
public:
    X() : i(++count) { std::cout << "X(): " << i << std::endl; }
    X(const X& x) : i(++count) { std::cout << "X(const&): " << i << " from: " << x.i << std::endl; }
    X(X&& x) : i(++count) { std::cout << "X(&&): " << i << " from: " << x.i << std::endl; }
    X& operator=(const X& x)  { std::cout << "operator=(const&): " << i << " assigned from: " << x.i << std::endl; return *this; }
    X& operator=(X&& x)  { std::cout << "operator=(&&): " << i << " assigned from: " << x.i << std::endl; return *this; }
    
    int i = 0;
    static int count;
};
int X::count = 0;
