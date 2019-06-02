/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:33 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CompanionSync/CompanionSync-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/SYChange.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSString;

@interface SYChange : PBCodable <SYChange, NSCopying> {

	unsigned long long _version;
	NSData* _changeData;
	NSString* _objectId;
	NSString* _sequencer;
	int _type;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * objectIdentifier; 
@property (nonatomic,readonly) NSString * sequencer; 
@property (nonatomic,readonly) long long changeType; 
@property (assign,nonatomic) int type;                                   //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSString * objectId;                        //@synthesize objectId=_objectId - In the implementation block
@property (assign,nonatomic) unsigned long long version;                 //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) BOOL hasChangeData; 
@property (nonatomic,retain) NSData * changeData;                        //@synthesize changeData=_changeData - In the implementation block
@property (nonatomic,readonly) BOOL hasSequencer; 
@property (nonatomic,retain) NSString * sequencer;                       //@synthesize sequencer=_sequencer - In the implementation block
+(id)changeWithObject:(id)arg1 updateType:(int)arg2 store:(id)arg3 ;
+(id)changeWithChangeObject:(id)arg1 serializer:(id)arg2 encodeUsingVersion:(long long)arg3 ;
+(id)changeWithChangeObject:(id)arg1 serializer:(id)arg2 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)typeAsString:(int)arg1 ;
-(int)StringAsType:(id)arg1 ;
-(NSString *)objectIdentifier;
-(long long)changeType;
-(id)changeObjectWithSerializer:(id)arg1 encodedByVersion:(long long)arg2 ;
-(id)changeObjectWithSerializer:(id)arg1 ;
-(NSData *)changeData;
-(NSString *)sequencer;
-(id)objectForStore:(id)arg1 ;
-(NSString *)objectId;
-(void)setObjectId:(NSString *)arg1 ;
-(void)setChangeData:(NSData *)arg1 ;
-(void)setSequencer:(NSString *)arg1 ;
-(BOOL)hasChangeData;
-(BOOL)hasSequencer;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)type;
-(void)setType:(int)arg1 ;
-(void)setVersion:(unsigned long long)arg1 ;
-(unsigned long long)version;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
@end
