/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:15 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUI/PHActivityViewController.h>
#import <libobjc.A.dylib/MiroActivityItemProviderDelegate.h>
#import <UIKit/UIActivityViewControllerDelegate.h>

@class UIViewController, UIBarButtonItem, NSString;

@interface MiroActivityViewController : PHActivityViewController <MiroActivityItemProviderDelegate, UIActivityViewControllerDelegate> {

	UIViewController* _presenter;
	unsigned long long _backgroundTask;
	UIBarButtonItem* _doneButton;

}

@property (assign,nonatomic) unsigned long long backgroundTask;                //@synthesize backgroundTask=_backgroundTask - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * doneButton;                     //@synthesize doneButton=_doneButton - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) UIViewController * presenter;              //@synthesize presenter=_presenter - In the implementation block
-(BOOL)_deviceIsRunningInternalOS;
-(void)exportFailed;
-(void)exportWillBegin;
-(void)presentProgressController:(id)arg1 ;
-(void)dismissProgressController;
-(UIViewController *)presenter;
-(void)setPresenter:(UIViewController *)arg1 ;
-(unsigned long long)backgroundTask;
-(void)setBackgroundTask:(unsigned long long)arg1 ;
-(id)initWithActivityItems:(id)arg1 applicationActivities:(id)arg2 barButtonItem:(id)arg3 parentViewController:(id)arg4 ;
-(void)cancel;
-(void)setCompletionWithItemsHandler:(/*^block*/id)arg1 ;
-(void)setDoneButton:(UIBarButtonItem *)arg1 ;
-(UIBarButtonItem *)doneButton;
-(void)activityViewControllerWillStartAirdropTransfer:(id)arg1 ;
-(void)activityViewControllerDidFinishAirdropTransfer:(id)arg1 ;
@end

