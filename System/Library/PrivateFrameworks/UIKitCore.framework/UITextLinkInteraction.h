/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:41 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITextInteraction.h>

@interface UITextLinkInteraction : UITextInteraction {

	BOOL _isTryingToHighlightLink;

}
-(id)init;
-(void)_resetForLink;
-(BOOL)tapOnLinkWithGesture:(id)arg1 ;
-(void)cancelInteractionWithLink;
-(void)smallDelayRecognizer:(id)arg1 ;
-(void)longDelayRecognizer:(id)arg1 ;
-(void)linkTapRecognizer:(id)arg1 ;
-(BOOL)interaction_gestureRecognizerShouldBegin:(id)arg1 ;
@end

