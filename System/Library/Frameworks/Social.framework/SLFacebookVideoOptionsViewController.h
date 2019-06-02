/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:52 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewController.h>

@protocol SLFacebookVideoOptionsDelegate;
@class NSArray, NSURL, SLVideoQualityOption;

@interface SLFacebookVideoOptionsViewController : UITableViewController {

	NSArray* _qualityOptions;
	NSURL* _videoAssetURL;
	SLVideoQualityOption* _selectedOption;
	id<SLFacebookVideoOptionsDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SLFacebookVideoOptionsDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_generateQualityOptionsWithAssetURL:(id)arg1 ;
-(id)initWithVideoAssetURL:(id)arg1 ;
-(void)setSelectedQualityOption:(id)arg1 ;
-(void)setDelegate:(id<SLFacebookVideoOptionsDelegate>)arg1 ;
-(id<SLFacebookVideoOptionsDelegate>)delegate;
-(void)viewDidLoad;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)didReceiveMemoryWarning;
@end

