
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNMifareClassicSpec.h"

@interface MifareClassic : NSObject <NativeMifareClassicSpec>
#else
#import <React/RCTBridgeModule.h>

@interface MifareClassic : NSObject <RCTBridgeModule>
#endif

@end
