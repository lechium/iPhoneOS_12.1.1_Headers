/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:31 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchUI/SearchUI-Structs.h>
#import <SearchUI/SearchUITableViewCell.h>
#import <libobjc.A.dylib/NUIContainerStackViewDelegate.h>
#import <libobjc.A.dylib/CNAvatarViewDelegate.h>

@class SFSearchResult, NUIContainerStackView, SearchUIImageView, TLKDetailsView, NSMutableDictionary, SearchUIAccessoryViewController, CNAvatarView, SearchUIForceTouchGestureRecognizer, NSString;

@interface SearchUISingleResultTableViewCell : SearchUITableViewCell <NUIContainerStackViewDelegate, CNAvatarViewDelegate> {

	SFSearchResult* _result;
	NUIContainerStackView* _innerContainer;
	SearchUIImageView* _thumbnailView;
	TLKDetailsView* _detailsView;
	NSMutableDictionary* _accessoryViewControllers;
	SearchUIAccessoryViewController* _accessoryViewControllerForResult;
	CNAvatarView* _contactView;
	SearchUIForceTouchGestureRecognizer* _forceTouchRecognizer;

}

@property (retain) SFSearchResult * result;                                                         //@synthesize result=_result - In the implementation block
@property (retain) NUIContainerStackView * sizingContainer; 
@property (retain) NUIContainerStackView * innerContainer;                                          //@synthesize innerContainer=_innerContainer - In the implementation block
@property (retain) SearchUIImageView * thumbnailView;                                               //@synthesize thumbnailView=_thumbnailView - In the implementation block
@property (retain) TLKDetailsView * detailsView;                                                    //@synthesize detailsView=_detailsView - In the implementation block
@property (retain) NSMutableDictionary * accessoryViewControllers;                                  //@synthesize accessoryViewControllers=_accessoryViewControllers - In the implementation block
@property (retain) SearchUIAccessoryViewController * accessoryViewControllerForResult;              //@synthesize accessoryViewControllerForResult=_accessoryViewControllerForResult - In the implementation block
@property (retain) CNAvatarView * contactView;                                                      //@synthesize contactView=_contactView - In the implementation block
@property (retain) SearchUIForceTouchGestureRecognizer * forceTouchRecognizer;                      //@synthesize forceTouchRecognizer=_forceTouchRecognizer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)textForTitleText:(id)arg1 ;
+(void)addViewIfNecessary:(id)arg1 toStackView:(id)arg2 removeFromStackView:(id)arg3 ;
-(SearchUIImageView *)thumbnailView;
-(void)setThumbnailView:(SearchUIImageView *)arg1 ;
-(id)presentingViewControllerForAvatarView:(id)arg1 ;
-(void)willBeginPreviewInteractionForAvatarView:(id)arg1 ;
-(id)initWithRowModel:(id)arg1 style:(unsigned long long)arg2 feedbackDelegate:(id)arg3 ;
-(void)updateWithRowModel:(id)arg1 ;
-(void)setAccessoryViewControllers:(NSMutableDictionary *)arg1 ;
-(void)setInnerContainer:(NUIContainerStackView *)arg1 ;
-(void)setForceTouchRecognizer:(SearchUIForceTouchGestureRecognizer *)arg1 ;
-(SearchUIForceTouchGestureRecognizer *)forceTouchRecognizer;
-(NSMutableDictionary *)accessoryViewControllers;
-(NUIContainerStackView *)innerContainer;
-(id)contactInlineActionViewController;
-(BOOL)arrangedViewMustCenter:(id)arg1 ;
-(void)setAccessoryViewControllerForResult:(SearchUIAccessoryViewController *)arg1 ;
-(SearchUIAccessoryViewController *)accessoryViewControllerForResult;
-(void)updateThumbnailWithResult:(id)arg1 ;
-(void)updateForceTouchRecognizerWithResult:(id)arg1 ;
-(void)containerViewDidInvalidateIntrinsicContentSize:(id)arg1 ;
-(long long)containerStackView:(id)arg1 alignmentForArrangedSubview:(id)arg2 ;
-(void)setDetailsView:(TLKDetailsView *)arg1 ;
-(TLKDetailsView *)detailsView;
-(void)setResult:(SFSearchResult *)arg1 ;
-(CNAvatarView *)contactView;
-(void)setContactView:(CNAvatarView *)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(SFSearchResult *)result;
@end

