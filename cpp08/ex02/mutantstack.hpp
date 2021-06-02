#ifndef MUTANT_STACK_HPP
# define MUTANT_STACK_HPP
# include <stack>

template<typename T>
class MutantStack : public std::stack<T>
{
private:
public:
    MutantStack() : std::stack<T>(){}

    MutantStack(const MutantStack<T>& s) : std::stack<T>(s) {}

    virtual ~MutantStack() {}
    MutantStack& operator= (const MutantStack& s)
    {
        std::stack<T>::operator=(s);
    }
    typedef typename std::stack<T>::container_type::iterator iterator;
    typedef typename std::stack<T>::container_type::const_iterator const_iterator;
    typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
    typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;
    iterator begin() {return this->c.begin(); };
    const_iterator begin() const {return this->c.begin(); };
    reverse_iterator rbegin() {return this->c.begin(); };
    const_reverse_iterator rbegin() const {this->c.rebegin(); };
    iterator end() { return this->c.end(); };
    const_iterator end() const { return this->c.end(); };
    reverse_iterator rend() {return this->c.end(); };
    const_reverse_iterator rend() const {return this->c.rend(); };
};

#endif
