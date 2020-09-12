//
//  SKConstant.h
//  TryOCToSwift
//
//  Created by 游宗諭 on 2020/9/12.
//

#ifndef SKConstant_h
#define SKConstant_h
#include <Foundation/Foundation.h>
NS_ASSUME_NONNULL_BEGIN

/**
 ```swift
 public struct SKRocket : Hashable, Equatable, RawRepresentable {

     public init(rawValue: String)
 }
 extension SKRocket {

     
     public static let atlas: SKRocket

     public static let titanII: SKRocket

     public static let saturnIB: SKRocket

     public static let saturnV: SKRocket
 }

 public func SKRocketStageCount(_: SKRocket) -> Int

 ```
 */
typedef NSString *SKRocket NS_STRING_ENUM;

SKRocket const SKRocketAtlas;
SKRocket const SKRocketTitanII;
SKRocket const SKRocketSaturnIB;
SKRocket const SKRocketSaturnV;

NSInteger SKRocketStageCount(SKRocket);

NS_ASSUME_NONNULL_END
#endif /* SKConstant_h */
