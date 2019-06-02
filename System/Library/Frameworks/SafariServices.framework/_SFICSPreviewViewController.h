/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:51 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UINavigationController.h>
#import <libobjc.A.dylib/EKICSPreviewControllerDelegate.h>

@class NSString, NSURL, UIBarButtonItem, EKICSPreviewController;

@interface _SFICSPreviewViewController : UINavigationController <EKICSPreviewControllerDelegate> {

	NSString* _filePath;
	NSURL* _sourceURL;
	UIBarButtonItem* _activityBarButtonItem;
	UIBarButtonItem* _doneBarButtonItem;
	EKICSPreviewController* _icsController;
	/*^block*/id _beforeDismissHandler;

}

@property (nonatomic,copy) id beforeDismissHandler;                 //@synthesize beforeDismissHandler=_beforeDismissHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)icsPreviewControllerWantsDismissal:(id)arg1 ;
-(void)_presentActivityViewController:(id)arg1 ;
-(void)_updateNavigationBarItems;
-(void)_ensureLeftBarButtonItemsIncludesActivityItem:(id)arg1 ;
-(void)_ensureLeftBarButtonItemsIncludesDoneItem:(id)arg1 ;
-(id)initWithFilePath:(id)arg1 sourceURL:(id)arg2 ;
-(void)setBeforeDismissHandler:(id)arg1 ;
-(id)beforeDismissHandler;
-(void)_done:(id)arg1 ;
-(void)dealloc;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(id)popViewControllerAnimated:(BOOL)arg1 ;
-(void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3 ;
@end

