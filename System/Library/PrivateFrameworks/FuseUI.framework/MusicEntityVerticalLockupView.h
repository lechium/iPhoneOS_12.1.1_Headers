/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:26 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FuseUI/MusicEntityAbstractLockupView.h>
#import <libobjc.A.dylib/MusicEntityContentDescriptorViewConfiguring.h>

@protocol MusicEntityVerticalLockupViewDelegate;
@class MusicEntityViewContentDescriptor, UIImageView, NSString;

@interface MusicEntityVerticalLockupView : MusicEntityAbstractLockupView <MusicEntityContentDescriptorViewConfiguring> {

	UIImageView* _availableOfflineBadgeImageView;
	BOOL _isAvailableOffline;
	double _textLateralEdgePadding;
	id<MusicEntityVerticalLockupViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MusicEntityVerticalLockupViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) MusicEntityViewContentDescriptor * contentDescriptor; 
@property (nonatomic,retain) id<MusicEntityValueProviding> entityValueProvider; 
+(double)maximumHeightForContentDescriptor:(id)arg1 width:(double)arg2 traitCollection:(id)arg3 ;
-(void)_contentDescriptorDidChange:(id)arg1 ;
-(MusicEntityViewContentDescriptor *)contentDescriptor;
-(void)setContentDescriptor:(MusicEntityViewContentDescriptor *)arg1 ;
-(void)setTextLateralEdgePadding:(double)arg1 ;
-(BOOL)_shouldEnableArtworkViewUserInteraction;
-(BOOL)_shouldArtworkViewRespectHighlightProperty;
-(void)setDelegate:(id<MusicEntityVerticalLockupViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<MusicEntityVerticalLockupViewDelegate>)delegate;
@end
