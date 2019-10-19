Write a class implementing destructor function.
   class train
  { 
    int seat;

  public:
    ~train()
    {
      cout<<"deleting the iteams created";
    }
  };
int main()
{
  train t;
  return 0;
}
