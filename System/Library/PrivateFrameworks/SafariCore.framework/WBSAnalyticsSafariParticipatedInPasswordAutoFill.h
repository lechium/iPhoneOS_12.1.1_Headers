/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:04 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariCore/SafariCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface WBSAnalyticsSafariParticipatedInPasswordAutoFill : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	int _autoFillInteractionType;
	SCD_Struct_WB1 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                 //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasAutoFillInteractionType; 
@property (assign,nonatomic) int autoFillInteractionType;                  //@synthesize autoFillInteractionType=_autoFillInteractionType - In the implementation block
-(int)autoFillInteractionType;
-(void)setAutoFillInteractionType:(int)arg1 ;
-(void)setHasAutoFillInteractionType:(BOOL)arg1 ;
-(BOOL)hasAutoFillInteractionType;
-(id)autoFillInteractionTypeAsString:(int)arg1 ;
-(int)StringAsAutoFillInteractionType:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)timestamp;
-(id)dictionaryRepresentation;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

