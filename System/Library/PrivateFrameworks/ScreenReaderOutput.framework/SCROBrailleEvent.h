/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:12 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SCROBrailleEvent : NSObject {

	int _type;
	id _data;
	id _data2;
	id _data3;
	BOOL _shouldDisplay;

}

@property (nonatomic,readonly) int type; 
@property (assign,nonatomic) BOOL shouldDisplay;              //@synthesize shouldDisplay=_shouldDisplay - In the implementation block
+(id)eventWithType:(int)arg1 data:(id)arg2 ;
+(id)eventWithType:(int)arg1 data:(id)arg2 data2:(id)arg3 data3:(id)arg4 ;
-(BOOL)shouldDisplay;
-(void)setShouldDisplay:(BOOL)arg1 ;
-(id)data3;
-(id)initWithType:(int)arg1 data:(id)arg2 data2:(id)arg3 data3:(id)arg4 ;
-(id)data2;
-(id)description;
-(int)type;
-(id)data;
@end

