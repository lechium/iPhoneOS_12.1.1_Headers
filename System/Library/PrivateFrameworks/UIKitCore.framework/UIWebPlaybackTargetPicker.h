/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:51 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIPopoverControllerDelegate.h>

@class MPAVRoutingController, MPAudioVideoRoutingPopoverController, MPAVRoutingSheet, UIWebDocumentView, NSString;

@interface UIWebPlaybackTargetPicker : UIView <UIPopoverControllerDelegate> {

	MPAVRoutingController* _routingController;
	MPAudioVideoRoutingPopoverController* _popoverController;
	MPAVRoutingSheet* _actionSheet;
	UIWebDocumentView* _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(void)popoverControllerDidDismissPopover:(id)arg1 ;
-(void)_windowWillRotate:(id)arg1 ;
-(void)show:(BOOL)arg1 fromRect:(CGRect)arg2 ;
-(void)_dismissAirPlayRoutePickerIPad;
-(void)_windowDidRotate:(id)arg1 ;
-(void)_presentAirPlayPopoverAnimated:(BOOL)arg1 fromRect:(CGRect)arg2 ;
-(void)showAirPlayPickerIPad:(long long)arg1 fromRect:(CGRect)arg2 ;
-(void)showAirPlayPickerIPhone:(long long)arg1 ;
@end

