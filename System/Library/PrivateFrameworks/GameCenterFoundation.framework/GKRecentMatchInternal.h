/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:38 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameCenterFoundation/GKInternalRepresentation.h>

@class GKPlayerInternal, GKGameRecordInternal, NSDate;

@interface GKRecentMatchInternal : GKInternalRepresentation {

	GKPlayerInternal* _player;
	GKGameRecordInternal* _game;
	NSDate* _date;

}

@property (nonatomic,retain) GKPlayerInternal * player;                //@synthesize player=_player - In the implementation block
@property (nonatomic,retain) GKGameRecordInternal * game;              //@synthesize game=_game - In the implementation block
@property (nonatomic,retain) NSDate * date;                            //@synthesize date=_date - In the implementation block
+(id)secureCodedPropertyKeys;
-(GKPlayerInternal *)player;
-(void)setPlayer:(GKPlayerInternal *)arg1 ;
-(void)setGame:(GKGameRecordInternal *)arg1 ;
-(GKGameRecordInternal *)game;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSDate *)date;
-(void)setDate:(NSDate *)arg1 ;
@end

