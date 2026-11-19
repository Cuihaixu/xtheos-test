#import <Foundation/Foundation.h>

FOUNDATION_EXPORT double SandDemoKitVersionNumber;
FOUNDATION_EXPORT const unsigned char SandDemoKitVersionString[];

@interface SandDemoKit : NSObject
+ (NSString *)version;
@end
