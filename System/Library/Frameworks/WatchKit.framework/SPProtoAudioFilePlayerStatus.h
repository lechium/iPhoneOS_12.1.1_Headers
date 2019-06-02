/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:28 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/WatchKit.framework/WatchKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WatchKit/WatchKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSString;

@interface SPProtoAudioFilePlayerStatus : PBCodable <NSCopying> {

	long long _errorCode;
	NSData* _errorDict;
	NSString* _errorDomain;
	NSString* _identifier;
	int _status;
	SCD_Struct_SP6 _has;

}

@property (nonatomic,readonly) BOOL hasIdentifier; 
@property (nonatomic,retain) NSString * identifier;               //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) BOOL hasStatus; 
@property (assign,nonatomic) int status;                          //@synthesize status=_status - In the implementation block
@property (nonatomic,readonly) BOOL hasErrorDomain; 
@property (nonatomic,retain) NSString * errorDomain;              //@synthesize errorDomain=_errorDomain - In the implementation block
@property (assign,nonatomic) BOOL hasErrorCode; 
@property (assign,nonatomic) long long errorCode;                 //@synthesize errorCode=_errorCode - In the implementation block
@property (nonatomic,readonly) BOOL hasErrorDict; 
@property (nonatomic,retain) NSData * errorDict;                  //@synthesize errorDict=_errorDict - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasIdentifier;
-(void)setHasStatus:(BOOL)arg1 ;
-(BOOL)hasStatus;
-(void)setErrorDomain:(NSString *)arg1 ;
-(BOOL)hasErrorDomain;
-(void)setErrorCode:(long long)arg1 ;
-(void)setHasErrorCode:(BOOL)arg1 ;
-(BOOL)hasErrorCode;
-(NSString *)errorDomain;
-(long long)errorCode;
-(void)setErrorDict:(NSData *)arg1 ;
-(BOOL)hasErrorDict;
-(NSData *)errorDict;
-(id)sockPuppetMessageForPlayerItemSetStatus;
-(id)sockPuppetMessageForQueuePlayerSetStatus;
-(NSString *)identifier;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(int)status;
-(void)copyTo:(id)arg1 ;
-(void)setStatus:(int)arg1 ;
@end

