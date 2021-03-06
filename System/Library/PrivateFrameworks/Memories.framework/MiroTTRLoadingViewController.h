/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:15 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>

@class UILabel, UIActivityIndicatorView;

@interface MiroTTRLoadingViewController : UIViewController {

	UILabel* _radarCollectionInfoLabel;
	UIActivityIndicatorView* _activityIndicatorView;

}

@property (nonatomic,retain) UILabel * radarCollectionInfoLabel;                           //@synthesize radarCollectionInfoLabel=_radarCollectionInfoLabel - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * activityIndicatorView;              //@synthesize activityIndicatorView=_activityIndicatorView - In the implementation block
-(void)setActivityIndicatorView:(UIActivityIndicatorView *)arg1 ;
-(UIActivityIndicatorView *)activityIndicatorView;
-(UILabel *)radarCollectionInfoLabel;
-(void)setRadarCollectionInfoLabel:(UILabel *)arg1 ;
-(void)viewDidLoad;
-(void)didReceiveMemoryWarning;
@end

