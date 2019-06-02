/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:51 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariServices/SafariServices-Structs.h>
#import <UIKitCore/UIInputView.h>
#import <UIKit/UISearchBarDelegate.h>

@protocol _SFFindOnPageToolbarDelegate;
@class UIToolbar, UIBarButtonItem, _SFFindOnPageInputBar, NSArray, NSTimer, UILabel, NSString, UITextField;

@interface _SFFindOnPageToolbar : UIInputView <UISearchBarDelegate> {

	UIToolbar* _toolbar;
	UIBarButtonItem* _previousButtonItem;
	UIBarButtonItem* _nextButtonItem;
	_SFFindOnPageInputBar* _inputBar;
	UIBarButtonItem* _doneBarButtonItem;
	NSArray* _toolbarItems;
	id<_SFFindOnPageToolbarDelegate> _findDelegate;
	NSTimer* _textChangedUpdateTimer;
	UILabel* _inFieldMatchLabel;
	BOOL _editing;
	BOOL _useBottomInset;
	BOOL _usesNarrowLayout;
	NSString* _searchText;

}

@property (nonatomic,readonly) UITextField * inputField; 
@property (nonatomic,copy) NSString * searchText;                     //@synthesize searchText=_searchText - In the implementation block
@property (assign,nonatomic) BOOL usesNarrowLayout;                   //@synthesize usesNarrowLayout=_usesNarrowLayout - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)updateUI;
-(void)next:(id)arg1 ;
-(void)setUsesNarrowLayout:(BOOL)arg1 ;
-(BOOL)usesNarrowLayout;
-(void)dismiss:(id)arg1 ;
-(void)previous:(id)arg1 ;
-(double)_accessoryViewHeight;
-(CGRect)_toolbarFrame;
-(void)_initializeToolbarItems;
-(double)_toolbarVerticalInset;
-(id)_matchLabelText;
-(BOOL)_updateEditing:(BOOL)arg1 ;
-(void)_doUpdateSearchText;
-(BOOL)_keyboardIsSplit;
-(UITextField *)inputField;
-(void)_done;
-(void)layoutSubviews;
-(CGSize)intrinsicContentSize;
-(void)safeAreaInsetsDidChange;
-(void)searchBar:(id)arg1 textDidChange:(id)arg2 ;
-(BOOL)searchBarShouldBeginEditing:(id)arg1 ;
-(void)searchBarTextDidBeginEditing:(id)arg1 ;
-(void)searchBarTextDidEndEditing:(id)arg1 ;
-(void)searchBarSearchButtonClicked:(id)arg1 ;
-(NSString *)searchText;
-(id)initWithDelegate:(id)arg1 ;
-(CGSize)leftContentViewSize;
-(CGSize)rightContentViewSize;
-(void)setSearchText:(NSString *)arg1 ;
-(void)_keyboardWillChangeFrame:(id)arg1 ;
@end

