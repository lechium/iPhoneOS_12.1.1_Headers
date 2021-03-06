/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:22 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIActivityViewController.h>

@protocol _UIDICActivityViewControllerDelegate;
@class UIDocumentInteractionController, NSString;

@interface _UIDICActivityViewController : UIActivityViewController {

	BOOL _isPerformingActivity;
	UIDocumentInteractionController*<_UIDICActivityViewControllerDelegate> _documentInteractionActivityDelegate;
	unsigned long long _options;
	id<_UIDICActivityViewControllerDelegate> _documentInteractionActivityDelegateRetained;
	NSString* _openActivityTargetApplicationIdentifier;

}

@property (assign,nonatomic) unsigned long long options;                                                                                                     //@synthesize options=_options - In the implementation block
@property (nonatomic,retain) id<_UIDICActivityViewControllerDelegate> documentInteractionActivityDelegateRetained;                                           //@synthesize documentInteractionActivityDelegateRetained=_documentInteractionActivityDelegateRetained - In the implementation block
@property (assign,nonatomic) BOOL isPerformingActivity;                                                                                                      //@synthesize isPerformingActivity=_isPerformingActivity - In the implementation block
@property (nonatomic,retain) NSString * openActivityTargetApplicationIdentifier;                                                                             //@synthesize openActivityTargetApplicationIdentifier=_openActivityTargetApplicationIdentifier - In the implementation block
@property (assign,nonatomic,__weak) UIDocumentInteractionController*<_UIDICActivityViewControllerDelegate> documentInteractionActivityDelegate;              //@synthesize documentInteractionActivityDelegate=_documentInteractionActivityDelegate - In the implementation block
-(unsigned long long)options;
-(void)_handleDidFinishPerformingActivityType:(id)arg1 completed:(BOOL)arg2 resultItems:(id)arg3 activityError:(id)arg4 ;
-(BOOL)hidesSystemActivities;
-(UIDocumentInteractionController*<_UIDICActivityViewControllerDelegate>)documentInteractionActivityDelegate;
-(void)_performActivity:(id)arg1 ;
-(void)setDocumentInteractionActivityDelegateRetained:(id<_UIDICActivityViewControllerDelegate>)arg1 ;
-(void)setIsPerformingActivity:(BOOL)arg1 ;
-(void)_willPerformInServiceActivityType:(id)arg1 activitySpecificMetadata:(id)arg2 ;
-(BOOL)isPerformingActivity;
-(id)initWithActivityItems:(id)arg1 applicationActivities:(id)arg2 options:(unsigned long long)arg3 ;
-(void)setDocumentInteractionActivityDelegate:(UIDocumentInteractionController*<_UIDICActivityViewControllerDelegate>)arg1 ;
-(BOOL)_shouldShowSystemActivityType:(id)arg1 ;
-(void)_prepareActivity:(id)arg1 ;
-(void)setOptions:(unsigned long long)arg1 ;
-(id<_UIDICActivityViewControllerDelegate>)documentInteractionActivityDelegateRetained;
-(NSString *)openActivityTargetApplicationIdentifier;
-(void)setOpenActivityTargetApplicationIdentifier:(NSString *)arg1 ;
@end

