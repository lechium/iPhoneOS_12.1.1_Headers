/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:49 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableView.h>

@class EKEventViewController;

@interface EKEventTableView : UITableView {

	EKEventViewController* _controller;

}

@property (assign,nonatomic,__weak) EKEventViewController * controller;              //@synthesize controller=_controller - In the implementation block
-(void)reloadData;
-(EKEventViewController *)controller;
-(void)setController:(EKEventViewController *)arg1 ;
@end

