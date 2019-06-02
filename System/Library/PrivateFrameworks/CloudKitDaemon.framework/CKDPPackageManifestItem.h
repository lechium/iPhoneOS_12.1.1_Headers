/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:45 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface CKDPPackageManifestItem : PBCodable <NSCopying> {

	long long _size;
	NSData* _signature;
	BOOL _lastItem;
	SCD_Struct_CK4 _has;

}

@property (nonatomic,readonly) BOOL hasSignature; 
@property (nonatomic,retain) NSData * signature;               //@synthesize signature=_signature - In the implementation block
@property (assign,nonatomic) BOOL hasSize; 
@property (assign,nonatomic) long long size;                   //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) BOOL hasLastItem; 
@property (assign,nonatomic) BOOL lastItem;                    //@synthesize lastItem=_lastItem - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasSize:(BOOL)arg1 ;
-(BOOL)hasSize;
-(BOOL)lastItem;
-(NSData *)signature;
-(void)setSignature:(NSData *)arg1 ;
-(BOOL)hasSignature;
-(void)setLastItem:(BOOL)arg1 ;
-(void)setHasLastItem:(BOOL)arg1 ;
-(BOOL)hasLastItem;
-(long long)size;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSize:(long long)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
@end

