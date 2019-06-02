/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:13 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <TVMLKit/_TVBgImageLoadingViewController.h>
#import <UIKit/UISearchResultsUpdating.h>
#import <libobjc.A.dylib/IKAppKeyboardDelegate.h>

@class UIView, _TVStackCollectionViewController, UISearchController, IKTextFieldElement, IKAppKeyboard, IKViewElement, NSString;

@interface _TVSearchTemplateController_iOS : _TVBgImageLoadingViewController <UISearchResultsUpdating, IKAppKeyboardDelegate> {

	UIView* _nonResultsView;
	_TVStackCollectionViewController* _resultsViewController;
	UISearchController* _searchController;
	IKTextFieldElement* _searchFieldElement;
	IKAppKeyboard* _ikKeyboard;
	IKViewElement* _nonResultsElement;
	IKViewElement* _collectionListElement;
	CGRect _keyboardFrame;
	IKViewElement* _viewElement;

}

@property (nonatomic,readonly) IKViewElement * viewElement;              //@synthesize viewElement=_viewElement - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(IKViewElement *)viewElement;
-(void)updateNavigationItem:(id)arg1 ;
-(void)updateWithViewElement:(id)arg1 ;
-(void)textDidChangeForKeyboard:(id)arg1 ;
-(void)_setNonResultsView:(id)arg1 ;
-(void)_updateKeyboardText;
-(BOOL)_isAtWordEnd;
-(void)_updateSearchFieldText;
-(id)_sanitizedText;
-(id)init;
-(void)dealloc;
-(void)loadView;
-(void)viewDidLayoutSubviews;
-(void)_keyboardDidChangeFrame:(id)arg1 ;
-(void)updateSearchResultsForSearchController:(id)arg1 ;
@end

