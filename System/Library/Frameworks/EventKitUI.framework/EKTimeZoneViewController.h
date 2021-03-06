/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:48 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <UIKitCore/UITableViewController.h>
#import <UIKit/UISearchControllerDelegate.h>

@protocol EKTimeZoneViewControllerDelegate;
@class UISearchController, NSTimeZone, NSArray, NSString;

@interface EKTimeZoneViewController : UITableViewController <UISearchControllerDelegate> {

	UISearchController* _searchController;
	int _style;
	int _chooserStyle;
	id<EKTimeZoneViewControllerDelegate> _delegate;
	NSTimeZone* _timeZone;
	NSArray* _cities;

}

@property (nonatomic,retain) NSArray * cities;                                                  //@synthesize cities=_cities - In the implementation block
@property (assign,nonatomic,__weak) id<EKTimeZoneViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSTimeZone * timeZone;                                               //@synthesize timeZone=_timeZone - In the implementation block
@property (nonatomic,readonly) int chooserStyle;                                                //@synthesize chooserStyle=_chooserStyle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithChooserStyle:(int)arg1 ;
-(int)chooserStyle;
-(void)setCities:(NSArray *)arg1 ;
-(NSArray *)cities;
-(void)setDelegate:(id<EKTimeZoneViewControllerDelegate>)arg1 ;
-(id<EKTimeZoneViewControllerDelegate>)delegate;
-(CGSize)preferredContentSize;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(NSTimeZone *)timeZone;
-(void)setTimeZone:(NSTimeZone *)arg1 ;
-(void)willDismissSearchController:(id)arg1 ;
@end

