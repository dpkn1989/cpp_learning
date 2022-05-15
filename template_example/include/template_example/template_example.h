template <typename T>
class Template_test{
    private:
        T x,y;
    public:
        Template_test(T x, T y);
        T Get_Sum();
};

template<typename T>
Template_test<T>::Template_test(T x, T y)
{
    this->x = x;
    this->y = y;
}

template<typename T>
T Template_test<T>::Get_Sum()
{
    return x+y; 
}