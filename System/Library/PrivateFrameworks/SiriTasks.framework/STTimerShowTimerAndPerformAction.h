/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:25 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantServices/AFSiriRequest.h>

@class STTimer;

@interface STTimerShowTimerAndPerformAction : AFSiriRequest {

	unsigned long long _action;
	STTimer* _timer;

}
+(BOOL)supportsSecureCoding;
-(id)_initWithTimer:(id)arg1 action:(unsigned long long)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)action;
-(id)timer;
@end

