/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:57 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, NSMutableDictionary;

@interface EventDescription : NSObject {

	int _eventType;
	NSDate* _creationTimeStamp;
	unsigned long long _processId;
	char* _processName;
	char* _bundleId;
	long long _eventLen;
	void* _eventData;
	NSMutableDictionary* _eventQualifiers;
	id _eventKey;

}

@property (nonatomic,readonly) int eventType;                                      //@synthesize eventType=_eventType - In the implementation block
@property (nonatomic,readonly) NSDate * creationTimeStamp;                         //@synthesize creationTimeStamp=_creationTimeStamp - In the implementation block
@property (nonatomic,readonly) unsigned long long processId;                       //@synthesize processId=_processId - In the implementation block
@property (nonatomic,readonly) char* processName;                                  //@synthesize processName=_processName - In the implementation block
@property (nonatomic,readonly) char* bundleId;                                     //@synthesize bundleId=_bundleId - In the implementation block
@property (nonatomic,readonly) long long eventLen;                                 //@synthesize eventLen=_eventLen - In the implementation block
@property (nonatomic,readonly) void* eventData;                                    //@synthesize eventData=_eventData - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * eventQualifiers;              //@synthesize eventQualifiers=_eventQualifiers - In the implementation block
@property (nonatomic,retain) id eventKey;                                          //@synthesize eventKey=_eventKey - In the implementation block
-(void)setEventKey:(id)arg1 ;
-(id)eventKey;
-(unsigned long long)processId;
-(void*)eventData;
-(id)initWithType:(int)arg1 length:(long long)arg2 data:(void*)arg3 fromPid:(unsigned long long)arg4 named:(char*)arg5 bundleId:(const char*)arg6 ;
-(char*)originatorForLogging;
-(id)eventQualifierStringForKey:(id)arg1 ;
-(NSDate *)creationTimeStamp;
-(long long)eventLen;
-(NSMutableDictionary *)eventQualifiers;
-(void)dealloc;
-(id)description;
-(int)eventType;
-(char*)bundleId;
-(char*)processName;
@end

