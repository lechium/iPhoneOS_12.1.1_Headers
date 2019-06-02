/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:30 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AvatarUI/AVTTransition.h>

@protocol AVTAvatarTransitionModel;
@interface AVTAvatarToStaticTransition : AVTTransition {

	id<AVTAvatarTransitionModel> _avatarTransitionModel;

}

@property (nonatomic,readonly) id<AVTAvatarTransitionModel> avatarTransitionModel;              //@synthesize avatarTransitionModel=_avatarTransitionModel - In the implementation block
+(void)clearStaticStateForAvatar:(id)arg1 ;
-(id)initWithModel:(id)arg1 animated:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 logger:(id)arg4 ;
-(void)performTransition;
-(id<AVTAvatarTransitionModel>)avatarTransitionModel;
-(id)model;
@end
