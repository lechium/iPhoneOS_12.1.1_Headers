/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:19 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/CarPlay.framework/CarPlay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CarPlay/CPTemplate.h>
#import <libobjc.A.dylib/CPSearchClientTemplateDelegate.h>

@protocol CPSearchTemplateDelegate;
@class NSArray, NSString;

@interface CPSearchTemplate : CPTemplate <CPSearchClientTemplateDelegate> {

	id<CPSearchTemplateDelegate> _delegate;
	NSArray* _listItems;

}

@property (nonatomic,retain) NSArray * listItems;                                         //@synthesize listItems=_listItems - In the implementation block
@property (nonatomic,retain) id<CPSearchTemplateProviding> templateProvider; 
@property (assign,nonatomic,__weak) id<CPSearchTemplateDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)listItems;
-(void)setListItems:(NSArray *)arg1 ;
-(id)leadingNavigationBarButtons;
-(id)trailingNavigationBarButtons;
-(void)setLeadingNavigationBarButtons:(id)arg1 ;
-(void)setTrailingNavigationBarButtons:(id)arg1 ;
-(void)searchTemplate:(id)arg1 selectedResult:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)searchTemplateSearchButtonPressed:(id)arg1 ;
-(void)searchTemplate:(id)arg1 updateSearchResultsForSearchText:(id)arg2 completionResults:(/*^block*/id)arg3 ;
-(void)setDelegate:(id<CPSearchTemplateDelegate>)arg1 ;
-(id<CPSearchTemplateDelegate>)delegate;
@end

