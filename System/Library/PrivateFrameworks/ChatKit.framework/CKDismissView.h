/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:08 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UIView.h>

@protocol CKDismissViewDelegate;
@class NSArray;

@interface CKDismissView : UIView {

	id<CKDismissViewDelegate> _delegate;
	NSArray* _passthroughViews;

}

@property (assign,nonatomic,__weak) id<CKDismissViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSArray * passthroughViews;                               //@synthesize passthroughViews=_passthroughViews - In the implementation block
-(void)setDelegate:(id<CKDismissViewDelegate>)arg1 ;
-(id<CKDismissViewDelegate>)delegate;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(NSArray *)passthroughViews;
-(void)setPassthroughViews:(NSArray *)arg1 ;
@end

