/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:31 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList, NSMutableArray;

@interface COMAPPLEFELDSPARPROTOCOLLIVERPOOLArticleScores : PBCodable <NSCopying> {

	COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList* _globalCohorts;
	COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList* _sourceChannelCohorts;
	NSMutableArray* _topicCohorts;

}

@property (nonatomic,retain) NSMutableArray * topicCohorts;                                                   //@synthesize topicCohorts=_topicCohorts - In the implementation block
@property (nonatomic,readonly) BOOL hasGlobalCohorts; 
@property (nonatomic,retain) COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList * globalCohorts;                     //@synthesize globalCohorts=_globalCohorts - In the implementation block
@property (nonatomic,readonly) BOOL hasSourceChannelCohorts; 
@property (nonatomic,retain) COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList * sourceChannelCohorts;              //@synthesize sourceChannelCohorts=_sourceChannelCohorts - In the implementation block
+(Class)topicCohortsType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)addTopicCohorts:(id)arg1 ;
-(unsigned long long)topicCohortsCount;
-(void)clearTopicCohorts;
-(id)topicCohortsAtIndex:(unsigned long long)arg1 ;
-(void)setGlobalCohorts:(COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *)arg1 ;
-(void)setSourceChannelCohorts:(COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *)arg1 ;
-(BOOL)hasGlobalCohorts;
-(BOOL)hasSourceChannelCohorts;
-(void)setTopicCohorts:(NSMutableArray *)arg1 ;
-(COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *)globalCohorts;
-(COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *)sourceChannelCohorts;
-(NSMutableArray *)topicCohorts;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
@end
