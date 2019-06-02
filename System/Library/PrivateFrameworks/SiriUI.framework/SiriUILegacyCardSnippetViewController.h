/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:52 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriUI/SiriUICardSnippetViewController.h>

@class SAUISnippet;

@interface SiriUILegacyCardSnippetViewController : SiriUICardSnippetViewController {

	SAUISnippet* _snippet;

}
+(void)initialize;
-(void)setSnippet:(id)arg1 ;
-(id)snippet;
-(void)setRequestContext:(id)arg1 ;
-(void)setNavigationTitle:(id)arg1 ;
-(void)setConfirmed:(BOOL)arg1 ;
-(id)navigationTitle;
-(id)requestContext;
-(id)initWithSnippet:(id)arg1 ;
-(BOOL)usePlatterStyle;
-(void)siriWillActivateFromSource:(long long)arg1 ;
-(void)siriDidDeactivate;
-(void)wasAddedToTranscript;
-(void)endEditingAndCorrect:(BOOL)arg1 ;
-(BOOL)removedAfterDialogProgresses;
-(void)_setVirgin:(BOOL)arg1 ;
-(void)willCancel;
-(void)willConfirm;
-(id)sashItem;
-(Class)transparentHeaderViewClass;
-(void)siriWillLayoutSnippetView;
-(void)siriDidLayoutSnippetView;
-(id)snippetPunchOut;
-(id)headerPunchOut;
-(void)setIsFullPadWidth:(BOOL)arg1 ;
-(void)setWantsConfirmationInsets:(BOOL)arg1 ;
-(BOOL)wantsConfirmationInsets;
-(void)setAttributedSubtitle:(id)arg1 ;
-(id)attributedSubtitle;
-(BOOL)wantsToManageBackgroundColor;
-(void)setHeaderPunchOut:(id)arg1 ;
-(void)setSnippetPunchOut:(id)arg1 ;
-(BOOL)isFullPadWidth;
-(id)_legacyCardSectionViewController;
-(id)_backingSnippetViewController;
-(BOOL)isConfirmed;
-(void)setDelegate:(id)arg1 ;
-(void)setSubtitle:(id)arg1 ;
-(id)subtitle;
-(BOOL)isCancelled;
-(void)setCancelled:(BOOL)arg1 ;
@end

