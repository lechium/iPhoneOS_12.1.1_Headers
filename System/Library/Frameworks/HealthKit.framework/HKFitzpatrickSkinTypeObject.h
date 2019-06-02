/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:04 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface HKFitzpatrickSkinTypeObject : NSObject <NSCopying, NSSecureCoding> {

	long long _skinType;

}

@property (readonly) long long skinType;              //@synthesize skinType=_skinType - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)_initWithSkinType:(long long)arg1 ;
-(long long)skinType;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
