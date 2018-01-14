//
//  Copyright (c) 2015 Intel Corporation. All rights reserved.
//

#import "talk/woogeen/sdk/include/objc/Woogeen/RTCMediaFormat.h"

#include "talk/woogeen/sdk/include/cpp/woogeen/base/mediaformat.h"

#ifndef WOOGEEN_CONFERENCE_OBJC_RTCREMOTEMIXEDSTREAM_INTERNAL_H_
#define WOOGEEN_CONFERENCE_OBJC_RTCREMOTEMIXEDSTREAM_INTERNAL_H_

@interface RTCVideoFormat (Internal)

- (instancetype)initWithNativeVideoFormat:
    (const woogeen::base::VideoFormat&)videoFormat;

@end

#endif  // WOOGEEN_CONFERENCE_OBJC_RTCREMOTEMIXEDSTREAM_INTERNAL_H_