class Probe
{
public:
    Probe();
    Probe(Probe &&) = default;
    Probe(const Probe &) = default;
    Probe &operator=(Probe &&) = default;
    Probe &operator=(const Probe &) = default;
    ~Probe();

private:
    
};

Probe::Probe()
{
}

Probe::~Probe()
{
}