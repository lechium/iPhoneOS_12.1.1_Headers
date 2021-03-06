/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:47 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/News/Tea.framework/Tea
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface TSNotificationSettings : NSObject {

	 authorizationStatus;
	 sound;
	 badge;
	 showOnLockScreen;
	 showInNotificationCenter;
	 showBanners;

}

@property (readonly,nonatomic) long long authorizationStatus; 
@property (readonly,nonatomic) BOOL sound; 
@property (readonly,nonatomic) BOOL badge; 
@property (readonly,nonatomic) BOOL showOnLockScreen; 
@property (readonly,nonatomic) BOOL showInNotificationCenter; 
@property (readonly,nonatomic) BOOL showBanners; 
-(BOOL)showOnLockScreen;
-(BOOL)showInNotificationCenter;
-(BOOL)showBanners;
-(id)initWithSystemSettings:(id)arg1 ;
-(id)init;
-(BOOL)sound;
-(BOOL)badge;
-(long long)authorizationStatus;
@end

