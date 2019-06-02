/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:58 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface ManagedEventHandler : NSObject {

	char* _notifyString;
	int _NotifyToken;
	char* _transportMessageString;
	NSMutableArray* _managedEvents;

}
+(id)getHandlerByName:(id)arg1 ;
+(void)initialize;
-(void)didReceiveSyndrome:(id)arg1 ;
-(id)feedbackForEventId:(unsigned long long)arg1 ;
-(void)populateReply:(id)arg1 ForId:(unsigned long long)arg2 Count:(unsigned long long)arg3 ;
-(id)description;
-(id)initWithName:(id)arg1 ;
@end

