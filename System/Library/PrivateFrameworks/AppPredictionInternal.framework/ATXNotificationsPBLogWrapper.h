/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:38 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppPredictionInternal/AppPredictionInternal-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class ATXNotificationsPBGradedRecord, ATXNotificationsPBRecord, ATXNotificationsPBResponse;

@interface ATXNotificationsPBLogWrapper : PBCodable <NSCopying> {

	ATXNotificationsPBGradedRecord* _grecord;
	ATXNotificationsPBRecord* _record;
	ATXNotificationsPBResponse* _response;

}

@property (nonatomic,readonly) BOOL hasRecord; 
@property (nonatomic,retain) ATXNotificationsPBRecord * record;                     //@synthesize record=_record - In the implementation block
@property (nonatomic,readonly) BOOL hasResponse; 
@property (nonatomic,retain) ATXNotificationsPBResponse * response;                 //@synthesize response=_response - In the implementation block
@property (nonatomic,readonly) BOOL hasGrecord; 
@property (nonatomic,retain) ATXNotificationsPBGradedRecord * grecord;              //@synthesize grecord=_grecord - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setResponse:(ATXNotificationsPBResponse *)arg1 ;
-(BOOL)hasResponse;
-(ATXNotificationsPBRecord *)record;
-(BOOL)hasGrecord;
-(ATXNotificationsPBGradedRecord *)grecord;
-(void)setGrecord:(ATXNotificationsPBGradedRecord *)arg1 ;
-(BOOL)hasRecord;
-(void)setRecord:(ATXNotificationsPBRecord *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(ATXNotificationsPBResponse *)response;
-(void)copyTo:(id)arg1 ;
@end

