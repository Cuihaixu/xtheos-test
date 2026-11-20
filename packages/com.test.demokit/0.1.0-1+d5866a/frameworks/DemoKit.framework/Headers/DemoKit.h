#import <Foundation/Foundation.h>

FOUNDATION_EXPORT double DemoKitVersionNumber;
FOUNDATION_EXPORT const unsigned char DemoKitVersionString[];

@interface DemoKit : NSObject
+ (NSString *)version;
@end
