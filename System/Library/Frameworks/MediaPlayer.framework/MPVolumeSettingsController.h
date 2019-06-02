/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:37 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>

@class NSString, UIAlertController, UIWindow;

@interface MPVolumeSettingsController : UIViewController {

	NSString* _audioCategory;
	UIAlertController* _alertController;
	UIWindow* _hostingWindow;
	UIWindow* _previousWindow;

}

@property (assign,nonatomic,__weak) UIWindow * hostingWindow;               //@synthesize hostingWindow=_hostingWindow - In the implementation block
@property (assign,nonatomic,__weak) UIWindow * previousWindow;              //@synthesize previousWindow=_previousWindow - In the implementation block
-(void)dismissAlertController;
-(void)_keyWindowDidChange:(id)arg1 ;
-(void)_flip;
-(id)initWithAudioCategory:(id)arg1 ;
-(void)presentAlertControllerInWindow:(id)arg1 ;
-(UIWindow *)hostingWindow;
-(void)setHostingWindow:(UIWindow *)arg1 ;
-(UIWindow *)previousWindow;
-(void)setPreviousWindow:(UIWindow *)arg1 ;
-(void)dealloc;
-(void)viewDidAppear:(BOOL)arg1 ;
@end

