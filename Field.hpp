namespace Geometry
{

class Fields
{
public:
  Fields(int dim);
  Fields(Fields &&) = default;
  Fields(const Fields &) = default;
  Fields &operator=(Fields &&) = default;
  Fields &operator=(const Fields &) = default;
  ~Fields();
  void gradient();

private:
};
class EqFields : public Fields
{
public:
  void set_values();
};

class SolvedFields : public Fields
{
public:
  void solve();
};

class EqB : public EqFields
{
};

class Grids
{
public:
  void setup_grids();
  void set_grids_coordinate(double);

private:
  int grid_num;
  double *grids;
  friend Fields;
};
}