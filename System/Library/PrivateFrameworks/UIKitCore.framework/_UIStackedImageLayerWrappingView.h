/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:50 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>

@protocol CALayerDelegate;
@interface _UIStackedImageLayerWrappingView : UIView {

	id<CALayerDelegate> _actionDelegate;

}

@property (assign,nonatomic,__weak) id<CALayerDelegate> actionDelegate;              //@synthesize actionDelegate=_actionDelegate - In the implementation block
-(void)dealloc;
-(id)actionForLayer:(id)arg1 forKey:(id)arg2 ;
-(id<CALayerDelegate>)actionDelegate;
-(void)setActionDelegate:(id<CALayerDelegate>)arg1 ;
@end

