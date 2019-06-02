/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:32 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, GEOPDRating, NSString, GEOPDUser, NSMutableArray;

@interface GEOPDReview : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	double _reviewTime;
	GEOPDRating* _rating;
	NSString* _reviewId;
	GEOPDUser* _reviewer;
	NSMutableArray* _snippets;
	SCD_Struct_GE1 _has;

}

@property (nonatomic,retain) NSMutableArray * snippets;                      //@synthesize snippets=_snippets - In the implementation block
@property (assign,nonatomic) BOOL hasReviewTime; 
@property (assign,nonatomic) double reviewTime;                              //@synthesize reviewTime=_reviewTime - In the implementation block
@property (nonatomic,readonly) BOOL hasReviewer; 
@property (nonatomic,retain) GEOPDUser * reviewer;                           //@synthesize reviewer=_reviewer - In the implementation block
@property (nonatomic,readonly) BOOL hasReviewId; 
@property (nonatomic,retain) NSString * reviewId;                            //@synthesize reviewId=_reviewId - In the implementation block
@property (nonatomic,readonly) BOOL hasRating; 
@property (nonatomic,retain) GEOPDRating * rating;                           //@synthesize rating=_rating - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(id)reviewsForPlaceData:(id)arg1 ;
+(Class)snippetType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(NSMutableArray *)snippets;
-(void)setReviewer:(GEOPDUser *)arg1 ;
-(void)setReviewTime:(double)arg1 ;
-(void)setHasReviewTime:(BOOL)arg1 ;
-(BOOL)hasReviewTime;
-(BOOL)hasReviewer;
-(double)reviewTime;
-(GEOPDUser *)reviewer;
-(GEOPDRating *)rating;
-(id)_bestSnippet;
-(id)_bestSnippetLocale;
-(void)addSnippet:(id)arg1 ;
-(unsigned long long)snippetsCount;
-(void)clearSnippets;
-(id)snippetAtIndex:(unsigned long long)arg1 ;
-(void)setReviewId:(NSString *)arg1 ;
-(void)setRating:(GEOPDRating *)arg1 ;
-(BOOL)hasReviewId;
-(BOOL)hasRating;
-(void)setSnippets:(NSMutableArray *)arg1 ;
-(NSString *)reviewId;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
@end

