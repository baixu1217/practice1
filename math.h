#include "interface.h"
#include <iostream>
using namespace std;
//math definition
class CMath :public ISimpleMath, public IAdvancedMath
{
public:
	CMath():m_Ref(0){}
	~CMath(){}
	virtual HRESULT _stdcall QueryInterface(const IID &iid,void **ppv);
	virtual ULONG _stdcall AddRef();
	virtual ULONG _stdcall Release();
	virtual void _stdcall Add(int nOp1,int nOp2,int * pret);
	virtual void _stdcall  Factorial(int nOp1,int *pret);
private:
     int m_Ref;
};
