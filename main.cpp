#include "math.h"

int main()
{
	HRESULT hr;
	IUnknown *pIUnkonwn = static_cast<ISimpleMath*> (new CMath);
	pIUnkonwn->AddRef();
	ISimpleMath *pIS = NULL;
	hr = pIUnkonwn->QueryInterface(IID_ISimpleMath,(void **)&pIS);
	if(SUCCEEDED(hr))
	{
		cout<<"Client::Succeeded getting ISimpleMath:"<<endl;
		int kk;
		pIS->Add(11,22,&kk);
		pIS->Release();
	}
	cout<<"Client::get another IAdvancedMath"<<endl;
	IAdvancedMath *pIA = NULL;
	hr = pIUnkonwn->QueryInterface(IID_IAdvancedMath,(void**)&pIA);
	if(SUCCEEDED(hr))
	{
		cout<<"CLient::Succeeded geting IADvanceMath"<<"\n";
		int mm;
		pIA->Factorial(5,&mm);
		pIA->Release();
	}
	cout<<"Client:Release interface IUnknown"<<"|n";
	pIUnkonwn->Release();
	return 0;
}