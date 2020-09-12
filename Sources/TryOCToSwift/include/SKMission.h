//
//  Header.h
//  
//
//  Created by 游宗諭 on 2020/9/12.
//

#ifndef SKMission_h
#define SKMission_h
#include <Foundation/Foundation.h>
@interface SKMission: NSObject
- (instancetype) initWithName:(NSString *) name
                   launchDate:(NSDate *) launchDate
                       rocket: (NSString *) rocket
                      capsule:(NSString *) capsule;
- (instancetype) initWithContentofURL:(NSURL *)url
                                error:(NSError **) error;
@property(copy) NSString *name;
@property(strong) NSDate *launchDate;
@property(copy) NSString *rocket;
@property(copy) NSString *capsule;
@property(copy) NSArray *crews;
-(BOOL) saveToURL:(NSURL *) url
            error: (NSError **)error;
@end
#endif /* Header_h */
