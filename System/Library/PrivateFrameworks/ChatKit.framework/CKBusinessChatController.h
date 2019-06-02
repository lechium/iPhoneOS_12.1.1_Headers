/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:11 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/CKChatController.h>

@class CKNavbarCanvasViewController;

@interface CKBusinessChatController : CKChatController {

	CKNavbarCanvasViewController* _navbarCanvasViewController;

}

@property (nonatomic,retain) CKNavbarCanvasViewController * navbarCanvasViewController;              //@synthesize navbarCanvasViewController=_navbarCanvasViewController - In the implementation block
-(CKNavbarCanvasViewController *)navbarCanvasViewController;
-(void)setNavbarCanvasViewController:(CKNavbarCanvasViewController *)arg1 ;
-(void)_addressBookChanged:(id)arg1 ;
-(void)setupBizNavBarIfNecessary;
-(void)cleanUpBizNavBarIfNecessary;
-(void)dealloc;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)loadView;
-(void)viewDidLayoutSubviews;
-(long long)preferredStatusBarStyle;
@end
