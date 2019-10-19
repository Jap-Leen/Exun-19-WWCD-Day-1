Write a class implementing parameterized constructor.
  class train
  {
    int seat;
    int age;
    
    public:
    train(st=1,ag=4)
    {
      seat=st;
      age=ag;
    }
    
    void showd()
    {
      cout<<seat;
      cout<<age;
    } 
  };

  int main()
  {
    train t;
    t.showd();
    return 0;
  
  } 
    
    
