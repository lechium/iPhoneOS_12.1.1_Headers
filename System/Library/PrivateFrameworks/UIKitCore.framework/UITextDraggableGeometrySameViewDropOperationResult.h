/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:41 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UITextRange;

@interface UITextDraggableGeometrySameViewDropOperationResult : NSObject {

	UITextRange* _resultRange;
	/*^block*/id _targetedPreviewProvider;

}

@property (nonatomic,readonly) UITextRange * resultRange;               //@synthesize resultRange=_resultRange - In the implementation block
@property (nonatomic,readonly) id targetedPreviewProvider;              //@synthesize targetedPreviewProvider=_targetedPreviewProvider - In the implementation block
+(id)resultWithRange:(id)arg1 targetedPreviewProvider:(/*^block*/id)arg2 ;
-(id)targetedPreviewProvider;
-(UITextRange *)resultRange;
-(id)initWithRange:(id)arg1 targetedPreviewProvider:(/*^block*/id)arg2 ;
@end
