/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:56 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/MailSupport.framework/MailSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MailSupport/MailSupport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDMailUserSuggestionsEngagment : PBCodable <NSCopying> {

	long long _searchTermLength;
	BOOL _topHitsPresent;
	BOOL _userSelectedTopHit;
	SCD_Struct_AW2 _has;

}

@property (assign,nonatomic) BOOL hasTopHitsPresent; 
@property (assign,nonatomic) BOOL topHitsPresent;                     //@synthesize topHitsPresent=_topHitsPresent - In the implementation block
@property (assign,nonatomic) BOOL hasUserSelectedTopHit; 
@property (assign,nonatomic) BOOL userSelectedTopHit;                 //@synthesize userSelectedTopHit=_userSelectedTopHit - In the implementation block
@property (assign,nonatomic) BOOL hasSearchTermLength; 
@property (assign,nonatomic) long long searchTermLength;              //@synthesize searchTermLength=_searchTermLength - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setTopHitsPresent:(BOOL)arg1 ;
-(void)setUserSelectedTopHit:(BOOL)arg1 ;
-(void)setSearchTermLength:(long long)arg1 ;
-(id)initWithSearchTermLength:(unsigned long long)arg1 topHitsPresent:(BOOL)arg2 userSelectedTopHit:(BOOL)arg3 ;
-(void)setHasTopHitsPresent:(BOOL)arg1 ;
-(BOOL)hasTopHitsPresent;
-(void)setHasUserSelectedTopHit:(BOOL)arg1 ;
-(BOOL)hasUserSelectedTopHit;
-(void)setHasSearchTermLength:(BOOL)arg1 ;
-(BOOL)hasSearchTermLength;
-(BOOL)topHitsPresent;
-(BOOL)userSelectedTopHit;
-(long long)searchTermLength;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
@end

