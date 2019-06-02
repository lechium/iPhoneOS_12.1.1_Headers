/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:33 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ActivitySharing.framework/ActivitySharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate;

@interface ASRelationshipEvent : NSObject {

	unsigned short _type;
	unsigned short _anchor;
	NSDate* _timestamp;

}

@property (nonatomic,readonly) unsigned short type;                //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) unsigned short anchor;              //@synthesize anchor=_anchor - In the implementation block
@property (nonatomic,readonly) NSDate * timestamp;                 //@synthesize timestamp=_timestamp - In the implementation block
+(id)relationshipEventWithRecord:(id)arg1 ;
+(id)_relationshipEventWithCodable:(id)arg1 ;
-(id)_codableRelationshipEvent;
-(id)initWithType:(unsigned short)arg1 anchor:(unsigned short)arg2 timestamp:(id)arg3 ;
-(BOOL)isEqualToRelationshipEvent:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(unsigned short)type;
-(NSDate *)timestamp;
-(unsigned short)anchor;
@end
