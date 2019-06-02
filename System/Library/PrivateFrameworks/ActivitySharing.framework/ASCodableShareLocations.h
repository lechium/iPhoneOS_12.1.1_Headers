/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:34 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ActivitySharing.framework/ActivitySharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ActivitySharing/ActivitySharing-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface ASCodableShareLocations : PBCodable <NSCopying> {

	NSString* _activityShareURL;
	NSString* _relationshipShareURL;

}

@property (nonatomic,readonly) BOOL hasActivityShareURL; 
@property (nonatomic,retain) NSString * activityShareURL;                  //@synthesize activityShareURL=_activityShareURL - In the implementation block
@property (nonatomic,readonly) BOOL hasRelationshipShareURL; 
@property (nonatomic,retain) NSString * relationshipShareURL;              //@synthesize relationshipShareURL=_relationshipShareURL - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setActivityShareURL:(NSString *)arg1 ;
-(void)setRelationshipShareURL:(NSString *)arg1 ;
-(BOOL)hasActivityShareURL;
-(BOOL)hasRelationshipShareURL;
-(NSString *)activityShareURL;
-(NSString *)relationshipShareURL;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
@end
