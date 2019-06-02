/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:59 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CXCallObserverDelegate.h>

@class CXCallObserver, NSDate, NSString;

@interface IMCallMonitor : NSObject <CXCallObserverDelegate> {

	CXCallObserver* _callCenter;
	BOOL _wasOnCall;
	NSDate* _lastCallDate;

}

@property (nonatomic,readonly) BOOL isOnCall; 
@property (nonatomic,retain,readonly) NSDate * dateLastCallEnded;              //@synthesize lastCallDate=_lastCallDate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(BOOL)isOnCall;
-(NSDate *)dateLastCallEnded;
-(void)callObserver:(id)arg1 callChanged:(id)arg2 ;
-(id)init;
-(void)dealloc;
@end
