# TryOCToSwift

A description of this package.
## problem
```Objective-C
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
```

```swift
// auto generate Swift 5 interface
import Foundation
open class SKMission : NSObject {
    public init!(name: String!, launch launchDate: Date!, rocket: String!, capsule: String!)
    public init(contentofURL url: URL!) throws
    open var name: String!
    open var launchDate: Date!
    open var rocket: String!
    open var capsule: String!
    open var crews: [Any]!
    open func save(to url: URL!) throws
}
```
optional property, array of `Any`, init with Error, method name is not follow Swift convention.

## 1. Describe nullability to control optionals

| improts into Swift as | methods and properties | Any pointer             |
| ----------------------- | ---------------------------- | -----------------------| 
|MyClass                     |      nonull                         | _Nonnull                  |
|MyClass?                    |     nullable                      | _Nullable                  |
|MyClass!                    |      null_unspecified         | _Null_unspecified    |



## `enum`  
```Objective-C
typedef NSString *SKRocket NS_STRING_ENUM;
```

## Rename api for Swift
`NS_SWIFT_NOTHROW DEPRECATED_ATTRIBUTE`

```objective-c

-(BOOL) saveToURL:(NSURL *) url
         wasDirty:(nullable BOOL *) wasDirty
            error: (NSError **)error
NS_REFINED_FOR_SWIFT;
```
👇👇👇👇👇
```swift
__save(to:URL, wasDirty:&wasDirty)
```
https://sketchk.xyz/2020/07/02/WWDC20-10680-Refine-Objective-C-frameworks-for-Swift/


