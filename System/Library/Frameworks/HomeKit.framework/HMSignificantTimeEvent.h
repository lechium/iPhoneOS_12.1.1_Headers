/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:02 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKit/HomeKit-Structs.h>
#import <HomeKit/HMTimeEvent.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSString, NSDateComponents;

@interface HMSignificantTimeEvent : HMTimeEvent <NSSecureCoding, NSCopying, NSMutableCopying> {

	NSString* _significantEvent;
	NSDateComponents* _offset;

}

@property (nonatomic,retain) NSString * significantEvent;              //@synthesize significantEvent=_significantEvent - In the implementation block
@property (nonatomic,retain) NSDateComponents * offset;                //@synthesize offset=_offset - In the implementation block
+(id)createWithDictionary:(id)arg1 home:(id)arg2 ;
+(BOOL)supportsSecureCoding;
-(void)_handleEventUpdatedNotification:(id)arg1 ;
-(void)_updateSignificantEvent:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithDict:(id)arg1 significantEvent:(id)arg2 offset:(id)arg3 ;
-(void)_update:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_updateOffset:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateOffset:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateSignificantEvent:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithSignificantEvent:(id)arg1 offset:(id)arg2 ;
-(NSString *)significantEvent;
-(void)setSignificantEvent:(NSString *)arg1 ;
-(id)_serializeForAdd;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSDateComponents *)offset;
-(void)setOffset:(NSDateComponents *)arg1 ;
@end

