/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:05 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSArray, GEOJunction, NSString, NSDictionary;

@interface MNGuidanceSignDescription : NSObject <NSSecureCoding> {

	int _shieldID;
	int _composedGuidanceEventIndex;
	NSUUID* _uniqueID;
	NSArray* _titles;
	NSArray* _details;
	GEOJunction* _junction;
	NSString* _shieldText;
	NSString* _shieldStringID;
	NSDictionary* _variableOverrides;
	long long _distanceDetailLevel;

}

@property (nonatomic,readonly) NSUUID * uniqueID;                             //@synthesize uniqueID=_uniqueID - In the implementation block
@property (nonatomic,readonly) NSArray * titles;                              //@synthesize titles=_titles - In the implementation block
@property (nonatomic,readonly) NSArray * details;                             //@synthesize details=_details - In the implementation block
@property (nonatomic,readonly) NSDictionary * variableOverrides;              //@synthesize variableOverrides=_variableOverrides - In the implementation block
@property (nonatomic,readonly) long long distanceDetailLevel;                 //@synthesize distanceDetailLevel=_distanceDetailLevel - In the implementation block
@property (nonatomic,readonly) GEOJunction * junction;                        //@synthesize junction=_junction - In the implementation block
@property (nonatomic,readonly) NSString * shieldText;                         //@synthesize shieldText=_shieldText - In the implementation block
@property (nonatomic,readonly) int shieldID;                                  //@synthesize shieldID=_shieldID - In the implementation block
@property (nonatomic,readonly) NSString * shieldStringID;                     //@synthesize shieldStringID=_shieldStringID - In the implementation block
@property (nonatomic,readonly) int composedGuidanceEventIndex;                //@synthesize composedGuidanceEventIndex=_composedGuidanceEventIndex - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSUUID *)uniqueID;
-(NSString *)shieldText;
-(NSArray *)details;
-(GEOJunction *)junction;
-(int)shieldID;
-(NSString *)shieldStringID;
-(long long)distanceDetailLevel;
-(NSDictionary *)variableOverrides;
-(int)composedGuidanceEventIndex;
-(id)initWithID:(id)arg1 titles:(id)arg2 details:(id)arg3 variableOverrides:(id)arg4 distanceDetailLevel:(int)arg5 junction:(id)arg6 shieldText:(id)arg7 shieldID:(int)arg8 shieldStringID:(id)arg9 composedGuidanceEventIndex:(int)arg10 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(NSArray *)titles;
@end
