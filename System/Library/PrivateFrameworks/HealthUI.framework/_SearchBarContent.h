/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:00 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HealthUI-Structs.h>
#import <UIKitCore/UIStackView.h>
#import <UIKit/UISearchBarDelegate.h>

@protocol HKIncrementalSearchBarDelegate;
@class HKIncrementalSearchBar, HKBarButtonItemControl, _SearchEntryWithMatchDisplay, NSString;

@interface _SearchBarContent : UIStackView <UISearchBarDelegate> {

	id<HKIncrementalSearchBarDelegate> _searchBarDelegate;
	HKIncrementalSearchBar* _searchBar;
	HKBarButtonItemControl* _upBarButton;
	HKBarButtonItemControl* _downBarButton;
	HKBarButtonItemControl* _doneBarButton;
	_SearchEntryWithMatchDisplay* _searchEntry;

}

@property (assign,nonatomic,__weak) id<HKIncrementalSearchBarDelegate> searchBarDelegate;              //@synthesize searchBarDelegate=_searchBarDelegate - In the implementation block
@property (nonatomic,__weak,readonly) HKIncrementalSearchBar * searchBar;                              //@synthesize searchBar=_searchBar - In the implementation block
@property (nonatomic,readonly) HKBarButtonItemControl * upBarButton;                                   //@synthesize upBarButton=_upBarButton - In the implementation block
@property (nonatomic,readonly) HKBarButtonItemControl * downBarButton;                                 //@synthesize downBarButton=_downBarButton - In the implementation block
@property (nonatomic,readonly) HKBarButtonItemControl * doneBarButton;                                 //@synthesize doneBarButton=_doneBarButton - In the implementation block
@property (nonatomic,readonly) _SearchEntryWithMatchDisplay * searchEntry;                             //@synthesize searchEntry=_searchEntry - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)inputField;
-(HKBarButtonItemControl *)doneBarButton;
-(void)setSearchBarDelegate:(id<HKIncrementalSearchBarDelegate>)arg1 ;
-(id)initWithSearchBar:(id)arg1 ;
-(_SearchEntryWithMatchDisplay *)searchEntry;
-(id<HKIncrementalSearchBarDelegate>)searchBarDelegate;
-(HKBarButtonItemControl *)upBarButton;
-(HKBarButtonItemControl *)downBarButton;
-(void)buildSearchBarContent;
-(void)upAction:(id)arg1 ;
-(void)downAction:(id)arg1 ;
-(void)searchBar:(id)arg1 textDidChange:(id)arg2 ;
-(void)searchBarSearchButtonClicked:(id)arg1 ;
-(HKIncrementalSearchBar *)searchBar;
@end

