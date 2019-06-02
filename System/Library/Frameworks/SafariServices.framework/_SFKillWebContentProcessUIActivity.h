/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:50 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariServices/_SFActivity.h>

@protocol _SFKillWebContentProcessUIActivityDelegate;
@interface _SFKillWebContentProcessUIActivity : _SFActivity {

	id<_SFKillWebContentProcessUIActivityDelegate> _webProcessDelegate;

}

@property (assign,nonatomic,__weak) id<_SFKillWebContentProcessUIActivityDelegate> webProcessDelegate;              //@synthesize webProcessDelegate=_webProcessDelegate - In the implementation block
-(id<_SFKillWebContentProcessUIActivityDelegate>)webProcessDelegate;
-(void)setWebProcessDelegate:(id<_SFKillWebContentProcessUIActivityDelegate>)arg1 ;
-(id)activityTitle;
-(id)activityType;
-(id)activityImage;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(void)performActivity;
-(id)_beforeActivity;
@end

