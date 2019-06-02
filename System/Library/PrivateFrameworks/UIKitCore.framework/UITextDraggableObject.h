/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:41 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSItemProviderWriting;
@class UITextRange;

@interface UITextDraggableObject : NSObject {

	id<NSItemProviderWriting> _object;
	UITextRange* _range;
	/*^block*/id _targetedPreviewProvider;
	/*^block*/id _previewProvider;

}

@property (nonatomic,retain) id<NSItemProviderWriting> object;              //@synthesize object=_object - In the implementation block
@property (nonatomic,retain) UITextRange * range;                           //@synthesize range=_range - In the implementation block
@property (nonatomic,copy) id targetedPreviewProvider;                      //@synthesize targetedPreviewProvider=_targetedPreviewProvider - In the implementation block
@property (nonatomic,copy) id previewProvider;                              //@synthesize previewProvider=_previewProvider - In the implementation block
+(id)draggableObject:(id)arg1 fromRange:(id)arg2 ;
-(id<NSItemProviderWriting>)object;
-(void)setPreviewProvider:(id)arg1 ;
-(id)previewProvider;
-(void)setObject:(id<NSItemProviderWriting>)arg1 ;
-(UITextRange *)range;
-(void)setTargetedPreviewProvider:(id)arg1 ;
-(id)targetedPreviewProvider;
-(void)setRange:(UITextRange *)arg1 ;
@end
