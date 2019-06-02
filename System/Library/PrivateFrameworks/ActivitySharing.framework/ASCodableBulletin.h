/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:34 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ActivitySharing.framework/ActivitySharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ActivitySharing/ActivitySharing-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSString;

@interface ASCodableBulletin : PBCodable <NSCopying> {

	long long _competitionStage;
	double _timestamp;
	long long _type;
	NSData* _achievementData;
	NSData* _friendListData;
	NSString* _friendUUID;
	NSData* _snapshotData;
	NSString* _title;
	NSData* _workoutData;
	SCD_Struct_AS7 _has;

}

@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) long long type;                          //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) BOOL hasTitle; 
@property (nonatomic,retain) NSString * title;                        //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) BOOL hasFriendUUID; 
@property (nonatomic,retain) NSString * friendUUID;                   //@synthesize friendUUID=_friendUUID - In the implementation block
@property (nonatomic,readonly) BOOL hasFriendListData; 
@property (nonatomic,retain) NSData * friendListData;                 //@synthesize friendListData=_friendListData - In the implementation block
@property (nonatomic,readonly) BOOL hasAchievementData; 
@property (nonatomic,retain) NSData * achievementData;                //@synthesize achievementData=_achievementData - In the implementation block
@property (nonatomic,readonly) BOOL hasWorkoutData; 
@property (nonatomic,retain) NSData * workoutData;                    //@synthesize workoutData=_workoutData - In the implementation block
@property (nonatomic,readonly) BOOL hasSnapshotData; 
@property (nonatomic,retain) NSData * snapshotData;                   //@synthesize snapshotData=_snapshotData - In the implementation block
@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) double timestamp;                        //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasCompetitionStage; 
@property (assign,nonatomic) long long competitionStage;              //@synthesize competitionStage=_competitionStage - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)hasType;
-(NSString *)friendUUID;
-(void)setFriendUUID:(NSString *)arg1 ;
-(BOOL)hasFriendUUID;
-(void)setFriendListData:(NSData *)arg1 ;
-(void)setAchievementData:(NSData *)arg1 ;
-(void)setWorkoutData:(NSData *)arg1 ;
-(void)setSnapshotData:(NSData *)arg1 ;
-(BOOL)hasFriendListData;
-(BOOL)hasAchievementData;
-(BOOL)hasWorkoutData;
-(BOOL)hasSnapshotData;
-(void)setCompetitionStage:(long long)arg1 ;
-(void)setHasCompetitionStage:(BOOL)arg1 ;
-(BOOL)hasCompetitionStage;
-(NSData *)friendListData;
-(NSData *)achievementData;
-(NSData *)workoutData;
-(long long)competitionStage;
-(NSData *)snapshotData;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(BOOL)hasTitle;
-(double)timestamp;
-(id)dictionaryRepresentation;
-(void)setTimestamp:(double)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

