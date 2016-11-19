#include "unknwn.h"


// {EED9D53A-F673-48d3-8C38-D8F8F7488C5C}
static const GUID  IID_ISimpleMath = 
{ 0xeed9d53a, 0xf673, 0x48d3, { 0x8c, 0x38, 0xd8, 0xf8, 0xf7, 0x48, 0x8c, 0x5c } };

// {1D5978A9-0F14-4964-AACE-BE3DF8676B87}
static const GUID IID_IAdvancedMath  = 
{ 0x1d5978a9, 0xf14, 0x4964, { 0xaa, 0xce, 0xbe, 0x3d, 0xf8, 0x67, 0x6b, 0x87 } };

class ISimpleMath : public IUnknown
{
public:
	virtual  void _stdcall Add(int nOp1,int nOp2,int * pret) = 0;
};

class IAdvancedMath : public IUnknown
{
public:
	virtual void _stdcall Factorial(int nOp1,int *pret) = 0;
	
};
