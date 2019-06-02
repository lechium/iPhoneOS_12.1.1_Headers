/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:32 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CarPlaySupport/CPSBaseTemplateViewController.h>
#import <libobjc.A.dylib/CPSButtonDelegate.h>

@class NSArray, CPAlertTemplate, NSString;

@interface CPSFullScreenAlertViewController : CPSBaseTemplateViewController <CPSButtonDelegate> {

	NSArray* _alertButtons;

}

@property (nonatomic,readonly) CPAlertTemplate * alert; 
@property (nonatomic,retain) NSArray * alertButtons;                 //@synthesize alertButtons=_alertButtons - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CPAlertTemplate *)alert;
-(id)initWithAlert:(id)arg1 alertDelegate:(id)arg2 ;
-(NSArray *)alertButtons;
-(void)setAlertButtons:(NSArray *)arg1 ;
-(id)preferredFocusEnvironments;
-(void)viewDidLoad;
-(void)didSelectButton:(id)arg1 ;
@end

