/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:00 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SetupAssistantUI/BFFSplashController.h>
#import <libobjc.A.dylib/STIntroViewController.h>

@class STIntroductionModel, NSString;

@interface STIntroSplashViewController : BFFSplashController <STIntroViewController> {

	/*^block*/id completionBlock;
	STIntroductionModel* _model;

}

@property (retain) STIntroductionModel * model;                     //@synthesize model=_model - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy) id completionBlock; 
-(void)setModel:(STIntroductionModel *)arg1 ;
-(id)initWithIntroductionModel:(id)arg1 ;
-(void)setCompletionBlock:(id)arg1 ;
-(STIntroductionModel *)model;
-(id)completionBlock;
@end
