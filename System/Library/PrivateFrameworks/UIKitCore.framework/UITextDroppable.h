/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:42 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIDropInteraction;


@protocol UITextDroppable <UITextInput,UITextPasteConfigurationSupporting>
@property (assign,nonatomic,__weak) id<UITextDropDelegate> textDropDelegate; 
@property (nonatomic,readonly) UIDropInteraction * textDropInteraction; 
@property (getter=isTextDropActive,nonatomic,readonly) BOOL textDropActive; 
@required
-(id<UITextDropDelegate>)textDropDelegate;
-(void)setTextDropDelegate:(id)arg1;
-(UIDropInteraction *)textDropInteraction;
-(BOOL)isTextDropActive;

@end

