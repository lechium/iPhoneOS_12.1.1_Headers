/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:27 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class VCPProtoTime;

@interface VCPProtoVideoKeyFrame : PBCodable <NSCopying> {

	float _curationScore;
	VCPProtoTime* _timestamp;

}

@property (nonatomic,retain) VCPProtoTime * timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) float curationScore;                   //@synthesize curationScore=_curationScore - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setCurationScore:(float)arg1 ;
-(float)curationScore;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(VCPProtoTime *)timestamp;
-(id)dictionaryRepresentation;
-(void)setTimestamp:(VCPProtoTime *)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

