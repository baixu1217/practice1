#include "math.h"
 void _stdcall CMath::Add(int oP1,int oP2,int *pVal)
{
	*pVal = oP1 + oP2;
	cout<<oP1<<"+"<<oP2<<"="<<*pVal<<endl;
}
 void _stdcall CMath::Factorial(int oP1,int *pVal)
{
	int t = 1;
	for(int i = 1; i <= oP1; i++)
		t *= i;
	*pVal = t;
	cout<<oP1<<"!"<<"="<<*pVal<<endl;
}

ULONG CMath::AddRef()
{
	m_Ref++;
	return (ULONG)m_Ref;
}
ULONG CMath::Release()
{
	m_Ref--;
	if(m_Ref == 0)
	{
		delete this;
		return 0;
	}
	return (ULONG)m_Ref;
}
HRESULT CMath::QueryInterface(const IID& iid,void **ppv)
{
	if(iid == IID_IUnknown)
	{
		*ppv = static_cast<ISimpleMath*>(this);
		((ISimpleMath*)(*ppv))->AddRef();
	}
	else if(iid == IID_ISimpleMath)
	{
		*ppv = static_cast<ISimpleMath*>(this);
		((ISimpleMath*)(*ppv))->AddRef();
	}
	else if(iid == IID_IAdvancedMath)
	{
		*ppv = static_cast<IAdvancedMath*>(this);
		((IAdvancedMath*)(*ppv))->AddRef();
	}
	else
	{
		*ppv = NULL;
		return E_NOINTERFACE;
	}
	return S_OK;
}