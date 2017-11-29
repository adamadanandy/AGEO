namespace Geometry
{
class Grids
{
public:
  //define grids: allocate and determine coordinates(in specific geometry defined by geometry class)
  void setup_grids(double);
  int get_dim();
  int get_grid_num();
  double* get_coordinates();
  double* get_xyz();

private:
  int dim; //(max dimension defined by geometry class)
  int grid_num; //(# of all grid points)
  double *grids; //(coordinates of grid points)
  friend class Fields;
  friend class Particles;
};

class Fields
{
public:
  Fields();
  Fields(Fields &&) = default;
  Fields(const Fields &) = default;
  Fields &operator=(Fields &&) = default;
  Fields &operator=(const Fields &) = default;
  ~Fields();
  void set_grids(const Grids &);
  virtual void set_value() = 0;

private:
  int dim;
};

class VectorFields : public Fields
{
public:
  static int get_dim(const Fields &);
  ScalarFields div();
};

class ScalarFields : public Fields
{
public:
  static int get_dim()
  {
    return 1;
  }
  VectorFields gradient();
};

class EqB : public ScalarFields
{
  public:
    void set_value() override;
};
}