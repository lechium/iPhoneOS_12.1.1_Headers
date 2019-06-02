/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:08 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UISettings.h>

@interface SBFWallpaperSettings : _UISettings {

	BOOL _replaceBlurs;
	long long _blurReplacementMode;

}

@property (assign,nonatomic) BOOL replaceBlurs;                          //@synthesize replaceBlurs=_replaceBlurs - In the implementation block
@property (assign,nonatomic) long long blurReplacementMode;              //@synthesize blurReplacementMode=_blurReplacementMode - In the implementation block
+(id)settingsControllerModule;
-(void)setReplaceBlurs:(BOOL)arg1 ;
-(BOOL)replaceBlurs;
-(long long)blurReplacementMode;
-(void)setBlurReplacementMode:(long long)arg1 ;
-(void)setDefaultValues;
@end
