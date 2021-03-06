/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:56 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AirPortAssistant/AssistantSubUIViewController.h>
#import <libobjc.A.dylib/TableViewManagerDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>

@class UIView, UILabel, PPPoEConnectionUIViewController, NSString;

@interface PPPoEViewController : AssistantSubUIViewController <TableViewManagerDelegate, UINavigationControllerDelegate> {

	UIView* tableHeaderContainerView;
	UIView* justTextContainerView;
	UILabel* justTextLabel;
	PPPoEConnectionUIViewController* pppoeConnectionUIViewController;
	id previousNavDelegate;

}

@property (nonatomic,retain) UIView * tableHeaderContainerView; 
@property (nonatomic,retain) UIView * justTextContainerView; 
@property (assign,nonatomic) UILabel * justTextLabel; 
@property (retain) PPPoEConnectionUIViewController * pppoeConnectionUIViewController; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setJustTextContainerView:(UIView *)arg1 ;
-(void)setTableHeaderContainerView:(UIView *)arg1 ;
-(UILabel *)justTextLabel;
-(void)touchInCellAtIndexPath:(id)arg1 ;
-(BOOL)shouldChangeTextField:(id)arg1 atIndexPath:(id)arg2 forTextIndex:(unsigned long long)arg3 toString:(id)arg4 ;
-(id)valueForItemOfType:(id)arg1 atTypeIndex:(unsigned long long)arg2 inCellWithTag:(long long)arg3 ;
-(UIView *)justTextContainerView;
-(void)setJustTextLabel:(UILabel *)arg1 ;
-(UIView *)tableHeaderContainerView;
-(void)setupInitialTableHeaderConfiguration;
-(void)setPppoeConnectionUIViewController:(PPPoEConnectionUIViewController *)arg1 ;
-(PPPoEConnectionUIViewController *)pppoeConnectionUIViewController;
-(void)dealloc;
-(void)loadView;
-(void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3 ;
@end

