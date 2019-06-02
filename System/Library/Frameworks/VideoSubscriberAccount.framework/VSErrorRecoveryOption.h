/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:00 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface VSErrorRecoveryOption : NSObject {

	BOOL _destructive;
	NSString* _localizedAlertButtonTitle;
	/*^block*/id _attemptHandler;

}

@property (nonatomic,copy) NSString * localizedAlertButtonTitle;                 //@synthesize localizedAlertButtonTitle=_localizedAlertButtonTitle - In the implementation block
@property (nonatomic,copy) id attemptHandler;                                    //@synthesize attemptHandler=_attemptHandler - In the implementation block
@property (assign,getter=isDestructive,nonatomic) BOOL destructive;              //@synthesize destructive=_destructive - In the implementation block
-(NSString *)localizedAlertButtonTitle;
-(void)setLocalizedAlertButtonTitle:(NSString *)arg1 ;
-(id)attemptHandler;
-(void)setAttemptHandler:(id)arg1 ;
-(BOOL)isDestructive;
-(void)setDestructive:(BOOL)arg1 ;
@end

