/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:01 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Pegasus.framework/Pegasus
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Pegasus/Pegasus-Structs.h>
#import <UIKitCore/UIView.h>

@class _UIRemoteView, BKSTouchDeliveryPolicyAssertion, PGHostedWindowHostingHandle;

@interface PGLayerHostView : UIView {

	_UIRemoteView* _remoteView;
	BKSTouchDeliveryPolicyAssertion* _touchDeliveryPolicyAssertion;

}

@property (nonatomic,retain) PGHostedWindowHostingHandle * hostedWindowHostingHandle; 
@property (assign,nonatomic) CGAffineTransform layerHostTransform; 
-(void)_manageSharingOfTouchesBetweenClientAndHostContext;
-(CGAffineTransform)layerHostTransform;
-(void)setLayerHostTransform:(CGAffineTransform)arg1 ;
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)didMoveToWindow;
-(void)setHostedWindowHostingHandle:(PGHostedWindowHostingHandle *)arg1 ;
-(PGHostedWindowHostingHandle *)hostedWindowHostingHandle;
@end

