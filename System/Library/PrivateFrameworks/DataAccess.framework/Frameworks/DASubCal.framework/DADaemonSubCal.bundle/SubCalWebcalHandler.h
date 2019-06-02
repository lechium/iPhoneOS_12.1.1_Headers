/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:54 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DASubCal.framework/DADaemonSubCal.bundle/DADaemonSubCal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DADaemonSubCal/DADaemonSubCal-Structs.h>
#import <DADaemonSubCal/DAValidityCheckConsumer.h>
#import <DADaemonSubCal/DADataclassLockWatcher.h>

@protocol SubCalWebcalHandlerConsumer;
@class SubCalAccount, NSString;

@interface SubCalWebcalHandler : NSObject <DAValidityCheckConsumer, DADataclassLockWatcher> {

	BOOL _haveShownSubscribeAlert;
	BOOL _haveTriedHTTPS;
	int _calendarId;
	SubCalAccount* _account;
	id<SubCalWebcalHandlerConsumer> _consumer;
	NSString* _urlString;

}

@property (nonatomic,retain) SubCalAccount * account;                                      //@synthesize account=_account - In the implementation block
@property (assign,nonatomic,__weak) id<SubCalWebcalHandlerConsumer> consumer;              //@synthesize consumer=_consumer - In the implementation block
@property (nonatomic,copy) NSString * urlString;                                           //@synthesize urlString=_urlString - In the implementation block
@property (assign,nonatomic) int calendarId;                                               //@synthesize calendarId=_calendarId - In the implementation block
@property (assign,nonatomic) BOOL haveShownSubscribeAlert;                                 //@synthesize haveShownSubscribeAlert=_haveShownSubscribeAlert - In the implementation block
@property (assign,nonatomic) BOOL haveTriedHTTPS;                                          //@synthesize haveTriedHTTPS=_haveTriedHTTPS - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)outstandingSetupRequests;
-(int)calendarId;
-(void)setCalendarId:(int)arg1 ;
-(id)waiterID;
-(NSString *)urlString;
-(void)setUrlString:(NSString *)arg1 ;
-(void)account:(id)arg1 isValid:(BOOL)arg2 validationError:(id)arg3 ;
-(SubCalAccount *)account;
-(void)handleWebcalURLString:(id)arg1 withConsumer:(id)arg2 ;
-(void)_tellConsumerWereFinished;
-(void)_receiveWhereTo:(unsigned long long)arg1 ;
-(void)_showWhereTo;
-(void)_saveAccount;
-(void)_createCalendar;
-(void)_prepareForSave;
-(void)_receiveSubscribeAccount:(unsigned long long)arg1 ;
-(void)_receiveInvalidAccount:(unsigned long long)arg1 ;
-(void)_receiveAuthPrompt:(unsigned long long)arg1 notification:(CFUserNotificationRef)arg2 ;
-(BOOL)haveShownSubscribeAlert;
-(void)setHaveShownSubscribeAlert:(BOOL)arg1 ;
-(void)_showSubscribeAccount;
-(void)_showAuthPrompt;
-(BOOL)haveTriedHTTPS;
-(void)setHaveTriedHTTPS:(BOOL)arg1 ;
-(void)_showInvalidAccount;
-(id)_newAccountWithHost:(id)arg1 ;
-(id)_existingAccountLikeAccount:(id)arg1 ;
-(void)_showMatchingAccountAlertForAccount:(id)arg1 ;
-(void)_beginAccountSetupWithSubscriptionAtHost:(id)arg1 ;
-(void)setAccount:(SubCalAccount *)arg1 ;
-(id)init;
-(id<SubCalWebcalHandlerConsumer>)consumer;
-(void)setConsumer:(id<SubCalWebcalHandlerConsumer>)arg1 ;
@end

