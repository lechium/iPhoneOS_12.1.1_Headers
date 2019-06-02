/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:14 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface _MRTextInputMessageProtobuf : PBCodable <NSCopying> {

	double _timestamp;
	int _actionType;
	NSString* _text;
	SCD_Struct_MR2 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) double timestamp;                //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasText; 
@property (nonatomic,retain) NSString * text;                 //@synthesize text=_text - In the implementation block
@property (assign,nonatomic) BOOL hasActionType; 
@property (assign,nonatomic) int actionType;                  //@synthesize actionType=_actionType - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setHasActionType:(BOOL)arg1 ;
-(BOOL)hasActionType;
-(id)actionTypeAsString:(int)arg1 ;
-(int)StringAsActionType:(id)arg1 ;
-(int)actionType;
-(void)setActionType:(int)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setText:(NSString *)arg1 ;
-(NSString *)text;
-(double)timestamp;
-(id)dictionaryRepresentation;
-(void)setTimestamp:(double)arg1 ;
-(BOOL)hasText;
-(void)copyTo:(id)arg1 ;
@end

