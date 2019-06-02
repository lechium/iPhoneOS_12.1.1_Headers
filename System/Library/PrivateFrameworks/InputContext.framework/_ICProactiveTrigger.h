/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:54 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/InputContext.framework/InputContext
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <InputContext/InputContext-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSSet, NSDictionary;

@interface _ICProactiveTrigger : NSObject <NSSecureCoding, NSCopying> {

	unsigned char _triggerSourceType;
	NSSet* _availableApps;
	NSDictionary* _attributedString;

}

@property (nonatomic,readonly) unsigned char triggerSourceType;              //@synthesize triggerSourceType=_triggerSourceType - In the implementation block
@property (nonatomic,retain) NSSet * availableApps;                          //@synthesize availableApps=_availableApps - In the implementation block
@property (nonatomic,readonly) NSDictionary * attributedString;              //@synthesize attributedString=_attributedString - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqualToProactiveTrigger:(id)arg1 ;
-(NSSet *)availableApps;
-(void)setAvailableApps:(NSSet *)arg1 ;
-(id)initWithSource:(unsigned char)arg1 attributes:(id)arg2 ;
-(unsigned char)triggerSourceType;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)attributedString;
@end
