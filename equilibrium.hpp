namespace equilibrium
{
    class EqField
    {
    public:
        EqField();
        EqField(EqField &&) = default;
        EqField(const EqField &) = default;
        EqField &operator=(EqField &&) = default;
        EqField &operator=(const EqField &) = default;
        ~EqField();
    
    private:
        
    };
    
    EqField::EqField()
    {
    }
    
    EqField::~EqField()
    {
    }
    class EqB:EqField
    {
    public:
      EqB();
      ~EqB();
    };
    class EqT:EqField
    {
    };
}