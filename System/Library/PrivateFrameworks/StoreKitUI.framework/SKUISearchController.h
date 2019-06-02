/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:14 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UISearchController.h>

@class UILabel, NSMutableString, SKUISearchBar;

@interface SKUISearchController : UISearchController {

	UILabel* _suffixLabel;
	NSMutableString* _paddingString;
	SKUISearchBar* _searchBar;

}

@property (nonatomic,readonly) SKUISearchBar * searchBar; 
@property (assign,nonatomic,__weak) id<SKUISearchControllerDelegate> delegate; 
-(void)_setSuffix:(id)arg1 ;
-(void)setActive:(BOOL)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(SKUISearchBar *)searchBar;
@end
