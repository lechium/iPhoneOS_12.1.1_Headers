/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:17 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/RTPredictionExpertFeatureAddon.h>

@protocol NSObjectNSCopyingNSSecureCoding;
@class NSString;

@interface RTPredictionExpertFeatureAddonContext : RTPredictionExpertFeatureAddon {

	NSString* _key;
	id<NSObject><NSCopying><NSSecureCoding> _value;

}

@property (nonatomic,readonly) NSString * key;                                             //@synthesize key=_key - In the implementation block
@property (nonatomic,readonly) id<NSObject><NSCopying><NSSecureCoding> value;              //@synthesize value=_value - In the implementation block
-(id)initWithKey:(id)arg1 value:(id)arg2 ;
-(long long)addonType;
-(id)description;
-(id<NSObject><NSCopying><NSSecureCoding>)value;
-(NSString *)key;
@end

