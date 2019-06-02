/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:03 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface PAGenealogyTimestampedMessage : NSObject {

	double _machTime;
	unsigned long long _activityId;

}

@property (readonly) double machTime;                            //@synthesize machTime=_machTime - In the implementation block
@property (readonly) unsigned long long activityId;              //@synthesize activityId=_activityId - In the implementation block
@property (readonly) NSString * message; 
-(double)machTime;
-(unsigned long long)activityId;
-(id)initWithActivityId:(unsigned long long)arg1 atMachTime:(double)arg2 ;
-(long long)compareToOtherMessage:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)message;
@end
