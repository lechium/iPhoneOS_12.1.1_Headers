/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:02 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaSocial/MediaSocial-Structs.h>
#import <UIKitCore/UIScrollView.h>
#import <libobjc.A.dylib/NSLayoutManagerDelegate.h>
#import <UIKit/UITextViewDelegate.h>

@protocol MSCLComposePostViewDataSource;
@class UIButton, NSMutableArray, UILabel, NSArray, UITapGestureRecognizer, UIViewController, MSCLTokenTextView, UIControl, NSString;

@interface MSCLComposePostView : UIScrollView <NSLayoutManagerDelegate, UITextViewDelegate> {

	long long _allowedCharacterCount;
	UIButton* _attachmentButton;
	NSMutableArray* _attachmentViews;
	UILabel* _characterCountLabel;
	id<MSCLComposePostViewDataSource> _dataSource;
	NSArray* _footerViews;
	NSArray* _headerViews;
	long long _numberOfAttachments;
	CGPoint _preCompletionContentOffset;
	NSArray* _scrollableHeaderViews;
	UITapGestureRecognizer* _tapRecognizer;
	UIViewController* _textCompletionViewController;
	MSCLTokenTextView* _textView;

}

@property (assign,nonatomic,__weak) id<MSCLComposePostViewDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<MSCLComposePostViewDelegate> delegate; 
@property (nonatomic,copy) NSArray * footerViews;                                              //@synthesize footerViews=_footerViews - In the implementation block
@property (nonatomic,copy) NSArray * headerViews;                                              //@synthesize headerViews=_headerViews - In the implementation block
@property (nonatomic,copy) NSArray * scrollableHeaderViews;                                    //@synthesize scrollableHeaderViews=_scrollableHeaderViews - In the implementation block
@property (assign,nonatomic) long long allowedCharacterCount;                                  //@synthesize allowedCharacterCount=_allowedCharacterCount - In the implementation block
@property (nonatomic,readonly) UIControl * attachmentButton; 
@property (nonatomic,copy) NSArray * attachmentViews;                                          //@synthesize attachmentViews=_attachmentViews - In the implementation block
@property (assign,nonatomic) BOOL showsAttachmentButton; 
@property (nonatomic,readonly) NSString * tagForSelectedRange; 
@property (nonatomic,copy,readonly) NSString * text; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_keyboardHideNotification:(id)arg1 ;
-(void)_keyboardWillChangeNotification:(id)arg1 ;
-(UIControl *)attachmentButton;
-(void)setAllowedCharacterCount:(long long)arg1 ;
-(void)setFooterViews:(NSArray *)arg1 ;
-(void)setHeaderViews:(NSArray *)arg1 ;
-(void)setScrollableHeaderViews:(NSArray *)arg1 ;
-(void)insertTag:(id)arg1 ;
-(void)hideTextCompletionViewControllerAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)setAttachmentViews:(NSArray *)arg1 ;
-(void)setShowsAttachmentButton:(BOOL)arg1 ;
-(NSString *)tagForSelectedRange;
-(void)showTextCompletionViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)_tapRecognizerAction:(id)arg1 ;
-(void)_reloadUnderlineStyling;
-(void)_reloadCharacterCountLabel;
-(void)_removeAttachmentButtonAction:(id)arg1 ;
-(BOOL)showsAttachmentButton;
-(long long)allowedCharacterCount;
-(NSArray *)attachmentViews;
-(NSArray *)footerViews;
-(NSArray *)headerViews;
-(NSArray *)scrollableHeaderViews;
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(NSString *)text;
-(BOOL)becomeFirstResponder;
-(BOOL)resignFirstResponder;
-(id<MSCLComposePostViewDataSource>)dataSource;
-(void)setDataSource:(id<MSCLComposePostViewDataSource>)arg1 ;
-(void)layoutManager:(id)arg1 didCompleteLayoutForTextContainer:(id)arg2 atEnd:(BOOL)arg3 ;
-(void)_textStorageDidProcessEditing:(id)arg1 ;
-(BOOL)textView:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(void)textViewDidChange:(id)arg1 ;
-(void)textViewDidChangeSelection:(id)arg1 ;
@end

