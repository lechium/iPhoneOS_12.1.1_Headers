/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:17 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableString, NSRegularExpression;

@interface MiroAutoEditLogger : NSObject {

	BOOL _logsToConsole;
	NSMutableString* _log;
	long long _loggingLevel;
	long long _indentationLevel;
	NSRegularExpression* _framesRegex;
	long long _disableLoggingCount;

}

@property (nonatomic,retain) NSMutableString * log;                          //@synthesize log=_log - In the implementation block
@property (assign,nonatomic) long long loggingLevel;                         //@synthesize loggingLevel=_loggingLevel - In the implementation block
@property (assign,nonatomic) long long indentationLevel;                     //@synthesize indentationLevel=_indentationLevel - In the implementation block
@property (nonatomic,retain) NSRegularExpression * framesRegex;              //@synthesize framesRegex=_framesRegex - In the implementation block
@property (assign,nonatomic) long long disableLoggingCount;                  //@synthesize disableLoggingCount=_disableLoggingCount - In the implementation block
@property (assign,nonatomic) BOOL logsToConsole;                             //@synthesize logsToConsole=_logsToConsole - In the implementation block
-(void)logAndDescribeFrameCounts:(BOOL)arg1 level:(long long)arg2 formatString:(id)arg3 ;
-(void)setFramesRegex:(NSRegularExpression *)arg1 ;
-(void)setLog:(NSMutableString *)arg1 ;
-(void)setLoggingLevel:(long long)arg1 ;
-(long long)disableLoggingCount;
-(long long)loggingLevel;
-(NSRegularExpression *)framesRegex;
-(BOOL)logsToConsole;
-(void)setDisableLoggingCount:(long long)arg1 ;
-(void)incrementIndentationLevel;
-(void)decrementIndentationLevel;
-(void)disableLogging;
-(void)enableLogging;
-(void)setLogsToConsole:(BOOL)arg1 ;
-(id)init;
-(void)commit;
-(long long)indentationLevel;
-(void)setIndentationLevel:(long long)arg1 ;
-(NSMutableString *)log;
@end

