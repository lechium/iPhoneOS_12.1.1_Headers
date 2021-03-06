/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:11 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/CKInvisibleInkEffectCoverageTrackerDelegate.h>

@protocol CKInvisibleInkEffectViewDelegate;
@class UIImage, CKInvisibleInkEffectCoverageTracker, NSString;

@interface CKInvisibleInkEffectView : UIView <CKInvisibleInkEffectCoverageTrackerDelegate> {

	BOOL _suspended;
	BOOL _paused;
	id<CKInvisibleInkEffectViewDelegate> _delegate;
	UIImage* _image;
	CKInvisibleInkEffectCoverageTracker* _coverageTracker;

}

@property (nonatomic,retain) CKInvisibleInkEffectCoverageTracker * coverageTracker;              //@synthesize coverageTracker=_coverageTracker - In the implementation block
@property (assign,nonatomic,__weak) id<CKInvisibleInkEffectViewDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIImage * image;                                                    //@synthesize image=_image - In the implementation block
@property (assign,getter=isSuspended,nonatomic) BOOL suspended;                                  //@synthesize suspended=_suspended - In the implementation block
@property (assign,getter=isPaused,nonatomic) BOOL paused;                                        //@synthesize paused=_paused - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(double)updateInterval;
-(CKInvisibleInkEffectCoverageTracker *)coverageTracker;
-(void)invisibleInkEffectCoverageTrackerDidUncover:(id)arg1 ;
-(void)setCoverageTracker:(CKInvisibleInkEffectCoverageTracker *)arg1 ;
-(void)setDelegate:(id<CKInvisibleInkEffectViewDelegate>)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(UIImage *)image;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id<CKInvisibleInkEffectViewDelegate>)delegate;
-(void)reset;
-(void)setPaused:(BOOL)arg1 ;
-(BOOL)isSuspended;
-(void)setSuspended:(BOOL)arg1 ;
-(BOOL)isPaused;
@end

