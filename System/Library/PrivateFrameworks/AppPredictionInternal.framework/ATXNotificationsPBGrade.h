/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:35 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppPredictionInternal/AppPredictionInternal-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface ATXNotificationsPBGrade : PBCodable <NSCopying> {

	NSString* _category;
	NSString* _rating;

}

@property (nonatomic,readonly) BOOL hasRating; 
@property (nonatomic,retain) NSString * rating;                //@synthesize rating=_rating - In the implementation block
@property (nonatomic,readonly) BOOL hasCategory; 
@property (nonatomic,retain) NSString * category;              //@synthesize category=_category - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasCategory;
-(NSString *)rating;
-(void)setRating:(NSString *)arg1 ;
-(BOOL)hasRating;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)setCategory:(NSString *)arg1 ;
-(NSString *)category;
@end
