/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:33 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString;

@interface RWIProtocolDebuggerBreakpointAction : RWIProtocolJSONObject

@property (assign,nonatomic) long long type; 
@property (nonatomic,copy) NSString * data; 
@property (assign,nonatomic) int identifier; 
-(int)identifier;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(void)setIdentifier:(int)arg1 ;
-(id)initWithType:(long long)arg1 ;
-(NSString *)data;
-(void)setData:(NSString *)arg1 ;
@end

