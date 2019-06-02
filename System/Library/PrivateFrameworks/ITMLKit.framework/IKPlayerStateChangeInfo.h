/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:34 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface IKPlayerStateChangeInfo : NSObject {

	NSDictionary* _jsonValue;
	long long _state;
	long long _oldState;

}

@property (nonatomic,copy) NSDictionary * jsonValue;              //@synthesize jsonValue=_jsonValue - In the implementation block
@property (nonatomic,readonly) long long state;                   //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) long long oldState;                //@synthesize oldState=_oldState - In the implementation block
@property (assign,nonatomic) double duration; 
@property (assign,nonatomic) double elapsedTime; 
@property (assign,nonatomic) double rate; 
+(id)stateNameForState:(long long)arg1 ;
-(NSDictionary *)jsonValue;
-(void)setJsonValue:(NSDictionary *)arg1 ;
-(id)initWithState:(long long)arg1 oldState:(long long)arg2 ;
-(long long)oldState;
-(id)initWithState:(long long)arg1 ;
-(void)setElapsedTime:(double)arg1 ;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(long long)state;
-(void)setDuration:(double)arg1 ;
-(double)duration;
-(double)elapsedTime;
-(void)setRate:(double)arg1 ;
-(double)rate;
@end

