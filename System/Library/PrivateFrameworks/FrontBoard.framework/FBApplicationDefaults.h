/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:20 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface FBApplicationDefaults : NSObject {

	long long _interfaceOrientation;
	BOOL _canChangeBackgroundStyle;
	long long _backgroundStyle;
	long long _statusBarStyle;
	BOOL _statusBarHidden;
	BOOL _statusBarHiddenWhenVerticallyCompact;
	NSString* _launchImageFile;

}

@property (assign,nonatomic) long long interfaceOrientation;                         //@synthesize interfaceOrientation=_interfaceOrientation - In the implementation block
@property (assign,nonatomic) long long statusBarStyle;                               //@synthesize statusBarStyle=_statusBarStyle - In the implementation block
@property (assign,nonatomic) BOOL canChangeBackgroundStyle;                          //@synthesize canChangeBackgroundStyle=_canChangeBackgroundStyle - In the implementation block
@property (assign,nonatomic) long long backgroundStyle;                              //@synthesize backgroundStyle=_backgroundStyle - In the implementation block
@property (assign,nonatomic) BOOL statusBarHidden;                                   //@synthesize statusBarHidden=_statusBarHidden - In the implementation block
@property (assign,nonatomic) BOOL statusBarHiddenWhenVerticallyCompact;              //@synthesize statusBarHiddenWhenVerticallyCompact=_statusBarHiddenWhenVerticallyCompact - In the implementation block
@property (nonatomic,copy) NSString * launchImageFile;                               //@synthesize launchImageFile=_launchImageFile - In the implementation block
-(BOOL)canChangeBackgroundStyle;
-(void)setCanChangeBackgroundStyle:(BOOL)arg1 ;
-(BOOL)statusBarHiddenWhenVerticallyCompact;
-(void)setStatusBarHiddenWhenVerticallyCompact:(BOOL)arg1 ;
-(NSString *)launchImageFile;
-(void)setLaunchImageFile:(NSString *)arg1 ;
-(id)init;
-(long long)interfaceOrientation;
-(long long)statusBarStyle;
-(void)setStatusBarStyle:(long long)arg1 ;
-(void)setStatusBarHidden:(BOOL)arg1 ;
-(void)setBackgroundStyle:(long long)arg1 ;
-(void)setInterfaceOrientation:(long long)arg1 ;
-(BOOL)statusBarHidden;
-(long long)backgroundStyle;
@end

