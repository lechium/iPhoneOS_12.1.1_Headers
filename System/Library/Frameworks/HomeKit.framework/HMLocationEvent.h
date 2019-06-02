/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:01 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKit/HomeKit-Structs.h>
#import <HomeKit/HMEvent.h>
#import <libobjc.A.dylib/_HMLocationHandlerDelegate.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class CLRegion;

@interface HMLocationEvent : HMEvent <_HMLocationHandlerDelegate, NSSecureCoding, NSCopying, NSMutableCopying> {

	int _locationAuthorization;
	CLRegion* _region;

}

@property (assign,nonatomic) int locationAuthorization;              //@synthesize locationAuthorization=_locationAuthorization - In the implementation block
@property (nonatomic,retain) CLRegion * region;                      //@synthesize region=_region - In the implementation block
+(id)createWithDictionary:(id)arg1 home:(id)arg2 ;
+(BOOL)supportsSecureCoding;
-(id)initWithRegion:(id)arg1 ;
-(void)__configureWithContext:(id)arg1 eventTrigger:(id)arg2 ;
-(void)_updateRegion:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithDict:(id)arg1 region:(id)arg2 ;
-(void)_retrieveLocationEvent;
-(void)didUpdateAuthorization:(int)arg1 ;
-(void)updateRegion:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_handleEventUpdatedNotification:(id)arg1 ;
-(BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2 ;
-(id)_serializeForAdd;
-(int)locationAuthorization;
-(void)setLocationAuthorization:(int)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)setRegion:(CLRegion *)arg1 ;
-(CLRegion *)region;
@end

