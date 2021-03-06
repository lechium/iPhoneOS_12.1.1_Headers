/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:11 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSKPopoverBasedViewController.h>

@class UIViewController, TSADebugTableViewController;

@interface TSADebugViewController : TSKPopoverBasedViewController {

	UIViewController* _delegate;
	TSADebugTableViewController* _debugTableViewController;

}
-(void)hideIt:(id)arg1 ;
-(void)addItemWithTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3 ;
-(void)showIt:(id)arg1 ;
-(void)toggleVisible:(id)arg1 ;
-(void)dealloc;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)loadView;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
@end

