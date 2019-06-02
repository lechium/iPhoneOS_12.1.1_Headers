/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:23 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface IMLoggerOutput : NSObject

@property (readonly) long long loggingLevel; 
+(long long)loggingLevelFromString:(id)arg1 ;
+(id)loggerOutputFromLoggingLevel:(long long)arg1 ;
+(id)loggerOutputFromString:(id)arg1 ;
-(void)logForCategory:(const char*)arg1 string:(id)arg2 ;
-(long long)loggingLevel;
-(id)description;
@end

