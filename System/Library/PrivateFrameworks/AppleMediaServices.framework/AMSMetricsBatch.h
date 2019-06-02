/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:27 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ACAccount, NSURL, NSArray;

@interface AMSMetricsBatch : NSObject {

	ACAccount* _account;
	NSURL* _reportURL;
	NSArray* _events;
	NSArray* _eventDictionaries;

}

@property (nonatomic,retain) ACAccount * account;                      //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) NSURL * reportURL;                        //@synthesize reportURL=_reportURL - In the implementation block
@property (nonatomic,retain) NSArray * events;                         //@synthesize events=_events - In the implementation block
@property (nonatomic,retain) NSArray * eventDictionaries;              //@synthesize eventDictionaries=_eventDictionaries - In the implementation block
-(void)setEvents:(NSArray *)arg1 ;
-(NSArray *)events;
-(ACAccount *)account;
-(void)setAccount:(ACAccount *)arg1 ;
-(NSURL *)reportURL;
-(void)setReportURL:(NSURL *)arg1 ;
-(NSArray *)eventDictionaries;
-(void)setEventDictionaries:(NSArray *)arg1 ;
@end

