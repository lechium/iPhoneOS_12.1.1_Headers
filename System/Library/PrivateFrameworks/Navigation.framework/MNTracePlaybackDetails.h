/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:05 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Navigation/Navigation-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString;

@interface MNTracePlaybackDetails : PBCodable <NSCopying> {

	double _currentPosition;
	double _traceDuration;
	NSMutableArray* _bookmarks;
	int _eventType;
	unsigned _recordedBookmarkID;
	NSString* _tracePath;
	SCD_Struct_MN22 _has;

}

@property (assign,nonatomic) BOOL hasEventType; 
@property (assign,nonatomic) int eventType;                            //@synthesize eventType=_eventType - In the implementation block
@property (nonatomic,readonly) BOOL hasTracePath; 
@property (nonatomic,retain) NSString * tracePath;                     //@synthesize tracePath=_tracePath - In the implementation block
@property (assign,nonatomic) BOOL hasTraceDuration; 
@property (assign,nonatomic) double traceDuration;                     //@synthesize traceDuration=_traceDuration - In the implementation block
@property (assign,nonatomic) BOOL hasCurrentPosition; 
@property (assign,nonatomic) double currentPosition;                   //@synthesize currentPosition=_currentPosition - In the implementation block
@property (nonatomic,retain) NSMutableArray * bookmarks;               //@synthesize bookmarks=_bookmarks - In the implementation block
@property (assign,nonatomic) BOOL hasRecordedBookmarkID; 
@property (assign,nonatomic) unsigned recordedBookmarkID;              //@synthesize recordedBookmarkID=_recordedBookmarkID - In the implementation block
+(Class)bookmarkType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setEventType:(int)arg1 ;
-(void)setHasEventType:(BOOL)arg1 ;
-(BOOL)hasEventType;
-(id)eventTypeAsString:(int)arg1 ;
-(int)StringAsEventType:(id)arg1 ;
-(void)setTracePath:(NSString *)arg1 ;
-(void)setTraceDuration:(double)arg1 ;
-(void)setBookmarks:(NSMutableArray *)arg1 ;
-(NSString *)tracePath;
-(double)traceDuration;
-(unsigned)recordedBookmarkID;
-(void)addBookmark:(id)arg1 ;
-(unsigned long long)bookmarksCount;
-(void)clearBookmarks;
-(id)bookmarkAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasTracePath;
-(void)setHasTraceDuration:(BOOL)arg1 ;
-(BOOL)hasTraceDuration;
-(void)setHasCurrentPosition:(BOOL)arg1 ;
-(BOOL)hasCurrentPosition;
-(void)setRecordedBookmarkID:(unsigned)arg1 ;
-(void)setHasRecordedBookmarkID:(BOOL)arg1 ;
-(BOOL)hasRecordedBookmarkID;
-(void)setCurrentPosition:(double)arg1 ;
-(double)currentPosition;
-(NSMutableArray *)bookmarks;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(int)eventType;
-(void)copyTo:(id)arg1 ;
@end
