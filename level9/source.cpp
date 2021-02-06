#include <cstring>
#include <cstdlib>

class N {
  public:
    char buf[108];
    int numb;
    N(int numb)
    {
      this->numb = numb;
    }
    void setAnnotation(char* str)
    {
      memcpy(this->buf, str, strlen(str));
    }
    int operator+(N *n)
    {
      return (this->numb + n->numb);
    }
    int operator-(N *n)
    {
      return (this->numb + n->numb);
    }
};

int main(int argc, char **argv)
{
	if (argc < 2)
  {
		exit(1);
	}
	N* a = new N(5);
	N* b = new N(6);
  a->setAnnotation(argv[1]);
	return b->operator+(a);
}
