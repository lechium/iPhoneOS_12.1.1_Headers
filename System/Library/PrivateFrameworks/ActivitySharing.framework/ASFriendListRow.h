/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:34 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ActivitySharing.framework/ActivitySharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ActivitySharing/ActivitySharing-Structs.h>
@class ASFriend, _HKFitnessFriendActivitySnapshot;

@interface ASFriendListRow : NSObject {

	ASFriend* _friend;
	HKFitnessFriendActivitySnapshot* _snapshot;

}

@property (nonatomic,retain) ASFriend * friend;                                        //@synthesize friend=_friend - In the implementation block
@property (nonatomic,retain) _HKFitnessFriendActivitySnapshot * snapshot;              //@synthesize snapshot=_snapshot - In the implementation block
-(ASFriend *)friend;
-(void)setFriend:(ASFriend *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(_HKFitnessFriendActivitySnapshot *)snapshot;
-(void)setSnapshot:(_HKFitnessFriendActivitySnapshot *)arg1 ;
@end

