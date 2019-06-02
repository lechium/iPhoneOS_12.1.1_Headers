/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:33 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ActivitySharing.framework/ActivitySharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ActivitySharing/ActivitySharing-Structs.h>
#import <libobjc.A.dylib/ASCloudKitCodable.h>

@class NSUUID, NSDate, NSString;

@interface ASNotificationEvent : NSObject <ASCloudKitCodable> {

	NSUUID* _friendUUID;
	long long _type;
	NSDate* _date;
	NSUUID* _triggerUUID;
	long long _triggerSnapshotIndex;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSUUID * friendUUID;                         //@synthesize friendUUID=_friendUUID - In the implementation block
@property (assign,nonatomic) long long type;                              //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSDate * date;                               //@synthesize date=_date - In the implementation block
@property (nonatomic,retain) NSUUID * triggerUUID;                        //@synthesize triggerUUID=_triggerUUID - In the implementation block
@property (assign,nonatomic) long long triggerSnapshotIndex;              //@synthesize triggerSnapshotIndex=_triggerSnapshotIndex - In the implementation block
+(id)notificationEventWithRecord:(id)arg1 friendUUID:(id)arg2 ;
+(id)goalCompletionEventWithActivitySummary:(id)arg1 ;
+(id)workoutCompletionEventWithWorkout:(HKFitnessFriendWorkout*)arg1 ;
+(id)achievementCompletionEventWithAchievement:(HKFitnessFriendAchievement*)arg1 ;
+(id)deletedWorkoutEventWithUUID:(id)arg1 ;
-(NSUUID *)friendUUID;
-(void)setFriendUUID:(NSUUID *)arg1 ;
-(id)recordWithZoneID:(id)arg1 ;
-(NSUUID *)triggerUUID;
-(void)setTriggerUUID:(NSUUID *)arg1 ;
-(long long)triggerSnapshotIndex;
-(void)setTriggerSnapshotIndex:(long long)arg1 ;
-(NSString *)description;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(NSDate *)date;
-(void)setDate:(NSDate *)arg1 ;
@end

