#pragma once 

#include "SampleBase.h"

namespace Diligent
{

  class VoxApp final : public SampleBase
  {
  public:

      virtual void Initialize(IEngineFactory*   pEngineFactory,
                              IRenderDevice*    pDevice, 
                              IDeviceContext**  ppContexts, 
                              Uint32            NumDeferredCtx, 
                              ISwapChain*       pSwapChain)override final;
      virtual void Render()override final;
      virtual void Update(double CurrTime, double ElapsedTime)override final;
      virtual const Char* GetSampleName()const override final{return "Tutorial01: Hello Triangle";}

  private:
      RefCntAutoPtr<IPipelineState> m_pPSO;
  };
}
