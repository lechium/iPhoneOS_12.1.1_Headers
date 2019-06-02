/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:24 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CoreLocationProtobuf.framework/CoreLocationProtobuf
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreLocationProtobuf/CoreLocationProtobuf-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface CLPMeta : PBCodable <NSCopying> {

	long long _submissionId;
	NSString* _probeId;
	NSString* _productId;
	NSString* _softwareVersion;
	SCD_Struct_CL2 _has;

}

@property (nonatomic,retain) NSString * productId;                    //@synthesize productId=_productId - In the implementation block
@property (nonatomic,retain) NSString * softwareVersion;              //@synthesize softwareVersion=_softwareVersion - In the implementation block
@property (assign,nonatomic) BOOL hasSubmissionId; 
@property (assign,nonatomic) long long submissionId;                  //@synthesize submissionId=_submissionId - In the implementation block
@property (nonatomic,readonly) BOOL hasProbeId; 
@property (nonatomic,retain) NSString * probeId;                      //@synthesize probeId=_probeId - In the implementation block
-(void)setSubmissionId:(long long)arg1 ;
-(void)setHasSubmissionId:(BOOL)arg1 ;
-(BOOL)hasSubmissionId;
-(BOOL)hasProbeId;
-(long long)submissionId;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)productId;
-(void)setProductId:(NSString *)arg1 ;
-(void)setProbeId:(NSString *)arg1 ;
-(NSString *)probeId;
-(void)setSoftwareVersion:(NSString *)arg1 ;
-(NSString *)softwareVersion;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
@end

