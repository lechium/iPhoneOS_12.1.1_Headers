/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:24 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NPKProtoDumpLogsResponse : PBCodable <NSCopying> {

	BOOL _success;
	SCD_Struct_NP2 _has;

}

@property (assign,nonatomic) BOOL hasSuccess; 
@property (assign,nonatomic) BOOL success;                 //@synthesize success=_success - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)success;
-(void)setSuccess:(BOOL)arg1 ;
-(void)setHasSuccess:(BOOL)arg1 ;
-(BOOL)hasSuccess;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
@end

