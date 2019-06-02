/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:30 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AVTAvatarRecord;
@interface AVTAvatarActionsRecordUpdate : NSObject {

	BOOL _fromLeft;
	id<AVTAvatarRecord> _avatarRecord;

}

@property (nonatomic,readonly) id<AVTAvatarRecord> avatarRecord;              //@synthesize avatarRecord=_avatarRecord - In the implementation block
@property (nonatomic,readonly) BOOL fromLeft;                                 //@synthesize fromLeft=_fromLeft - In the implementation block
-(id<AVTAvatarRecord>)avatarRecord;
-(id)initWithAvatarRecord:(id)arg1 fromLeft:(BOOL)arg2 ;
-(BOOL)fromLeft;
@end

