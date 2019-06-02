/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:08 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/WebContentAnalysis.framework/WebContentAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIRemoteViewController.h>
#import <libobjc.A.dylib/WFPINEntryViewControllerProtocol.h>

@protocol WFPINEntryViewControllerProtocol;
@class NSObject;

@interface WFRemotePINEntryViewController : _UIRemoteViewController <WFPINEntryViewControllerProtocol> {

	NSObject*<WFPINEntryViewControllerProtocol> _delegate;

}

@property (assign,nonatomic) NSObject*<WFPINEntryViewControllerProtocol> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)serviceViewControllerInterface;
+(id)exportedInterface;
-(BOOL)requiresKeyboard;
-(BOOL)isNumericPIN;
-(BOOL)simplePIN;
-(void)setPageTitle:(id)arg1 ;
-(void)userEnteredCorrectPIN;
-(void)dealloc;
-(void)setDelegate:(NSObject*<WFPINEntryViewControllerProtocol>)arg1 ;
-(NSObject*<WFPINEntryViewControllerProtocol>)delegate;
-(void)viewDidLoad;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(void)setURL:(id)arg1 ;
-(void)userDidCancel;
@end

