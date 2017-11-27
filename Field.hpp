class Fields
{
public:
    Fields();
    Fields(Fields &&) = default;
    Fields(const Fields &) = default;
    Fields &operator=(Fields &&) = default;
    Fields &operator=(const Fields &) = default;
    ~Fields();

private:
};

Fields::Fields()
{
}

Fields::~Fields()
{
}

class Field1d:Fields
{
};
class Field2d:Fields
{
};
class Field3d:Fields
{
};