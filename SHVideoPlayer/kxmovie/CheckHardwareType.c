//
//  CheckHardwareType.c
//  SHVideoPlayer
//
//  Created by york on 2025/6/12.
//

#include "CheckHardwareType.h"


enum AVHWDeviceType checkSupportHardwareType(void) {
    enum AVHWDeviceType devices[] = {
        AV_HWDEVICE_TYPE_NONE,
        AV_HWDEVICE_TYPE_VDPAU,
        AV_HWDEVICE_TYPE_CUDA,
        AV_HWDEVICE_TYPE_VAAPI,
        AV_HWDEVICE_TYPE_DXVA2,
        AV_HWDEVICE_TYPE_QSV,
        AV_HWDEVICE_TYPE_VIDEOTOOLBOX,
        AV_HWDEVICE_TYPE_D3D11VA,
        AV_HWDEVICE_TYPE_DRM,
        AV_HWDEVICE_TYPE_OPENCL,
        AV_HWDEVICE_TYPE_MEDIACODEC,
        AV_HWDEVICE_TYPE_VULKAN,
    };
    int count = sizeof(devices);
    enum AVHWDeviceType supportType = AV_HWDEVICE_TYPE_NONE;
    for (int i = 0; i< count; i++) {
        enum AVHWDeviceType it = devices[i];
        printf("type %d \n",it);
        enum AVHWDeviceType sp = av_hwdevice_iterate_types(it);
        if (sp == AV_HWDEVICE_TYPE_NONE) {
            continue;
        }
        supportType = sp;
        break;
    }
    printf("支持： %d\n",supportType);
    
    
    
    
    return supportType;
}
