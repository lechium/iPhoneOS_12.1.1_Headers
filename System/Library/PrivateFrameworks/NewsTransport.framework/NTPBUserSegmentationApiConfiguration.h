/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:40 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NTPBUserSegmentationApiConfiguration : PBCodable <NSCopying> {

	NSString* _userSegmentationApiModMax;
	NSString* _userSegmentationApiModThreshold;
	NSString* _userSegmentationRefreshRate;

}

@property (nonatomic,readonly) BOOL hasUserSegmentationApiModThreshold; 
@property (nonatomic,retain) NSString * userSegmentationApiModThreshold;              //@synthesize userSegmentationApiModThreshold=_userSegmentationApiModThreshold - In the implementation block
@property (nonatomic,readonly) BOOL hasUserSegmentationApiModMax; 
@property (nonatomic,retain) NSString * userSegmentationApiModMax;                    //@synthesize userSegmentationApiModMax=_userSegmentationApiModMax - In the implementation block
@property (nonatomic,readonly) BOOL hasUserSegmentationRefreshRate; 
@property (nonatomic,retain) NSString * userSegmentationRefreshRate;                  //@synthesize userSegmentationRefreshRate=_userSegmentationRefreshRate - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setUserSegmentationApiModThreshold:(NSString *)arg1 ;
-(BOOL)hasUserSegmentationApiModThreshold;
-(void)setUserSegmentationApiModMax:(NSString *)arg1 ;
-(BOOL)hasUserSegmentationApiModMax;
-(NSString *)userSegmentationApiModThreshold;
-(NSString *)userSegmentationApiModMax;
-(void)setUserSegmentationRefreshRate:(NSString *)arg1 ;
-(BOOL)hasUserSegmentationRefreshRate;
-(NSString *)userSegmentationRefreshRate;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
@end

