/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:55 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface TSUBacktrace : NSObject {

	void* _callstack;
	int _frames;
	int _initAdjustment;

}
+(id)backtrace;
+(id)caller;
+(id)callee;
+(id)new;
-(id)initWithAdjustment:(int)arg1 ;
-(id)callerAtIndex:(long long)arg1 ;
-(id)caller;
-(id)callee;
-(id)backtraceString;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
@end

