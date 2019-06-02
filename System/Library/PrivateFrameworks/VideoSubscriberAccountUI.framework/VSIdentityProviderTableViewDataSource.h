/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:04 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewDataSource.h>

@class NSString, UITableView, NSArray, NSDictionary;

@interface VSIdentityProviderTableViewDataSource : NSObject <UITableViewDataSource> {

	NSString* _titleForTableHeader;
	UITableView* _tableView;
	NSArray* _identityProviders;
	unsigned long long _additionalProvidersMode;
	NSArray* _sections;
	NSDictionary* _destinationsBySectionIndexTitle;

}

@property (nonatomic,copy) NSArray * sections;                                          //@synthesize sections=_sections - In the implementation block
@property (nonatomic,copy) NSDictionary * destinationsBySectionIndexTitle;              //@synthesize destinationsBySectionIndexTitle=_destinationsBySectionIndexTitle - In the implementation block
@property (nonatomic,copy) NSString * titleForTableHeader;                              //@synthesize titleForTableHeader=_titleForTableHeader - In the implementation block
@property (nonatomic,retain) UITableView * tableView;                                   //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,copy) NSArray * identityProviders;                                 //@synthesize identityProviders=_identityProviders - In the implementation block
@property (assign,nonatomic) unsigned long long additionalProvidersMode;                //@synthesize additionalProvidersMode=_additionalProvidersMode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setIdentityProviders:(NSArray *)arg1 ;
-(void)setAdditionalProvidersMode:(unsigned long long)arg1 ;
-(void)setTitleForTableHeader:(NSString *)arg1 ;
-(unsigned long long)additionalProvidersMode;
-(id)identityProviderForRowAtIndexPath:(id)arg1 ;
-(NSArray *)identityProviders;
-(unsigned long long)_minimumProviderCountForIndexes;
-(void)setDestinationsBySectionIndexTitle:(NSDictionary *)arg1 ;
-(id)_additionalProvidersRowTitle;
-(void)_scrollToTableHeaderView;
-(NSDictionary *)destinationsBySectionIndexTitle;
-(id)_cellReuseIdentifierForRowAtIndexPath:(id)arg1 ;
-(long long)_cellStyleForRowAtIndexPath:(id)arg1 ;
-(id)_titleForRowAtIndexPath:(id)arg1 ;
-(long long)_textAlignmentForRowAtIndexPath:(id)arg1 ;
-(id)_textColorForRowAtIndexPath:(id)arg1 ;
-(NSString *)titleForTableHeader;
-(id)init;
-(UITableView *)tableView;
-(NSArray *)sections;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id)sectionIndexTitlesForTableView:(id)arg1 ;
-(void)setTableView:(UITableView *)arg1 ;
-(id)tableView:(id)arg1 indexPathForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3 ;
-(void)setSections:(NSArray *)arg1 ;
@end

