/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:22 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _UIPlatterView, UITargetedDragPreview;

@interface _UIDragLiftedItem : NSObject {

	BOOL _sourceViewWasAdded;
	_UIPlatterView* _platterView;
	UITargetedDragPreview* _targetedPreview;
	double _liftAlpha;

}

@property (nonatomic,retain) _UIPlatterView * platterView;                         //@synthesize platterView=_platterView - In the implementation block
@property (nonatomic,retain) UITargetedDragPreview * targetedPreview;              //@synthesize targetedPreview=_targetedPreview - In the implementation block
@property (assign,nonatomic) BOOL sourceViewWasAdded;                              //@synthesize sourceViewWasAdded=_sourceViewWasAdded - In the implementation block
@property (assign,nonatomic) double liftAlpha;                                     //@synthesize liftAlpha=_liftAlpha - In the implementation block
-(_UIPlatterView *)platterView;
-(void)setPlatterView:(_UIPlatterView *)arg1 ;
-(UITargetedDragPreview *)targetedPreview;
-(void)setTargetedPreview:(UITargetedDragPreview *)arg1 ;
-(BOOL)sourceViewWasAdded;
-(void)setSourceViewWasAdded:(BOOL)arg1 ;
-(double)liftAlpha;
-(void)setLiftAlpha:(double)arg1 ;
@end
