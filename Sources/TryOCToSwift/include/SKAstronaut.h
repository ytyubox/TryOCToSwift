//
//  SKAstronaut.h
//  
//
//  Created by 游宗諭 on 2020/9/12.
//

#ifndef SKAstronaut_h
#define SKAstronaut_h
#include <Foundation/Foundation.h>
NS_ASSUME_NONNULL_BEGIN
@interface SKAstronaut: NSObject
- (instancetype) initWithNameConponents:(NSPersonNameComponents *)name NS_DESIGNATED_INITIALIZER;

- (instancetype) initWithName:(NSString *)name;
- (instancetype) init NS_UNAVAILABLE;
@end
NS_ASSUME_NONNULL_END
#endif /* Header_h */
